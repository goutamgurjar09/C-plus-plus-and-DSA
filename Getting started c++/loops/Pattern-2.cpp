#include<iostream>
using namespace std;
int main(){
   int row ,col;
   cout<<"enter row and col: ";
   cin>>row>>col;
   int i ,j;  //use i for row and j for col

//1. print
// * 
// * * 
// * * * 
// * * * * 
//    for(i=1; i<=row; i++){
//       for(j=1; j<=i; j++){
//         cout<<"*"<<" ";
//       }
//       cout<<endl;
//    }
//Note->yha jitni  i ki value hogi utni baar j chlega and utne hi * print honge
//first time i=1 print one *
// ..........i=2 print two * *
//...........i=3 print three * * * and so on


//2. print 
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

// for(i=1; i<=row; i++){
//       for(j=1; j<=i; j++){//j<=i means first time->i=1 to  j<=1 then j<=2 thne j<=3 then j<=4 then 5 
//         cout<<j<<" ";
//       }
//       cout<<endl;
// }
//note-> yha hme jitni hmari i/row ki value hogi utni baar j loop chlega and utni baar value print hogi
//first time i=1->  then print 1
//...........i=2->  then print 1 2
//...........i=3->  then print 1 2 3
//...........i=4->  then print 1 2 3 4
//...........i=5->  then print 1 2 3 4 5

//print
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// for(i=2; i<=row; i++){
//       for(j=1; j<=i; j++){
//         cout<<j<<" ";
//       }
//       cout<<endl;
// }
//bcz j loop every i/row tk chlega , first time j loop 2 time chlega bcz i=2 hai so print-> 1 2  


//3.print
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
// for(i=1; i<=row; i++){
//       for(j=1; j<=i; j++){
//         cout<<i<<" ";
//       }
//       cout<<endl;
// }

//4. print
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 

// for(i=1; i<=row; i++){
//     for(j=i; j>=1; j--){
//       cout<<j<<" ";
//     }
//     cout<<endl;
// }
//Note->j=i; j>=1; j--  // j>=1;isliye kiya bcz hme i/row se 1 tk ki value print krna hai in every col/j me
//step-1. i=1 //step-2.i<=row
//step-3. print row/i to 1 tk col/j ki value 
//step-4. i=i+1

//first print row1 -> 1
 //then row2 ->       2 1
 //then row3 ->       3 2 1   and so on...


//5.print
// a 
// b b 
// c c c 
// d d d d 
// e e e e e 

// for(i=1; i<=row; i++){
//   char ch = 'a' + (i-1); //isse mujhe char a b c d e f.............mil jayega
//     for(j=1; j<=i; j++){
//       cout<<ch<<" ";
      
//     }
//     cout<<endl;
// }
//NOte -> yha hme jitni row utne col print krna hai


//print
// enter row and col: 5 5
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
// for(i=row; i>=1; i--){
//     for(j=1; j<=i; j++){
//       cout<<"*"<<" ";
//     }
//     cout<<endl;
// }

//second method
// for(i=1; i<=row; i++){
//     for(j=1; j<=row-(i-1); j++){
//       cout<<"*"<<" ";
//     }
//     cout<<endl;
// }
// j<=row-(i-1)->for first time 5-(1-1);
//row/i 1 print 5 *
//row/i 2 ....  4 *
//row/i 3 ....  3 *
//row/i 4 ....  2 *
//row/i 5 ....  1 *


//print
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
//  for(i=row; i>=1; i--){
//        for(j=1; j<=i; j++){//1 2 3 4 5 then  1 2 3 4 means first time j loop pura chlega 1 to 5  then second time 1 to 4row/i ki value km ho rhi ek ek bcz and so on.... 
//          cout<<j<<" ";
//        }
//        cout<<endl;
//  }


//print
// 5 5 5 5 5 
// 4 4 4 4 
// 3 3 3 
// 2 2 
// 1 
// for(i=1; i<=row; i++){
//     for(j=; j<=i; j++){
//       cout<<i<<" ";
//     }
//     cout<<endl;
// }

//print
//enter row and col: 5 5
// 5 4 3 2 1 
// 5 4 3 2 
// 5 4 3 
// 5 4 
// 5 
// for(i=1; i<=row; i++){
//     for(j=row; j>=i; j--){
//       cout<<j<<" ";
//     }
//     cout<<endl;
// }


//print
// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1 
// for(i=1; i<=row; i++){
//     for(j=row; j>=row-(i-1); j--){
//       cout<<j<<" ";
//     }
//     cout<<endl;
// }

//Approach 2:
// for(i=row; i>=1; i--){//or i=5
//   for(j=row; j>=i; j--){//or j=5
//      cout<<j<<" ";
//   }
//     cout<<endl;
// }


//H.W.
//1.
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
// for(i=1; i<=row; i++){
//    char ch = 'A';
//    for(j=1; j<=i; j++){
//       cout<<ch<<" ";
//       ch++;
//    }
//     cout<<endl;
// }

//2.print
//enter row and col: 5 5
// 10 
// 11 11 
// 12 12 12 
// 13 13 13 13 
// 14 14 14 14 14 

// for (int row = 1; row <= 5; ++row)
// {
//     for (int col = 1; col <= row; ++col)
//     {
//         cout << 10 + row - 1 << " ";//bcz yha row value change ho rhi col same as row value hai thatswhy i used 10 + row - 1 
//     }
//     cout << endl;
// }

//3.print
// enter row and col: 5 5
// 10 
// 10 11 
// 10 11 12 
// 10 11 12 13 
// 10 11 12 13 14
// for (int row = 1; row <= 5; ++row)
// {
//   for (int col = 1; col <= row; ++col)
//   {
//       cout << 10 + col - 1 << " ";//bcz yha col value change ho rhi thatswhy i used 10 + col - 1 
//   }
//   cout << endl;
// }


//4.print
// enter row and col: 5 5
// A B C D E 
// A B C D 
// A B C 
// A B 
// A 
// for(i=1; i<=row; i++){
//    char ch = 'A';
//    for(j=row; j>=i; j--){
//       cout<<ch<<" ";
//       ch++;
//    }
//     cout<<endl;
// }

// }