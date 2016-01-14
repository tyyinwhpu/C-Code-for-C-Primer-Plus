//in this proram,you are supposed to input the number of seconds int the type of int.
//and you'd better use long or longlong to store the variable.
//and then transfer the variable into hours,minutes,and seconds.
//use const to denote the transunit;

//the program runs like the following:

//Enter the number of seconds: 31600000
//31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds

#include <iostream>

int main( )
{
	using namespace std;

	const int trans_d = 3600*24;
	const int trans_h = 3600;
	const int trans_ms = 60;
	cout <<"Enter the number of seconds: ";
	long secTime;
	cin>>secTime;
	int days = secTime/trans_d;
	int hours = secTime % trans_d / trans_h;
	int minutes = secTime % trans_d % trans_h / trans_ms  ;
	int seconds = secTime % trans_d % trans_h % trans_ms ;
	cout <<secTime<<" seconds = "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds "<<endl;

	return 0;
}