// //Fatorial of given number


// #include<iostream>
// using namespace std;

// int fact(int n){
//     //base case
//    if(n == 0){ //bcz 0 ka fact-> 1 hota hai //you can also if(n == 0 || n == 1)
//     return 1; 
//    }
//    return n * fact(n-1);
// }
// int main(){
//  int n;
//  cin>>n;

// if(n < 0){
//     cout<<"factorial not possible";
// }
// //recursive approach
//  cout<<fact(n);
// }



//----------------

//Sum of given natural n number


// #include<iostream>
// using namespace std;

// int sum(int n){
//     //base case
//    if(n == 1){ 
//      return 1; 
//    }
//    return n + sum(n-1);
// }
// int main(){
//  int n;
//  cin>>n;

// //recursive approach
//  cout<<sum(n);
// }
// 5
// 15


//--------------------
//Power of 2 


// #include<iostream>
// using namespace std;

// int pow(int num,int n){
//     //base case
//     if(n == 0){ //2 ^ 0 => 1
//         return 1;
//     }
//     if(n == 1){ 
//      return num;  //first time return num = 2 
//     }
//    return num * pow(num ,n-1); //2 * pow(2 ,n-1);
// }
// int main(){
//  int n;
//  cin>>n;

// //recursive approach
//  cout<<pow(2,n);
// }
//2^4 = 16
//input-> 4
// 16


//------------------------------
//Sum of n squre natural number -> 1^2 + 2^2 + 3^2......n

#include<iostream>
using namespace std;

int Squaresum(int n){
    //base case

    if(n == 1){ 
     return n;   //1
    }
   return n*n + Squaresum(n-1); 
}
int main(){
 int n;
 cin>>n;

//recursive approach
 cout<<Squaresum(n);
}
// 4
// 30
