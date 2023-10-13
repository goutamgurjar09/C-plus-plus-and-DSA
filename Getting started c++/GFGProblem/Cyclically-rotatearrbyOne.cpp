#include <iostream>
using namespace std;

void rotatebyOne(int a[], int n){
    cout<<sizeof(a)<<endl;//it stores 4 byte address
    int temp = a[n-1];
    for(int i=n-2; i>=0; i--){
       a[i+1] = a[i];
    }
    a[0] = temp;
}
int main() {
  int n;
  cout<<"enter the num: ";
  cin>>n;
  int arr[1000];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  rotatebyOne(arr,n);
  cout << "Array after rotating by one position: ";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}
// enter the num: 5
// 1 2 3 4 5
// Array after rotating by one position: 5 1 2 3 4