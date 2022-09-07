// Program to find the Greatest of Three Numbers in C++
#include<iostream>
using namespace std;

// simple if else

// int main() {
//     int a,b,c;
//     cout<<"Enter the numbers :"<<endl;
//     cin>>a;
//     cin>>b;
//     cin>>c;

//     if (a>b && a>c )
//     {
//         cout<<"A is the greater than B & C";
//     }
//     else if (b>a && b>c)
//     {
//          cout<<"B is the greater than A & C";
//     }
//     else 
//     {
//          cout<<"C is the greater than A & B";
//     }
//     return 0;
//}


// Using in built 

// int main() {
//     int a=10,b=40,c=30;
//     int result;
//     result = max(a,max(b,c));
//     cout<<result<<" is The largest";
//     return 0;
//}

//Using Ternary Operator

int main() {
    int a=0,b=20,c=1;
    int temp, result;
    temp = a>b ? a:b;
    result = temp>c ? temp:c;
    cout<<result<<" is the Largest";
    return 0;
}