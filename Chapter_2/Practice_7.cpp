//this program is to display time in the aiming type
#include <iostream>

using namespace std;

void show(int hour, int minutes)
{
	cout <<"Time: "<<hour<<":"<<minutes<<endl;
}
int main()
{
	int hour;
	int minutes;
	cout <<"Enter the number of hours:";
	cin>>hour;
	cout<<endl;
	cout <<"Enter the number of minutes:";
	cin>>minutes;
	cout <<endl;
	show(hour,minutes);

	return 0;
}
