#include<iostream>
using namespace std;
int main(){
   int row,col;
   cout<<"enter row and col: ";//enter row and col: 5 5
   cin>>row>>col;
   //print according to your condition
//    for(row=1; row<=5; row++){
//     for(col=1; col<=5; col++){
//         cout<< "*"<<" ";//print star then space
//     }
//     cout<<endl;
//    }
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 

//Note->i am running i loop for printing row and j loop for printing column
//Note-> remember one thing row loop ek baar chlega to col loop 5 baar chlega its up to your condition let's understand with example->
//means row=1 to col=5 means 5 star in one line * * * * *
//then next line for row=2 to col=5 means again 5 star in one line * * * * *
//          row-1 col-1 col-2 col-3 col-4 col-5
//          row-2 col-1 col-2 col-3 col-4 col-5
//          row-3 col-1 col-2 col-3 col-4 col-5
//          row-4 col-1 col-2 col-3 col-4 col-5
//          row-5 col-1 col-2 col-3 col-4 col-5


//print according to user input
//    for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//         cout<< "*"<<" ";//print start then space
            //cout<< "* ";
//     }
//     cout<<endl;
//    }


//print 10 
//    for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//         //cout<< 10 <<" ";//print 10 then space again 10 then space-> 10 10 10...
//         cout<< "10 ";
//     }
//     cout<<endl;
//    }
// 10 10 10 10 10 
// 10 10 10 10 10 
// 10 10 10 10 10 

//print 1 1 1 1 1
//  for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//         cout<< i <<" ";//i means row
//          //cout<< "i/row" <<" "; try this example
//     }
//     cout<<endl;
//    }
//  enter row and col: 5 5
// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3 
// 4 4 4 4 4 
// 5 5 5 5 5 


//print 1 2 3 4
// for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//         cout<< j <<" ";//j means col
//     }
//     cout<<endl;
// }

// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 

//print 5 4 3 2 1
// for(int i=1; i<=row; i++){
//     for(int j=col; j>=1; j--){//5 4 3 2 1
//         cout<< j <<" ";//j means col bala loop ulta chla do
//     }
//     cout<<endl;
// }
// enter row and col: 3 5
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 



//print 1 4 9 16 25
// for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//         cout<< j*j <<" ";//j means col 
//     }
//     cout<<endl;
// }
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 

//print 1 8 27 64 125 means qube
// for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//         cout<< j*j*j <<" ";//j means col 
//     }
//     cout<<endl;
// }
// enter row and col: 5 5
// 1 8 27 64 125 
// 1 8 27 64 125 
// 1 8 27 64 125 
// 1 8 27 64 125 
// 1 8 27 64 125 

//print a a a a a
// for(int i=1; i<=row; i++){
//     char ch = 'a'+(i-1);
//     for(int j=1; j<=col; j++){
//         cout<< ch <<" ";//j means col
//         //ch++; 
//     }
//     cout<<endl;
// }
// a a a a a 
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e

//print a b c d e 
// for(int i=1; i<=row; i++){
//     for(char j='a'; j<='e'; j++){//a b c d e 
//         cout<< j <<" ";//j means col
//     }
//     cout<<endl;
// }
// enter row and col: 5 5
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 

//print a b c d e 
// char c= 'a';
// for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){//a b c d e 
//         cout<< c <<" ";//j means col
//         c++;
//     }
//     cout<<endl;
// }
//to use this ->//c++;  then print 
// a b c d 
// e f g h 
// i j k l 
// m n o p 

//print ascii val for a to z//maens 97 to 122
//isme j bala loop to given input tk  chl rha every time for row
// for(int i=1; i<=row; i++){
//     char ch= 'a'; //j means col
//     for(int j=1; j<=col; j++){
//         cout<< ch + j-1<<" ";
//     }
//     cout<<endl;
// }
// enter row and col: 5 5
// 97 98 99 100 101 
// 97 98 99 100 101 
// 97 98 99 100 101 
// 97 98 99 100 101 
// 97 98 99 100 101 


//Note-> In C and C++ programming languages, characters (of type char) are internally represented as integers, 
// specifically as their ASCII values. This is a fundamental aspect of how characters are stored and manipulated in memory. When you perform arithmetic operations on char types, the compiler treats them as their ASCII values because it's working with the underlying integer representation.
//So, when you perform arithmetic operations on char types, it's important to be aware of this implicit conversion to ASCII values, as it can produce unexpected results if not used carefully.
//means ydi aap direct cout kroge arithmatic opr krke tb esa hoga ex-> cout<< ch + j-1<<" ";

//lets take one example to better understanding->
// char ch1 = 'a';
// char ch2 = 'b';

// cout<<ch1 + ch2<<endl; //// Adds the ASCII values of 'a' and 'b'  output will be-> 195 bcz direct preform arithmatic opr in cout 
// char result = ch1 + ch2; 
// cout <<  result << endl; // Prints nothing //�




//print a b c d e f g h i j k l m n o p q r s t u v w x y z 
//isme j bala loop a to z chl rha every time for row
// for(int i=1; i<=row; i++){
//     for(char j='a'; j<='z'; j++){
//         cout<< j <<" ";//j means col
//     }
//     cout<<endl;
// }
//
// enter row and col: 4 4
// a b c d e f g h i j k l m n o p q r s t u v w x y z 
// a b c d e f g h i j k l m n o p q r s t u v w x y z 
// a b c d e f g h i j k l m n o p q r s t u v w x y z 
// a b c d e f g h i j k l m n o p q r s t u v w x y z 



//print 1 2 3 4 5 .....
//isme every time col/j ki value ek se bd rhi but j loop hmesa 5 time chlega according to input
// /condition and hm num ko print krke ek ek bdate jayege or print krte jayege  
// int numCount= 1;
//  for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){//a b c d e 
             // cout<< numCount <<" ";//numCount means col wise print krna inc. krke
            // numCount++;
          // cout<<(i-1)*5 + j<<" ";//try also this logic instead of numCount
//     }
//     cout<<endl;
// }
// enter row and col: 5 5
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 



//H.W.

//1. print 4 4 4 4 4
// for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//         cout<<4<<" ";
//     }
//     cout<<endl;
// }
// enter row and col: 4 4
// 4 4 4 4 
// 4 4 4 4 
// 4 4 4 4 
// 4 4 4 4 


//2.print F G H I J K 
// for(int i=1; i<=row; i++){
//     for(char j='F'; j<='K'; j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// enter row and col: 4 5
// F G H I J K 
// F G H I J K 
// F G H I J K 
// F G H I J K 



}

