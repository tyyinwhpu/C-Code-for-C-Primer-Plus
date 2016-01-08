//this program is used to transfer Celsius value to Fahrenheit value
#include <iostream>

int main()
{
	using namespace std;

	int value;
	cin>>value;
	cout <<"Please enter a Celsius value:"<<value<<endl;
	cout<<value<<" degrees Celsius is "<<1.8*value+32.0<<" degrees Fahrenheit."<<endl;

	return 0;
}
