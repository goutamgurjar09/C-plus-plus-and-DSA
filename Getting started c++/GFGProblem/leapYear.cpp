#include<bits/stdc++.h>
using namespace std;
class solution{
public:
     int leapYear(int n){
      
        if(n % 400 == 0){
            return 1;
        }
        else if(n % 4 == 0 && n % 100 != 0)
         return 1;
        else{
            return 0;
        }
     }
};
int main(){
    int n;
    cin>>n;
    solution sol; 
    int ans = sol.leapYear(n);
    cout<<ans;
}
//input - 2100
//0

//input - 2096
//1

//input - 1800
//0