// in this program ,you are supposed to input the population of the whole world as well as the P.R.C.
// these variables are stored as a longlong type,and then the program should need demonstrate the ratio 
// of chinese population to the world population.

// the program runs as the following:

// Enter the world's population:6898758899
// Enter the populaiton of the P.R.C.:1370536875
// The population of the P.R.C. is 19.86643% of the world population.

#include <iostream>

int main( )
{
	using namespace std;
	
	long long worpeople;
	long long chipeople; 
	
  //cout.setf(ios_base::fixed, ios_base::floatfield);
	
	cout <<"Enter the world's population: ";
	cin >>worpeople;
	cout <<"Enter the populaiton of the P.R.C.: ";
	cin >>chipeople;
	
	float ratio = float(chipeople)/float(worpeople)*100;
	cout <<"The population of the P.R.C. is "<<ratio<<"%"<<" of the world population."<<endl;
	
	return 0;
}