#include <bits/stdc++.h>
using namespace std;

int fact(int num){

    if(num<0)
        return(-1);
    if(num==0)
        return(1);
    else
    {
        return(num*fact(num-1));
    }
}

int main() {
    int fact(int);
    int f,value;
    cout<<"enter the values"<<endl;
    cin>>value;

    f = fact(value);
    cout<<"The factorial is :"<<f<<endl;

    return 0;


}