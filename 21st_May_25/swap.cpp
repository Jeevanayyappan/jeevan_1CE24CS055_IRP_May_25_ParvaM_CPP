#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Value of a= "<<a<<" and b= "<<b<<" before swapping"<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Value of a= "<<a<<" and b= "<<b<<" after swapping"<<endl;
}