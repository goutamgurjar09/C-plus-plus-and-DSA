#include<bits/stdc++.h>
using namespace std;

int main(){
//   int a = 10;
   
//   cout<<&a <<endl; // 0x61ff08
//   int *ptr = &a;
//   cout<<ptr <<endl;  //   0x61ff08 both point same address

  
//   cout<<sizeof (ptr) <<endl; //4 byte 

//   cout<<*ptr <<endl; //10  *ptr isko dereferences khege
  
// //---------------------
//   int b = 30;
//   ptr = &b;  //now ptr point &b *ptr hmne isliye nhi likha bcz hmne upr phle hi create kr liya tha

//   cout<<ptr <<endl;   //0x61ff04
//   cout<<*ptr <<endl;  //30


//-------------------
 float c = 2.3;
 float *ptr1 = &c;
// cout<<ptr1 <<endl;
// cout<<*ptr1 <<endl;

// char c = 'a';
// cout << static_cast<void*>(&c) << endl;


//cout<<sizeof (ptr1)<<endl;  //4 still 4byte hoga  bcz ptr size depand on our OS RAM

float d = 4.5;
ptr1 = &d;
cout<<ptr1 <<endl;  //now ptr1 point add. of d 
cout<<*ptr1 <<endl;  //4.5
d = 50;
cout<<*ptr1;  //50


}