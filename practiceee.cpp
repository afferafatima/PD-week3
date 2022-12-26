#include<iostream>
using namespace std;
main()
{
 int days;
 float dollars;
 float earninginrupees;
 float monthlysalary;
 float totalbonussalary;
 float finalsalary;
 float earningperday;
 float annualsalary;
 float exchangerate;
 exchangerate=226;
cout<< " Enter days : " ;
cin >> days;
cout << "Enter income per day : " ;
cin >> dollars ;
 monthlysalary=dollars*days;
 annualsalary=monthlysalary*12;
 totalbonussalary=annualsalary+(2.5*monthlysalary);
 finalsalary=totalbonussalary-(totalbonussalary*0.25);
 earningperday=finalsalary/12;
 earninginrupees=earningperday*exchangerate;
 cout << " Your average earning per day is : " << earninginrupees ;
}