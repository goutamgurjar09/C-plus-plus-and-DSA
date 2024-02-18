

//print n to 1

// #include<iostream>
// using namespace std;

// void fun(int n){
//     //base case
//    if(n == 1){
//     cout<<1;
//     return;
//    }
//    cout<<n<<endl;
//    fun(n-1);
// }
// int main(){
//  int n;
//  cin>>n;

// //recursive approach
//  fun(n);
// }
// 5

// 5
// 4
// 3
// 2
// 1



//print even number between n to 2

//approach-1
//top to bottom approach means phle print num then call function
#include<iostream>
using namespace std;

void fun(int num,int n){
    //base case
   if(num > n){  //start num=2 then->4,6,8 given in main function
    return;
   }
   cout<<num<<endl;
   fun(num + 2 , n);
}
int main(){
 int n;
 cin>>n;

//recursive approach
 fun(2,n);
}

// 8
// 2
// 4
// 6
// 8

//-------------------
//bottom to top approach means phle base case tk jayege then print krna start krege

// #include<iostream>
// using namespace std;

// void fun(int num,int n){
//     //base case
//    if(num > n){  //start num=2 then->4,6,8 given in main function
//     return;
//    }
//    fun(num + 2 , n);
//    cout<<num<<endl;
// }
// int main(){
//  int n;
//  cin>>n;

// //recursive approach
//  fun(2,n);
// }
//input-> 8
// 8
// 6
// 4
// 2


//-------------------------
//approach-2
//top to bottom approach means isme phle se hi print krte hai jate hai then function call krte  hai
// #include<iostream>
// using namespace std;

// void fun(int n){
//     //base case
//    if(n == 2){
//     cout<<2;
//     return;
//    }
//    cout<<n<<endl;
//    fun(n-2);
// }
// int main(){
//  int n;
//  cin>>n;

// //recursive approach
//  fun(n);
// }
// 8

// 8
// 6
// 4
// 2

//-----------------------
//approach-2
//bottom to top approach means phle base case n=2 tk gye then print 2 kiya then 2 ne return kiya->   2->4->6->8... 

// #include<iostream>
// using namespace std;

// void fun(int n){
//     //base case
//    if(n == 2){
//     cout<<2<<endl;
//     return;
//    }
   
//    fun(n-2);
//    cout<<n<<endl;
// }
// int main(){
//  int n;
//  cin>>n;
// if(n % 2 == 1){  //if given n is odd
//     n--;
// }

// //recursive approach
//  fun(n);
// }
//input-> 8 
// 2
// 4
// 6
// 8



//----------------
//print 1 to n  top to bottom approach

// #include<iostream>
// using namespace std;

// void fun(int num , int n){
//     cout<<"origonal given number:"<<n << " ";

//     //base case
//    if(num == n){
//     cout<<"print number:"<<num; //jo bhi last num hoga use and return kro
//     return;
//    }
//    //cout<<n<<endl; ->it will input number when you give
//    cout<<"print number:"<<num<<endl;
//    fun(num + 1,n);
// }
// int main(){
//  int n;
//  cin>>n;

// //recursive approach
//  fun(1,n); //1->num to n->input
// }

// 5
// origonal number:5 print number:1
// origonal number:5 print number:2
// origonal number:5 print number:3
// origonal number:5 print number:4
// origonal number:5 print number:5


//---------------------
//bottom to top approach
//print 1 to n without using extra variable;

// #include<iostream>
// using namespace std;

// void fun(int n){
    

//     //base case
//    if(n == 1){
//     cout<<"print number:"<<1<<endl; 
//     return;
//    }
//    fun(n - 1);
//    cout<<"print number:"<<n<<endl;
   
// }
// int main(){
//  int n;
//  cin>>n;

//recursive approach
//  fun(n);
// }

// 5
// print number:1
// print number:2
// print number:3
// print number:4
// print number:5


//--------------------
//approach-3