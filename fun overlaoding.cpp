#include<iostream>
 using namespace std;

 int sum(int x, int y)
 {
     return x+y;
 }
 double sum(double x, double y)

 {
     return x+y;
 }

 int sum (int x, int y, int z)
 {
     return x+y+z;
 }

 int main()
 {
 	 int first_number,second_number,third_number,sum,addition;
 	 cout<<"Enter three number:";
 	 cin>>first_number>>second_number>>third_number;
 	 sum=first_number+second_number;
 	 addition=first_number+second_number+third_number;
     cout <<"The Value of addition using two parameter is: "<<sum<<endl;
     cout <<"The Value of addition using three parameter is: "<<addition<<endl;
 }
