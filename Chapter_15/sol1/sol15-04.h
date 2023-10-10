#pragma once
#include <iostream>
using namespace std;
#include <stdexcept> 
#include <string> 
#include <typeinfo>

class Remote;
class Tv
{
public:
	friend class Remote;   // Remote имеет доступ к закрытой части Тѵ 
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };

	Tv(int s = Off, int mc = 125) : state(s), volume(5),
		maxchannel(mc), channel(2), mode(Cable), input(TV) {}
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings() const; // display all settings
	void int_set(Remote& r);

private:
	int state;             // On или Off 
	int volume;            // дискретные уровни громкости 
	int maxchannel;        // максимальное количество каналов 
	int channel;           // текущие настройки канала
	int mode;              // эфирное или кабельное телевидение 
	int input;             // TV или DVD 
};
//-------------------------------------------------------------------------------------------------
class Remote
{
private:
	int mode;
	int mode_inter;// управление TV или DVD 
public:
	friend class Tv;
	enum Mode { Normal, Interactive };
	Remote(int m = Tv::TV) : mode(m), mode_inter(Normal) {}
	bool volup(Tv& t) { return t.volup(); }
	bool voldown(Tv& t) { return t.voldown(); }
	void onoff(Tv& t) { t.onoff(); }
	void chanup(Tv& t) { t.chanup(); }
	void chandown(Tv& t) { t.chandown(); }
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t) { t.set_mode(); }
	void set_input(Tv& t) { t.set_input(); }
	void settings();

};

inline void Tv::int_set(Remote& r)
{

	if (mode == On && r.mode_inter == Remote::Mode::Normal)
	{
		cout << "Now mode is Normal, switching... " << endl;
		r.mode_inter = Remote::Mode::Interactive;
	}
	else if (mode == On && r.mode_inter == Remote::Mode::Interactive)
	{
		cout << "Now mode is Interactive, switching... " << endl;
		r.mode_inter = Remote::Mode::Normal;
	}
	else
	{
		return;
	}
}

inline void Remote::settings()
{
	std::cout << "Remote is set to the ";
	std::cout << (mode == Tv::TV ? "TV" : "VCR");
	std::cout << " and is in ";
	std::cout << (mode_inter == Normal ? "Normal" : "Interactive") << " mode" << std::endl;
}