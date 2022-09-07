#include<iostream>
using namespace std;

// int getSum(int n1,int n2){
//     if (n1>n2)
//     {
//         return 0;
//     }
//     return n1+getSum(n1+1,n2);
// }

// int main(){
//     int n1,n2;
//     cin>>n1;
//     cin>>n2;


//     int sol = getSum(n1,n2);

//     cout<<sol;

//     return 0;
//}

int calcSum(int a,int b){
    if (a>b)
    {
        return 0;
    }
    
    return b+ calcSum(a,b-1);
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;

    int sol = calcSum(a,b);
    cout<<sol;

    return 0;
}