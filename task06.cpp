#include<iostream>
using namespace std;
main()
{
 float charge;
 float time;
 float current;
 
cout << " Enter Charge(Q) : " ;
cin >> charge ;
cout << " Enter Time(t) : " ;
cin >> time ;
 current=charge/time;
cout << "Current is : " << current;
}