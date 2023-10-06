#include<iostream>
using namespace std;
class solution{
public:
     int poweroftwo(int n){
        if(n < 1){ //bcz negative num will not be 2 ki power
            return 0;
        }
        while(n > 1){//n!=1  //2^0 = 1 that's our loop is run num to 1 and jaise hi n=1 hoga loop break and return 1
          if(n % 2 == 1){
            return 0;
          }
          n /= 2;
        }
        return 1;
     }
};
int main(){
    int n;
    cin>>n;
    solution sol; 
    int ans = sol.poweroftwo(n);
    cout<<ans;
}
//input- 16
//1

//input- 1  //2^0=1
//1
//bcz 1->  jo ki 2 ki power me exist krta hai


//ex:- n=32
        //   2 - 32   -> /num->  our loop will run 32 16 8 4 2 1->  32  to 1 tk            -   
        //   2 - 16 -0->(remainder)
        //   2 - 8 - 0
        //   2 - 4 - 0
        //   2 - 2 - 0
        //   2 - 2 - 0
        //       1 - 0  
        //_____________