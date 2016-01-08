//this program is for training function call,and there are two functions waited for call,
//and they cout some message as the following:
#include <iostream>

using namespace std;

void show_1(void)
{
	cout<<"Three blind mice"<<endl;
}

void show_2(void)
{
	cout<<"See how they run"<<endl;
}

int main()
{
	 show_1();
	 show_1();
	 show_2();
	 show_2();
	

	return 0;
}

//编写过程中出现的问题：
//1、when conducting function call in main(),I forgot the the difference between call and declaration,
//and just writing these scentences such as "void show_1(void)",which end up with no output 
//like "Three blind mice"