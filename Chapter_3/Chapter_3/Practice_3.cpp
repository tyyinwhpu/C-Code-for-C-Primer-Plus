//input a latitude in the form of degree, mimute, and second;
//and then show it in the type of degree.
//parameter:1degree = 60minutes; 1 minutes = 60 seconds;

// and the program runs like the following:

//Enter a latitude in degrees,minutes,and seconds:
//First, Enter the degrees: 37
//Next, Enter the minutes of arc: 51
//Finally,enter the seconds of arc: 19
//37degrees,51minutes,19seconds = 37.8553degrees


#include <iostream>

int main( )
{
	using namespace std;
    const int trans = 60;
	
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout <<"Enter a latitude in degrees,minutes,and seconds:"<<endl;
	cout <<"First, Enter the degrees: ";
	int degrees;
	cin >>degrees; //cout <<endl;
	cout <<"Next, Enter the minutes of arc: ";
	int minutes;
	cin >>minutes; //cout <<endl;
	cout <<"Finally,enter the seconds of arc: ";
	int seconds;
	cin >>seconds; //cout <<endl;

	float latitude = degrees + float (minutes)/trans + float (seconds)/trans/trans; 

	cout <<degrees<<"degrees, "<<minutes<<"minutes, "<<seconds<<"seconds = "<<latitude<<" degrees"<<endl;

	return 0;
}