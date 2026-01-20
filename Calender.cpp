#include<bits/stdc++.h>
using namespace std;

string days[] = {"sun","mon","tue","wed","thu","fri","sat"};
string months[] = {"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};

int daysInMonth[] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};

bool isLeapYear(int year)
{
    if(year%4==0 || year%100 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int month,year;
    cout<<"enter the month of the calender(1-12): ";
    cin>>month;
    cout<<"Enter the year of the calender: ";
    cin>>year;

    int startDay = 3;
    if(isLeapYear(year))
    {
        daysInMonth[1]=29;
    }

    cout<<"              "+months[month-1]<<" "<<year<<endl;
   for (int i = 0; i < 7; i++) 
    {
        cout << setw(5)<< days[i];
    }
    cout<<endl;
   for (int day = 1; day <= daysInMonth[month - 1]; day++) 
    {
        cout <<setw(5)<< day;
        if ((day + startDay) % 7 == 0) 
        {
            cout << endl;
        }
    }

}