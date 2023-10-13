#include <iostream>
using namespace std;

void fun(int a[],int n){//a[] bcz it stores address of another variable and work as a pointer
    cout<<sizeof(a)<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
int main() {
  int arr[5] = {1,2,3,4,5};
  cout<<sizeof(arr)<<endl;
  fun(arr,5);
}
// 20
// 4 bytes->bcz it stores address of another variable and work as a pointer
// 1 2 3 4 5 