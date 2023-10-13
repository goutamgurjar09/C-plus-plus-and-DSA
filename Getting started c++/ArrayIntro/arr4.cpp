//wap to given an array and  print fibonacci series of given number 
#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"enter the num which you have to find fibonacci: ";
  cin>>n;
  int arr[1000];
  arr[0] = 0;
  arr[1] = 1;
  for(int i=2; i<=n-1; i++){
    arr[i] =arr[i-1] + arr[i-2];
  }
  cout<<arr[n-1];
}
// enter the num which you have to find fibonacci: 8
// 13

//note: ydi mujhe nth fibonacci number nikalna hai to mujhe loop ko n-1 tk chlana pdega bcz 
//nth fibo. num-> n-1 + n-2 = nth