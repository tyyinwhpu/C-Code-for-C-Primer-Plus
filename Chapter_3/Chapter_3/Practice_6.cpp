//in this program, you are supposed to input the oil consumption in the form of litre and 
//kilometers with this amount of oil.

//parameters: 8.5L/100km

#include <iostream>

int main( )
{
	using namespace std;

	float mileage;
	float oil;
	cout<<"iuput the mileage in km by your vehicle: ";
	cin >>mileage;
	cout <<"input the oil consumption in L by your vehicle: ";
	cin>>oil;
	float ConsPerhundred;
	 ConsPerhundred = oil/(mileage/100);
	 cout <<"your vehicle consumes "<<ConsPerhundred<<" L per 100km."<<endl;


	return 0;
}