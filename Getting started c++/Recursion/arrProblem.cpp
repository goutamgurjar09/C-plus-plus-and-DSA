// #include<iostream>
// using namespace std;

// void print(int arr[],int index,int n){
//     //base case
//     if(index == n){ 
//      return;  
//     }
//     cout<<arr[index] <<" ";
//     print(arr,index+1,n); 
// }
// int main(){
//  int n;
//  cin>>n;
//  int arr[n];
//  for(int i=0; i<n; i++){
//      cin>>arr[i];
//  }
// //recursive approach
//  print(arr, 0, n);
 
// }
// 5
// 1 2 3 4 5
// 1 2 3 4 5 


//print in reverse order 
// #include<iostream>
// using namespace std;

// void printReverse(int arr[], int index, int n) {
//     // base case
//     if (index == n) {
//         return;
//     }
//     printReverse(arr, index + 1, n);  // Call the function recursively to reach the end of the array ->//first -> cout<<arr[index] <<" "; jo ki 0 value hai usse phle ki value print kro means baar baar function call kro  then 0th index value print krna 
//     cout << arr[index] << " ";  // Print the current element after the recursive call
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     // Recursive approach to print in reverse order
//     printReverse(arr, 0, n);
//     return 0;
// }

//--------------------
//second method now start from last index 
// #include<iostream>
// using namespace std;

// void printReverse(int arr[], int index, int n) {
//     // base case
//     if (index == -1) {
//         return;
//     }
//     cout<<arr[index]<<" ";
//     printReverse(arr,index-1,n);
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     printReverse(arr, n-1, n); //now index will start from last index n-1
//     return 0;
// }
// 5
// 1 2 3 4 5
// 5 4 3 2 1 



//print i 2 3 4 5 in other way

// #include<iostream>
// using namespace std;

// void printReverse(int arr[], int index) {
//     // base case
//     if (index == -1) {
//         return;
//     }
   
//     printReverse(arr,index-1);
//     cout<<arr[index]<<" ";
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     printReverse(arr,n-1); //now index will start from last index n-1 and print 1 2 3 4 5
//     return 0;
// }
// 5   
// 1 2 3 4 5
// 1 2 3 4 5 



//------------------------------

//sum of array elements

// #include<iostream>
// using namespace std;

// int sum(int arr[], int index,int n) {
//     // base case
//     if (index == n) 
//         return 0;
    
//     return arr[index] + sum(arr,index+1,n);
    

// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout<<"sum is:"<<sum(arr,0,n); 
// }
// 3
// 1 2 3
// sum is:6


//---------------------------
//find min element of given array


// #include<iostream>
// using namespace std;

// int minelement(int arr[], int index,int n) {
//     // base case
//     if(index == n-1)
//     return arr[index];

//     return min(arr[index] , minelement(arr,index+1,n));
    
// }


// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout<<"minelement is:"<<minelement(arr,0,n); 
// }

// 4
// 3 4 5 2
// minelement is:2



//--------------------
//find maximum element in given array

#include<iostream>
using namespace std;

int maxelement(int arr[], int index,int n) {
    // base case
    // if(index == n-1)
    // return arr[index];

    // return max(arr[index] , maxelement(arr,index+1,n));

    if(index == n-1){
        return arr[index];
    }
    return max(arr[index] , maxelement(arr,index+1,n));


    
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"maxelement is:"<<maxelement(arr,0,n); 
}