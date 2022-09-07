// Programe to reverse a number in c++ 
// we will use loop and arthematic opertor 


// Method 1
#include <bits/stdc++.h>
using namespace std;



// int main() {
//     int rem,reverse = 0;
//     int num;
//     cout<<"enter the number :"<<endl;
//     cin>>num;

//     while (num !=0)
//     {
//        rem = num%10;
//          reverse = reverse*10 + rem;
//             num = num/10; 
//     }
    
//     cout<<"Reverse number is :"<<reverse;


//     return 0;
// }

// Method 2 recursion
#include <bits/stdc++.h>
using namespace std;

// int rev(int num, int reverse){
//     if (num == 0)
//         return reverse;
//     reverse = reverse*10 + num%10;
//     return rev(num/10, reverse);
    
// }

// int main() {
//     int num, reverse = 0;
//     num = 12345;
//     cout<<num<<endl;
//     cout<<rev(num, reverse);

//     return 0;
// }

//sum of two numbers

int main() {
    int num1, num2, sum;
    cout<<"Enter the first number :"<<endl;
    cin>>num1;
    cout<<"Enter the second number :"<<endl;
    cin>>num2;
    sum = num1 + num2;
    cout<<"Sum of two numbers is :"<<sum;

    return 0;
}

// Method 3

// #include <bits/stdc++.h>
// using namespace std;

reverse a number 

#include <bits/stdc++.h>    // header file
using namespace std;

int main() {
    int num, reverse = 0;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    while (num != 0)
    {
        reverse = reverse*10 + num%10;
        num = num/10;
    }
    cout<<"Reverse number is :"<<reverse;
    
    return 0;
}
