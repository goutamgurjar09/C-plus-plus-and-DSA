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


//print 1 to n

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


//bottom to top approach
//print 1 to n without using extra variable;

#include<iostream>
using namespace std;

void fun(int n){
    

    //base case
   if(n == 1){
    cout<<"print number:"<<1<<endl; 
    return;
   }
   fun(n - 1);
   cout<<"print number:"<<n<<endl;
   
}
int main(){
 int n;
 cin>>n;

//recursive approach
 fun(n);
}

// 5
// print number:1
// print number:2
// print number:3
// print number:4
// print number:5