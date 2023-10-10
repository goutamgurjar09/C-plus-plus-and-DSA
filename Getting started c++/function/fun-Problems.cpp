//1. wap to convert small a to A and B to b and so on... A TO Z/a to z using function

#include<iostream>
using namespace std;

//covert lower to  upper a to A
// char convertLowerToUpper(char ch){
//     int ans = ch - 'a' + 'A'; //a=97 and A=65-> inki ascii value se add and subtract krege then we will get same 'A' to 'Z; char
//     return ans;
// }

//covert upper to lower A to a 
char convertUpperToLower(char ch){
    int ans = ch - 'A' + 'a'; 
    return ans;
}
int main(){
    // char c = 'g';
       char ch = 'A';
    // cout<<"enter the char: ";
    // cin>>c;

    //cout<<convertLowerToUpper(c);
    cout<<convertUpperToLower(ch);
}
//G

// enter the char: t
// T

//ex:input-> ch = 'a'
//ch - 'a' + 'A'; 
//then 97 - 97 + 65 => 'A'


//ex:input-> ch = 'A'
//ch - 'A' + 'a'; 
//then 65 - 65 + 97 => 'a'


