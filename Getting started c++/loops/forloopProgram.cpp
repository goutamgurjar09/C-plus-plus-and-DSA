#include<iostream>
using namespace std;
int main(){
//    int n;
//    cout<<"enter num : ";
//    cin>>n;
//   int i;
//    for(i = 100; i<=200; i++){
//       cout<<i<<endl;
//    }


//print a to z
//    char ch;
//    for(ch = 'a'; ch<='z'; ch++){
//       cout<<ch<<endl;
//    }

//a to z using Ascii val
//    int ch;
//    for(int ch = 97; ch<=122; ch++){
//       cout<<char(ch)<<endl;
//    }

//A to Z using Ascii val
//    int ch;
//    for(int ch = 65; ch<=90; ch++){
//       cout<<char(ch)<<endl;
//    }

//print 10 to 1
    // for(i = 10; i>=1; i--){
    //   cout<<i<<endl;
    // }
    //to input from user
    // for(i = n; i>=1; i--){
    //   cout<<i<<endl;
    // }


//print 1 to 100 but the condition is you have to follow 3 jump path-> means i+=3

//  for(i = 1; i<=100; i+=3){
//       cout<<i<<endl;
//  }

//print table of any number 
// for(i = 1; i<=10; i+=1){
//       //cout<<n * i<<endl;
//       cout<<n <<"*"<<i<<" = "<<  n * i<<endl;
// }

//2nd way
// for(i = n; i<=10*n; i+=n){
//       //cout<<n * i<<endl;
//       cout<<n <<"*"<<i<<" = "<<i<<endl;
// }


//print power of any number //5^4
 
// int n1 ,pow;
// cout<<"enter n1 and power: ";
// cin>>n1>>pow;
// int num = n1;//bcz num  change hoga every time and n1 same rhega

// for(i = 1; i<pow; i++){
//     num = num * n1;    
// }
// cout<<num<<endl;

//hm loop isliye <pow running kr rhe  bcz ex-> 5 ki power 4
//then hme 5*5*5*5  ek baar to 5/num already store kr liya hmne num var me
//hr time 5/num se multiply krte jayege



//Sum of N natural number
int n;
cout<<"enter the num: ";
cin>>n;
//int sum = 0;
// for(i = 1; i<=n; i++){
//     sum = sum + i;
// }
// cout<<sum<<endl;
// }

//second method using N*(N+1)/2
//cout<<(n*(n + 1))/2;


//sum of n squre natural number means 1^2 + 2^2 + 3^2.....so on

// for(i = 1; i<=n; i++){
//     sum = sum + i * i;
// }
// cout<<sum<<endl;
// }


//factorial of any number
// long long int  num;
// cout<<"enter the num: ";
// cin>>num;
// long long int fact = 1;
// for(long long int i = 1; i<=num; i++){
//     fact = fact * i;
// }
// cout<<fact<<endl;


//check num is prime or not

// if(n < 2){
//     cout<<"not prime";
//     return 0; //means yhi se program ko end kr do niche check nhi krna hai
// }
// for(int i=2; i<n; i++){
//     if(n % i == 0){
//         cout<<"not prime";
//         return 0;//means yhi se program ko end kr do niche check nhi krna hai
//     }
// }
//  cout<<"prime";
//  return 0;
// }

//Print prime num 1 to n

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 100; 
//    bool isPrime;
//     for(int i=2; i<=n; i++){
//        isPrime = true;
//        for(int j=2; j<i/2; j++){
//          if(i % j == 0){
//          isPrime = false;
//            break;
//          }
//        }
//         if (isPrime) {
//             cout << i << " ";
//         }
//     }

//        return 0;
// }


//fibonaccci series 
//Note fibonacci series 1 to n means 0+1+1+2+3+5.........so on
// int last = 0;
// int prev = 1;
// int curr;
// for(int i= 1; i<n-1; i++){
//    curr = last + prev;
//    last = prev;
//    prev = curr;
// }
// cout<<curr;

// }