#include<bits/stdc++.h>
using namespace std;

//1.  Find the cube of a number using Function. 
// long long int fineCube(int n){
//     long long int ans;
//     for(int i=1; i<=n; i++){
//        ans= i*i*i;
//     }
//      //for int overflow
//     // if(ans > INT_MAX/10 || ans < INT_MIN/10){
//     //         return 0;
//     // }

//     return ans;
// }

//---------------------

//2. Reverse a number n using Function, Constraints: -5000<=n<=5000
// int reverse(int n){
//     int rev = 0;
//     while(n>0){
//        int r = n % 10;
//        n /= 10; 
//        rev = rev * 10 + r;
//     }
//     return rev;
// }
// enter the num: 1234
// 4321

//--------------------

//3.Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000. 
 void Swap(long long int& a,long long int& b){
        a = a - b;
        b = a + b;
        a = b - a;
    
}
//enter the num: 100000 1000000
//1000000 100000


int main(){
//    int n;
//    cout<<"enter the num: ";
//    cin>>n;
  

   //cout<<fineCube(n);
   //----------
  // cout<<reverse(n);

  //----------
   long long int a,b;
   cout<<"enter the num: ";
   cin>>a>>b;

   Swap(a,b);
   cout<<a<<" "<<b;
}
