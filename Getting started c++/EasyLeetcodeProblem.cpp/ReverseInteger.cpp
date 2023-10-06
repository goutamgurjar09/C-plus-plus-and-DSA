#include<bits/stdc++.h>
using namespace std;
class solution{
public:
     int reverseInt(int n){
       int ans = 0;
       while(n > 0){
        int d = n % 10;//remainder
        if(ans > INT_MAX/10 || ans < INT_MIN/10)
        return 0;
        ans = ans * 10 + d;//if n=1234 then -> 4 43 432 4321
        n /= 10;
       }
       return ans;
     }
};
int main(){
    int n;
    cin>>n;

    solution sol; 
    int ans = sol.reverseInt(n);
    cout<<ans;
}
//input- 123
// 321

// -321
// 0

//note: if condition is used for lets assume one example as we now that int ki capasity 32 bit hoti hai means
//Maximum value of INT_MAX: 2147483647 and //Minimum value of INT_MIN: -2147483648
//if we reverse the INT_Max value then i will vary large  7463847412  jo ki int datatype me store nhi ho skti
//thats why hme integer overflow problem dega compilor

//ans * 10 + d > INT_MAX;
//ans > INT_MAX - d
//      ____________
//          10   

//ans > INT_MAX -  d
//      ________  ____
//          10     10

//10 or d ko right side le jane ka fayda  ye hai ki ydi me ans*10 + d  kruga to hr baar mujhe vary large number hi milega to compilor overflow dega 
//or mujhe pta hai ki ydi me INT_MAX ko  10 se divide kr duga to mujhe hr baar INT_MAX se chota number hi milega 
//ans > INT_MAX/10


//mujhe pta hai ki remainder ki value to 0-9 ke beech me hi hogi hr baar jb bhi aap kise value ko 10 se mode kroge
//so->     d   to 0 ho jayega then 
//       ____   
//        10

//now ans > INT_MAX/10

//same problem INT_MIN me bhi aa skti hai 
//if ans*10 + d  means INT_MIN  se bi chota hai then i will use

// ans*10 + d  < INT_MIN 