#include<iostream>
using namespace std;
int main(){
int  a,b;
cout<<"Enter the first number: "<<endl;
cin>>a;
cout<<"Enter the secound number: "<<endl;
cin>>b;
char op;
cout<<"Enter the operation you want to perfomance: "<<endl;
cin>>op;
switch (op)
{
case '+':
cout<<(a+b)<<endl;
    break;
case '-':
cout<< (a-b)<<endl;
break;
case '*':
cout<< (a*b)<<endl;
break;
case '/':
cout<<(a/b)<<endl;
break;
case '%':
cout<< (a%b);
break;
default:
cout<<"Please enter a valid operator"<<endl;
    break;
}
}