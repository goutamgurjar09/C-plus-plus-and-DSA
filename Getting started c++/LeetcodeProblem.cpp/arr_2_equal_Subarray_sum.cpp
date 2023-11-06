#include<bits/stdc++.h>
using namespace std;
bool devide(vector<int>& v){
    int n = v.size();
    int total_sum = 0;
    for(int i=0; i<n; i++){
       total_sum += v[i];
    }
    int prefixSum = 0;
    for(int i=0; i<n; i++){
       prefixSum += v[i];
       int ans = total_sum - prefixSum; //ans -> rightPartSum and prefixSum -> leftPartSum
       
       if(ans == prefixSum){
          return 1;
       }
    }
   return 0;

}
int main(){
  int n;
  cin>>n;
  
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  cout<<devide(v);
}
// 8
// 2 4 6 2 1 5 8 2
// 1

//this is first subarray whose sum is 15 ->  2 4 6 2 1
//this is second subarray  whose sum is 15  -> 5 8 2
//both have equal sum so return true/1
