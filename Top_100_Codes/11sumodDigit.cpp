#include<iostream>
using namespace std;

// bool isPrime(int n){
//     int count = 0;

//     if(n<2)
//         return false;
    
//     for(int i = 2;i< n; i++){
//         int(n%i)
//     }
// }

// int main() {
//     int num,sum =0;
//     cout<<"Enter the number :";
//     cin>>num;

//     while (num!=0)
//     {
//         sum += num%10;
//         num = num/10;
//     }
    
//     cout<<"Sum is :"<<sum;
//     return 0;
// }


// recursion Method:

int getsum(int num, int sum){
    if (num == 0)
        return sum;
    sum += num%10;

    return getsum(num/10, sum);
    
}

int main() {
    int num, sum = 0;
    num = 12345;
    cout<<num<<endl;
    cout<<getsum(num, sum);

    return 0;
}

