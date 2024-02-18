//Leanear search 
//1. given a array and you have to find a ele. x in array and returns true or  false
// #include<iostream>
// using namespace std;

// bool serachEle(int arr[],int x,int index ,int n){
//     if(index == n){  //means ele. present nhi hai
//         return 0;
//     }
//     if(arr[index] == x){
//         return 1;
//     }
//     return serachEle(arr,x,index+1,n);
// }
// int main(){
//  int n,x;
//  cin>> n >> x;
// int arr[n];

// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// //recursive approach
//  cout<<serachEle(arr,x,0,n);
// }
// 5 6
// 2 4 6 7 4
// 1


//-------------
//Using Binary search

// #include<iostream>
// using namespace std;

// bool binaerySerchEle(int arr[],int start ,int end,int x){
//     int mid = start+(end-start)/2;
//     if(start > end ){  //means ele. present nhi hai in arr
//         return 0;
//     }
//     if(arr[mid] == x){
//         return 1;
//     }
//     else if(arr[mid] < x){
//       return binaerySerchEle(arr,mid+1,end,x); //function call kr do fir se or ydi ele. mil jay to return kr do means start = mid+1 kr do  and end change nhi hoga 
//     }
//     else{//(arr[mid] > x)
//         return binaerySerchEle(arr,start,mid-1,x); //means end = mid-1 kr do  and start change nhi hoga
//     }
   
   
// }
// int main(){
//  int arr[] = {1,2,3,4,5};
//  int x;
//  cin>> x;

// //recursive approach
//  cout<<binaerySerchEle(arr,0,4,x);//start=0,end=n-1
// }