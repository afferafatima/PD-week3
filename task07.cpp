#include<iostream>
using namespace std;
main()
{
 string name;
 float matric_marks;
 float fsc_marks;
 float ecat_marks;
 float result1;
 float result2;
 float result3;
 float result;
 float a;
 a=0.0091;
 float b;
 b=0.076;
 float c;
 c=0.125;

cout << " Your Name is : " ;
cin >> name;
cout << " Matric Marks : " ;
cin >> matric_marks;
cout << " FSC Marks : " ;
cin >> fsc_marks;
cout << "  ECAT marks : " ;
cin >> ecat_marks;
result1=matric_marks*a;
result2=fsc_marks*b;
result3=ecat_marks*c;
result=result1+result2+result3;
cout << " Your aggregate is : " << result ;
}