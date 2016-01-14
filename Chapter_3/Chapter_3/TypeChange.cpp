// this program is to testify the type changes of variable

#include <iostream>

int main( )
{
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield);	
	float tree = 3;             //int converted to float
	int guess(3.9832);          //double converted to int
	int debt = 7.2E12;
    cout << "tree = "<< tree << endl;
	cout << "guess = "<<guess << endl;
	cout << "debt = "<<debt<<endl;


	return 0;
}

//the outputs are as the following:
//tree = 3.000000
//guess = 3
//debt = 1634811904
// since that the int type cannot store number of 7.2E12,thus cause the obvious inaccuracy of the variable debt