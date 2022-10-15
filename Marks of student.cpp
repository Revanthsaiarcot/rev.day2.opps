
#include<iostream>
using namespace std;
const char* findGrade(float [], int);
int main()
{
    int i, n;
    float mark[10];
    cout<<"Enter Number of Subjects (max. 10): ";
    cin>>n;
    cout<<"Enter Marks obtained in "<<n<<" Subjects: ";
    for(i=0; i<n; i++)
        cin>>mark[i];
    cout<<"\nGrade = "<<findGrade(mark, n);
    cout<<endl;
    return 0;
}
const char* findGrade(float mark[], int n)
{
    int i;
    float sum=0, avg;
    for(i=0; i<n; i++)
        sum = sum+mark[i];
    avg = sum/n;
    if(avg>=75 && avg<=100)
        return "DISTINCTION";
    else if(avg>=60 && avg<75)
        return "FIRST DIVISION";
    else if(avg>=50 && avg<60)
        return "SECOND DIVISION";
    else if(avg>=40 && avg<50)
        return "THIRD DIVISION";
    else if(avg>=0 && avg<40)
        return "FAIL";
    
    else
        return "Invalid!";
}
