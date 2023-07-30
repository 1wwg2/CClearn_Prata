#include "Header.h"
#include <iostream>
#include <cstring>
#include <iostream>


using std::cout;
//-------------------------------------------------------------------------------------------------
// Конструирует объект Stonewt из значения типа double 
Stonewt::Stonewt(double lbs)
{
	state = DOUBLE_FUNTS;
	stone = int(lbs) / Lbs_per_stn; // целочисленное деление 
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}
//-------------------------------------------------------------------------------------------------
// Конструирует объект Stonewt из стоунов и значения типа double 
Stonewt::Stonewt(int stn, double lbs)
{
	state = DOUBLE_FUNTS;
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}
//-------------------------------------------------------------------------------------------------
// конструктор по умолчанию, wt = 0 
Stonewt::Stonewt()
{
	state = DOUBLE_FUNTS;
	stone = pounds = pds_left = 0;

}
//-------------------------------------------------------------------------------------------------
// деструктор
Stonewt::~Stonewt()
{

}

void Stonewt::mode(int ch)
{
	if (ch == 0)
	{
		state = STOWN;
	}
	else if (ch == 1)
	{
		state = INT_FUNTS;
	}
	else if (ch == 2)
	{
		state = DOUBLE_FUNTS;
	}
	else
	{
		state = state;
	}

}
Stonewt Stonewt::operator+(Stonewt& st)
{
	Stonewt temp;
	state == DOUBLE_FUNTS;
	temp.pounds = pounds + st.pounds;
	temp.pds_left = pds_left + st.pds_left;
	temp.stone = stone + st.stone;
	return temp;
}
Stonewt Stonewt::operator-(Stonewt& st)
{
	Stonewt temp;
	state == DOUBLE_FUNTS;
	temp.pounds = pounds - st.pounds;
	temp.pds_left = pds_left - st.pds_left;
	temp.stone = stone - st.stone;
	return temp;
}
Stonewt Stonewt::operator*(Stonewt& st)
{
	Stonewt temp;
	state == DOUBLE_FUNTS;
	temp.pounds = pounds * st.pounds;
	temp.pds_left = pds_left * st.pds_left;
	temp.stone = stone * st.stone;
	return temp;
}



ostream& operator<<(ostream& os, Stonewt& st)
{
	if (st.state == st.INT_FUNTS)
	{
		os << (int)st.pounds << " pounds.";
	}
	else if (st.state == st.DOUBLE_FUNTS)
	{
		os << (double)st.pounds << " pounds.";
	}
	else if (st.state == st.STOWN)
	{
		os << st.stone << " stone, " << st.pds_left << " pounds.";
	}


	return os;
}