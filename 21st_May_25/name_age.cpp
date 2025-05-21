#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char name[50];
    int age;
    cout<<"Enter name of person: "<<endl;
    cin>>name;
    cout<<"Enter the age of person"<<endl;
    cin>>age;
    if (age>18)
    {
       age=(age*2-8)/3;
    }
    else{
        age=(age*2-8)/3;
    }
    cout<<name<<"_"<<age;
}