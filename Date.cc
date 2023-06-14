//Jordan Brown
//Honors
//.cc file

#include "Date.h"
#include <iostream>
#include <iomanip>
using namespace std;


//Date()
Date::Date()
{
	this->day=1;
	this->month=1;
	this->year=1970;
}

//Date Date(int month=1, int day=1, int year=1970);
Date::Date(int month, int day, int year)
{
	this->day=1;
	this->month=1;
	this->year=1970;
}

//setDay()
//Validation Leap Year and NUmber of Days in Months Validation
bool Date::setDay(int day_1)
{
	bool truth=0;
	if (((year%4)==0&&month==2)&&(day<30&&day>0))
		truth=1;
	if (((year%4)!=0&&month==2)&&(day<39&&day>0))
		truth=1;
	if ((month==9||month==4||month==6||month==11)&&(day<31&&day>0))
		truth=1;
	if ((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&(day>0&&day<32))
		truth=1;
	if (truth==1)
	{
		this->day=day_1;
	}

	if (truth==0)
	{
	this->day=1;
	this->month=1;
	this->year=1970;
	}

	return truth;

}

//getDay()
int Date::getDay()
{
	return day;
}

//setMonth
//Validation!
bool Date::setMonth(int month_1)
{
	if(month_1>=1 && month_1<=12)
	{
		month=month_1;
		return true;
	}
	else
	{
		return false;
	}
}

//getMonth
int Date::getMonth()
{
	return Month();
}

//setYear()
bool Date::setYear(int year_1)
{
	if(year_1>0);
	{
		year=year_1;
		return true;
	}
	else
	{
		return false;
	}
}

//getYear
int Date::getYear()
{
	return year;
}

//Print
void Date::print (int type)
{
	switch(type)
	{
		case 1:type=1;
		{
			{
				cout<<month<<"/"<<day<<"/"<<year;
				break;
			}
			break;
		}

		case 2:type=2;
		{	string Month;
			switch (month)
			{
				case 1: Month="January";
				break;

				case 2: Month="February";
				break;

				case 3: Month="March";
				break;

				case 4: Month="April";
				break;

				case 5: Month="May";
				break;

				case 6: Month="June";
				break;

				case 7: Month="July";
				break;

				case 8: Month="August";
				break;

				case 9: Month="September";
				break;

				case 10: Month="October";
				break;

				case 11: Month="November";
				break;

				case 12: Month="December";
				break;
			}
			cout<<Month<<" "<<day<<", "<<year;
			break;
		}

		case 3: type=2;
		{
			string Month;
			switch (month)
			{
				case 1: Month="January";
				break;

				case 2: Month="February";
				break;

				case 3: Month="March";
				break;

				case 4: Month="April";
				break;

				case 5: Month="May";
				break;

				case 6: Month="June";
				break;

				case 7: Month="July";
				break;

				case 8: Month="August";
				break;

				case 9: Month="September";
				break;

				case 10: Month="October";
				break;

				case 11: Month="November";
				break;

				case 12: Month="December";
				break;
			}
			cout<<day<<" "<<Month<<" "<<year;
			break;
		}
	}
}

Date Date::operator++()
{
	if (month==12&&day==31)
	{
	    year++;
	    day=1;
	    month=1;
	}

	else if (((year%4)==0)&&(month==2)&&(day==29))
    {
        month++;
        day=1;
    }
    else if ((month==4||month==6||month==9||month==11)&&(day==30))
    {
        month++;
        day=1;
    }
    else if ((month==1||month==3||month==5||month==7||month==8||month==10)&&(day==31)
    {
        month++;
        day=1;
    else
    {
        day++;
    }
    }
}

Date Date::operator++(int)
{
	if (month==12&&day==31)
	{
	    year++;
	    day=1;
	    month=1;
	}

	else if (((year%4)==0)&&(month==2)&&(day==29))
    {
        month++;
        day=1;
    }
    else if (((year%4)!=0)&&(month==2)&&(day==28))
    {
        month++;
        day=1;
    }
    else if ((month==4||month==6||month==9||month==11)&&(day==30))
    {
        month++;
        day=1;
    }
    else if ((month==1||month==3||month==5||month==7||month==8||month==10)&&(day==31)
    {
        month++;
        day=1;
    else
    {
        day++;
    }
    }
}

Date Date::operator--()
{
	if (month==1&&day==1)
	{
	    year--;
	    day=31;
	    month=12;
	}

	else if (((year%4)==0)&&(month==3)&&(day==1))
    {
        month--;
        day=29;
    }
    else if (((year%4)!=0)&&(month==3)&&(day==1))
    {
        month--;
        day=28;
    }
    else if ((month==5||month==7||month==10||month==12)&&(day==1))
    {
        month--;
        day=30;
    }
    else if ((month==2||month==4||month==6||month==8||month==9||month==11)&&(day==1)
    {
        month--;
        day=31;
    else
    {
        day--;
    }
    }
}

Date Date::operator--(int)
{
	if (month==1&&day==1)
	{
	    year--;
	    day=31;
	    month=12;
	}

	else if (((year%4)==0)&&(month==3)&&(day==1))
    {
        month--;
        day=29;
    }
    else if (((year%4)!=0)&&(month==3)&&(day==1))
    {
        month--;
        day=28;
    }
    else if ((month==5||month==7||month==10||month==12)&&(day==1))
    {
        month--;
        day=30;
    }
    else if ((month==2||month==4||month==6||month==8||month==9||month==11)&&(day==1)
    {
        month--;
        day=31;
    else
    {
        day--;
    }
    }
}


int Date::operator- (const Date &right)
{
    int total_1=0, total_2=0;

    for(int i=1; i<year; i++)
    {
        if ((i%4)!=0)
        {
            total_1=total_1+365;
        }
        else
        {
            total_1=total_1+366;
        }
    }
    if (month>=2)
        total_1=total_1+31;
    if (month>=3)
        total_1=total_1+28;
    if (month>=4)
        total_1=total_1+31;
    if (month>=5)
        total_1=total_1+30;
    if (month>=6)
        total_1=total_1+31;
    if (month>=7)
        total_1=total_1+30;
    if (month>=8)
        total_1=total_1+31;
    if (month>=9)
        total_1=total_1+31;
    if (month>=10)
        total_1=total_1+30;
    if (month>=11)
        total_1=total_1+31;
    if (month>=12)
        total_1=total_1+30;

    total_1=total_1+day;

    for (int j=1;j<right.year; j++)
    {
        if((j%4)!=0)
        {
            total_2=total_2+365;
        }
        else
        {
            total_2=total_2+366
        }
    }
    if (right.month>=2)
        total_2=total_2+31;
    if (right.month>=3)
        total_2=total_2+28;
    if (right.month>=4)
        total_2=total_2+31;
    if (right.month>=5)
        total_2=total_2+30;
    if (right.month>=6)
        total_2=total_2+31;
    if (right.month>=7)
        total_2=total_2+30;
    if (right.month>=8)
        total_2=total_2+31;
    if (right.month>=9)
        total_2=total_2+31;
    if (right.month>=10)
        total_2=total_2+30;
    if (right.month>=11)
        total_2=total_2+31;
    if (right.month>=12)
        total_2=total_2+30;

    total_2=total_2+right.day;

    if (total_1>=total_2)
    {
        total_1=total_1-total_2;
    }
    else
    {
        total_1=total_2-total_1;
    }

    return total_1;
}

ostream & operator << (ostream &out, Const Date &right)
{
	out << right.month << "/" << right.day << "/" << right.year;
	return out;
}

friend istream & operator >> (istream &in, Date &d)
{
    int tempMonth, tempDay, tempYear;

    cout << "Enter a date in mm/dd/yyyy format: " << endl;

    cin>>tempMonth>>tempDay>>tempYear;

    if(d.setMonth(tempMonth))
        if(d.setDay(tempDay))
            if(d.setYear(tempYear));

    return in;
}

