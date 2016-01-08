//this program is to training function call of transfering 
//light years to astronomical units

#include <iostream>

int lytoasunit(double lightyear)
{
	int asunit=lightyear*63240;
	return asunit;
}
int main()
{
	using namespace std;
	double lightyear;
	cout <<"Enter the number of light years: ";
	cin>>lightyear;
	cout<<endl<<lightyear<<"light years = "<<lytoasunit(lightyear)<<" astronomical units."<<endl;
	return 0;
}