//this program is to show your height in the form of meter and centimeter, 
//and then your weight in the form of pounds.
//and then you are supposed to convert these data into ISO standard.
//ie,your height should be in the form of meter,and your weight in the form of Kg.
//thus you caculate your BMI index with these data conveted above.
//parameter:  
//height :1.72meter;  weight:73Kg;  pounWeight:160.6 pounds


#include <iostream>

int main( )
{
	using namespace std;
	
	cout.setf(ios_base::fixed,ios_base::floatfield); 
	cout <<"Enter the meter number of your height:________\b\b\b\b\b\b\b\b";
	int meterheight;
	cin>>meterheight;
	cout <<"Enter your centimeter number of your height:________\b\b\b\b\b\b\b\b";
	int centiheight;
	cin>>centiheight;
	cout<<"Enter your weight in the form of pound:________\b\b\b\b\b\b\b\b ";
	float pounWeight; 
	cin >> pounWeight;

	const int lengthUnit =100;
	const float weightUnit = 2.2;

	float stanheight = float (centiheight)/lengthUnit + meterheight;
	float stanweight = float (pounWeight)/weightUnit;
	float BMI = stanweight/(stanheight*stanheight);

	cout <<"your height is: "<< stanheight<<" meters"<<endl;
	cout <<"your weight is: "<< stanweight<<" Kg"<<endl;
	cout <<"your BMI index is: "<<BMI<<endl;

	return 0;
}