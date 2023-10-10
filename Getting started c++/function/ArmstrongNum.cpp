#include<bits/stdc++.h>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n){
        count++;
        n /= 10;
    }
    return count;
}
bool checkArmstrong(int num, int digit){
     int n = num , ans = 0 , rem;// n = num->  bcz hme last me orignal num ko ans se check krna pdega and ye number-> (n)to 0 bn jayega 

      while(n){//n!=0/n>0
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem , digit);
       
      }
     if(ans == num){
        return 1;
     }
     else{
        return 0;
     }
}
int main(){
    int num;
    cout<<"enter the num: ";
    cin>>num;
    
    int digit = countDigit(num); 
    cout<<checkArmstrong(num , digit)<<endl;
}

//153
//371

//ex:-num - 14 
//first i will count digit -> which have 2
//then i will jitni digit hai utni ki power se  add kr duga dono digit ko unki power calculate krke ->  1^2 + 4^2 = 18 
//then i will check if 18 and num equal or not , if equal so return true otherwise false