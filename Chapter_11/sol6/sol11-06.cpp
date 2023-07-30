#include "Header.h"

// ������������ ������ Stonewt �� �������� ���� double 
Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn; // ������������� ������� 
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}
//-------------------------------------------------------------------------------------------------
// ������������ ������ Stonewt �� ������� � �������� ���� double 
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}
//-------------------------------------------------------------------------------------------------
// ����������� �� ���������, wt = 0 
Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}
//-------------------------------------------------------------------------------------------------
// ����������
Stonewt::~Stonewt()
{

}
//-------------------------------------------------------------------------------------------------
// ����������� ���� � ������� 
void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}
//-------------------------------------------------------------------------------------------------
// ����������� ���� � ������ 
void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}

bool Stonewt::operator==(Stonewt& st)
{
	return pounds == st.pounds ? true : false;
}
bool Stonewt::operator>=(Stonewt& st)
{

	return pounds >= st.pounds && stone >= st.stone ? true : false;
}
bool Stonewt::operator<=(Stonewt& st)
{
	return pounds <= st.pounds ? true : false;
}
bool Stonewt::operator>(Stonewt& st)
{
	return pounds > st.pounds ? true : false;
}
bool Stonewt::operator<(Stonewt& st)
{
	return pounds < st.pounds ? true : false;
}

bool Stonewt::operator!=(Stonewt& st)
{
	return pounds != st.pounds ? true : false;
}