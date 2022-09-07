#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    // if (num%2==0)
    //     cout<<num<<" : Number is Even";
    // else
    //     cout<<num<<" : Number is odd";
    
    // return 0;

    // Ternary opr

    num%2==0 ? cout<<"Even" : cout<<"Odd";
    return 0;
}