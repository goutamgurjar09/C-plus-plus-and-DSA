#include<bits/stdc++.h>
using namespace std;

long long maxSubarrSum(int arr[],int n){
    int maxi = INT_MIN;
    
    //bruite force O(n^2)
    //   for(int i=0; i<n; i++){
    //     int prefix = 0;
    //     for(int j=i; j<n; j++){
    //         prefix += arr[j];
    //         maxi = max(prefix,maxi);
    //     }
    //   }

    int prefixSum = 0;
    for(int i=0; i<n; i++){
      prefixSum += arr[i];
      maxi = max(prefixSum,maxi);
      if(prefixSum < 0){//negative
        prefixSum = 0;
      }
    }
    return maxi;
}
int main(){
  int n;
  cin>>n;
  
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

   long long res = maxSubarrSum(arr,n);
   cout<<res;
}
// 4
// 4 -6 2 8
// 10