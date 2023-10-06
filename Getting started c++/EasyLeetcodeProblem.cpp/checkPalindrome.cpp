#include<bits/stdc++.h>
using namespace std;
class solution{
public:
  int checkPalindrome(int n) {
    if(n < 0)//negative num is not palindrome
    return 0;
    
    int ans = 0, num = n;
     while(num){
        int rem = num % 10;
        if(ans > INT_MAX/10) //for integer overflow or you can use long long instead of
         return 0;
        ans = ans * 10 + rem;//reverse the num
        num /= 10;
     }
     if(ans == n)
      return 1;
     else
      return 0;
  
  }
};
int main(){
    int n,ans; 
    cin>>n;
    solution sol; // Create an instance of the solution class
    ans = sol.checkPalindrome(n); // Call the member function using the instance
    //cout<<ans;
    if(ans){
        cout<<"num is palindrome";
    }
    else
     cout<<"num is not palindrome";
}
//input- 321
// num is not palindrome

//input- 121
// num is palindrome


//note:- this condition is use for if(ans == n) orignol num ko ans se check kr rhe
//bcz ydi hm direct while(n>0) krte to jb n ki value 0 hoti tb loop break hota then 
//ydi hm if(ans == n) krte to now n ki valu 0 ho jati jo ki condition false kr deti