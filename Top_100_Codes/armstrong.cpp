#include<bits/stdc++.h>
#include<math.h>
using namespace std;

// first find a order of number eg; 129 = 3
// int order(int x){
//     int length = 0;
//     while (x)
//     {
//         length++;
//         x = x%10;
//     }
//     return length;
// } 

// void amstrong(int low, int high) 
// {
//     for(int num = low; num <= high; num++){

//     }
// }


// int main(){

//     return 0;
// }

// function to pring amstrong number in a given range :

void findAmstrongI(int low, int high){

    for (int i = low+1; i <= high; ++i)
    {
        int x =i;
        int n = 0;
        while (x!=0)
        {
            x /= 10;
            ++n;
        }
        
    }

    // compute the poser of nth 
    int pow_sum = 0;
    x = i;
    while (x!= 0)
    {
        int digit = x%10;
        pow_sum += pow(digits, n);
        x /+ 10; 
    }

    

}