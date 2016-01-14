// practice:
//point out your height in centimeter,and then convert the number into meter-type
//key sentence  

#include <iostream>
 int main( )
 {
	 using namespace std;

	 const int measure = 100;

	 cout.setf(ios_base::fixed, ios_base::floatfield);
	 cout <<"Enter your height in centemeter:_______\b\b\b\b\b";
	 int cenheight;
	 cin >>cenheight;
	 cout <<"your height is: "<<endl<<cenheight<<" in centimeter"<<endl;
	 float meheight= float (cenheight)/measure;
	 cout <<"and "<<meheight<<" in meter"<<endl;


	 return 0;
 }

 //notice :
 //1. if without transferring cenheight to float type befre calculating division will cause inaccuracy to 
 //the value of meheight

//2. the following listed out the inaccuracies I meet during programing;
 //cout<<cenheight/measure; :and the output is 1;
 // float meheight = cenheight/measure; 
 //cout << meheight; :and then the output is 1.000000