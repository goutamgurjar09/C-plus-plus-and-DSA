//1009. Complement of Base 10 Integer

#include<iostream>
using namespace std;
class solution{
public:
  int complement(int num) {
    if(num == 0)//num is not 
     return 1;
    
    int ans = 0, multi = 1;
     while(num){
        int rem = num % 2;
        
        // if(rem == 0){ //instead of xor
        //     rem =1;
        // }
        // if(rem == 1)
        //  rem = 1;

        rem = rem ^ 1; 
        ans = ans + rem * multi;
        num /= 2;
        multi = multi*2;
     }
     return ans;
  }
};
int main(){
    int n,ans; 
    cin>>n;
    solution sol; // Create an instance of the solution class
    ans = sol.complement(n); // Call the member function using the instance
    cout<<ans;
}

//note:
// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

//complement of 4 is 3 means complement nikalne ke liye apko 0 ko 1 me and 1 ko 0 me convert krna pdega then ans milega 
//  100->4
//  011->3      

//----------------------
//ex-complement of 13 is-> 2

//first 13 ko binary me covert krege then jo bhi reminder aayega (1/0) usme 1 ko 0 and 0 ko 1 me convert krke complement nikal lenge
        // num/quotient
//               |
//base->//   2 - 13                 
        //   2 - 6 - 1-> convert 0  *   2^0  //rem(converted)*multi + ans  => 0
        //   2 - 3 - 0-> convert 1  *   2*1                                => 2
        //   2 - 1 - 1-> convert 0  *   2^2                                => 0
        //     - 0 - 1-> convert 0  *   2^3                                => 0
        // _____________      _______                                       _____ 
        //     1101     =>      0010   ->2 means        >>>>>>>>              2 -> final output
        // _____________

    //so formuls is -> ans=rem*mul + ans


//table of xor

    //   0 ^ 0 - 0                -   
    //   0 ^ 1 - 1
    //   1 ^ 0 - 1
    //   1 ^ 1 - 0
