//check palindorme
// #include<iostream>
// using namespace std;

// int palindrome(string str,int start,int end) {
//     if(start >= end){
//         return 1;
//     }
       //start ,end not matched
//     if(str[start] != str[end]){
//         return 0;
//     }
       //matched
//     return palindrome(str,start+1,end-1);

    
// }


// int main() {
//    string str ="naman";
//    //int start,end;
//    bool s = palindrome(str,0,4);
//    cout<<s;
// }
//1


//-----------------------------
//count vowles in string

// #include<iostream>
// using namespace std;

// int countVowle(string str,int index) {
//     if(index == -1){
//     return 0;
//     }
//      //vowel hoga
//     if(str[index] == 'a'|| str[index] == 'e'|| str[index] == 'i'|| str[index] == 'o'|| str[index] == 'u') {
//         return 1 + countVowle(str,index-1); //index-1 means last se ek-ek km krte rho jb tk condition tk na phocho 
//     }
//     //vowel nhi hoga
//     else{
//     return countVowle(str,index-1);
//     }
    
// }
// int main() {
//    string str ="rohit";
//    int res = countVowle(str,4);
//    cout<<res;
// }
//2


//-------------------------
//Reverse a string

// #include<bits/stdc++.h>
// using namespace std;

// void reverse(string &str,int start,int end) {
//      if(start >= end){
//         return;
//      }
//     swap(str[start],str[end]);
//     reverse(str,start+1,end-1);    
// }


// int main() {
//    string str ="goutam";
//    //int start,end;
//    reverse(str,0,5);
//    cout<<str;
// }
//matuog


//--------------------------

//convert string Lowercase to uppercase;


#include<bits/stdc++.h>
using namespace std;

void LowerToUppercase(string &str,int index) {
     if(index == -1){
        return;
     }
     str[index] = 'A' + str[index] - 'a' ;  //-> means in dono ke ascii diff.-> str[index] - 'a'  ->   me 'A' ko add kr do
     LowerToUppercase(str,index-1); //convert bottom to top
     
}

int main() {
   string str ="goutam";
   LowerToUppercase(str,5);
   cout<<str;
}

