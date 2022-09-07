#include<iostream>
using namespace std;

bool checkPrime(int n, int i){
    if (n<2)
    {
        return false;
    }
    
    if (i==n)
    {
        return true;
    }
    
    if (n % i == 0)
    {
        return false;
    }
    
    i+=1;
    return checkPrime(n,1);
}

int main(){
    int i = 2;
    bool isprime = true;

    int n= 32;
    isprime = checkPrime(n,i);

    string result = isprime ? "Prime":"Not Prime";
    cout<<n<<" is: "<<result;

    return 0;
    
}