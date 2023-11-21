#include<iostream>
using namespace std;
int main(){
    int n;
    int x=80 , count=0;
    // cout<<"Guess a number B/W 1 to 100."<<endl;
    cout<<"--------------Welcome To Number Guessing Game--------------"<<endl;
cout<<"******You have to guess a number between 1 to 100******"<<endl;
    cout<<"Enter The Number: ";
    for (int i = 0; i <=10; i++)
    {
        cin>>n;
        count=i;

    
    if (n<x)
     
        cout<<"guess a greater number."<<endl;
     else if (n>x)
 
        cout<<"guess a smaller number."<<endl;

    
    else
        cout<<"you are correct.";
    if (n==x)
    break;
    }
        cout<<endl<<"you took "<<count<<"chance.";
    
    
    
    
}