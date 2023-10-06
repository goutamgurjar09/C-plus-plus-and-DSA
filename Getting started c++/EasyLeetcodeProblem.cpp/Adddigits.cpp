#include<iostream>
using namespace std;
class solution{
public:
  int addDigits(int num) {

    while(num > 9){//this loop is used for after udating the num bcz hmara loop baar baar chl rha and hme two times digit nikalkr 1 digit me output dena hai
        int res = 0;
        while(num > 0){
            int d= num % 10;
            num /= 10;
            res += d;
        }
        num = res;//update num
    }
    return num;
  }
};
int main(){
    int n,ans; 
    cin>>n;
    solution sol; // Create an instance of the solution class
    ans = sol.addDigits(n); // Call the member function using the instance
    cout<<ans;
    
}
//input-38     => 1 1 -> 2
//2