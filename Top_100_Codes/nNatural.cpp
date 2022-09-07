#include<iostream>
using namespace std;



// int main(){
//     int n,sum = 0;
//     cin>>n;

//     if (n>9)
//     {
//         cout<<"Not natural number"<<endl;
//     }
//     else
//         for (int i = 0; i <=n; i++)
//         sum+=i;

    
//     cout<<"sum is :"<<sum;
//     return 0;
// }

int getsum(int n){
    if(n==0)
        return 0;
    
    return n+getsum(n-1);
}

int main(){
    int n;
    cout << "enter the number :";
    cin>>n;

    int sum = getsum(n);

    cout<< sum;
    return 0;
}