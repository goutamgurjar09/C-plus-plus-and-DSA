#include<iostream>
using namespace std;
int main(){
   //int a = 32;
   //int a = 65; //A
   int a = 6554;
    //random value kuch bhi dega bcz hm ise char me change kr rhe or char ka size 8bit hota hai to bo maximum 255 char/value store kr skta hai isse jyada krege to kuch bi random value dega
    //or hm int-32bit ko char me dal rhe to data to loss  hoga bcz char only 8bit size leta hai
   char ch = 'b';
   //a = ch; //b->98 ascii val
   //cout<<a<<endl;
   ch = a; 
   cout<<ch<<endl;
   //a=10 print space bcz main ascii val start with 33 
   //or ydi hm a ki value 1-32 tk rkhege to ye kuch nhi(space) print krega 
   //0-255 tk hoti hai ascii val


    
}