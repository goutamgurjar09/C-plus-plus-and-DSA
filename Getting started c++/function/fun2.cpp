// #include<iostream>
// using namespace std;

//pass by value
//--------------
// void getNum(int copyNum){//copyNum=origonalNum->6
//     copyNum++; //now copyNum = 7 but origonal have same value = 6
// }

//pass by refrence
//--------------
// void getRefNum(int& Num){// NUM = &origonalNum //means now Num bhi orignolNum ke address ko point kr rha 
//     Num++; //now orignolNum = 11
// }

//-----------------
//1.wap to swap two num

//pass by value
// void swap(int a,int b){
//     int c;
//     c = a;    //but ye value a and b ki copy bnakr  change hui origonal value nhi
//     a = b;
//     b = c;
// }

// //pass by refrence
// void swap(int& a,int& b){
//     int c;
//     c = a;   
//     a = b;
//     b = c;
// }


//int main(){
//    int origonalNum;
//    cout<<"enter the num: ";
//    cin>>origonalNum;
 
//----------------
//    getNum(origonalNum);//no print and
//    cout<<origonalNum;//no change
   //note : no change in orignolNum
  //  enter the num: 6
  // 6

//------------------
//   getRefNum(origonalNum);//no print and
//    cout<<origonalNum;//now will be change
  //  enter the num: 10
  // 11

//----------------------

// int a,b;
// cout<<"enter the num: ";
// cin>>a>>b;

//-----pass by value-----------
//   swap(a,b);//cout nhi kr skte bcz fun koi return value nhi kr rha and hme no need to any return type bcz hm value swap kr rhe
//   cout<<a<<" "<<b;//no change in origonal value

// enter the num: 5 6
// 5 6

//-----pass by refrence-----------
//   swap(a,b);
//   cout<<a<<" "<<b;//change in origonal value

// enter the num: 4 7
// 7 4

//}


 //----------------------overloading-----------------------------

// #include<iostream>
// using namespace std;

// void Swap(int& a,int& b){
//     int c;
//     c = a;   
//     a = b;
//     b = c;
// }

// //overloading means function name same but parameter can be different like int float etc.
 //function overloading pass by refrence

// int main(){
// int a,b;
// cout<<"enter the num: ";
// cin>>a>>b;


//--------overloading pass by ref---------
// Swap(a,b);
// cout<<a<<" "<<b; 

//----------------
// float f1=2.4, f2=3.5; 
// Swap(f1,f2);
// cout<<f1<<" "<<f2<<endl;

//note now ab dono fun me se last bale ko hta denge and run krege to erroe dega


//}

// enter the num: 5 4->error
// fun2.cpp: In function 'int main()':
// fun2.cpp:103:11: error: invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'
//  Swap(f1,f2);
//            ^
// fun2.cpp:81:6: note:   initializing argument 1 of 'void Swap(int&, int&)'
//  void Swap(int& a,int& b){
//      ^~~~



//----------overloading-------------

#include<iostream>
using namespace std;

void Swap(int& a,int& b){
    int c;
    c = a;   
    a = b;
    b = c;
}
void Swap(float& d , float& f){
    float r;
    r = d;   
    d = f;
    f = r;
}
//overloading means function name same but parameter can be different and datatype also must be same
//function overloading pass by refrence

int main(){

int a,b;
cout<<"enter the num: ";
cin>>a>>b;



//--------overloading pass by ref---------
Swap(a,b);
cout<<a<<" "<<b<<endl; 

//----------------
float f1=2.4, f2=3.5; 
Swap(f1,f2);
cout<<f1<<" "<<f2;//change in origonal value
//note: bcz yha datatype same hai fun me bhi and main function me bi

}
// enter the num: 4 5
// 5 4
// 3.5 2.4

//Note:what if datatype is not same and two fun same name -> in this situation this will give an error
//means main  fun and function both have diff. datatype


//Note: swap is a inbuilt function in c++ library if you use direct it then it will swap the value