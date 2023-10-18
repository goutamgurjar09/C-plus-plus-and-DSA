//input->int arr = {9,7,3,1,6}, int size = 5

//selection sort

//first step-> find sbse chota element and swap it from first element-  1 7 3 9 6         =>in 1st step we swaped (9,1) 
//second step, second element se find krege chota element according to first step  (7 - n-1 tk)->  1 3 7 9 6        =>in 2nd step we swaped (7,3) 
//third step, third ele. se........(7 - n-1 tk) and swap it from 3rd ele. ->  1 3 6 9 7                             =>in 3rd step we swaped (7,6) 
//fourth step, fourth ele(9 - n-1) se and swap kr denge -> 1 3 6 7 9                                                =>in 4th step we swaped (9,7) 

//if arr = {9,7,3,1,6}
//1.  1 7 3 9 6    =>(0 to 4) ->means first time hmne index (0-4) me se sbse small ele. find krke swap kiya
//2.  1 3 7 9 6    =>(1 to 4) ->means second time hmne index (1-4) me se sbse small ele. find krke swap kiya
//3.  1 3 6 9 7    =>(2 to 4) ->means third time hmne index (2-4) me se sbse small ele. find krke swap kiya
//4.  1 3 6 7 9    =>(3 to 4) ->means fourth time hmne index (3-4) me se sbse small ele. find krke swap kiya

//note:- yha n-1 ->(0 to 4) to constant hai in every step ,  only i/index ki value change ho rhi in every step

//so finally hme pta chla ki ydi hme kise bhi array ko sort krna hai using selection sort 
//to hme sbse phle sbse chota element find krna baki sare element me se hai hr ek step me 
//and hmara array sort n-1 step me hoga means ydi hmara array ka size 5 hai to hmara array 4 step me sort ho jayega bcz last element to already sort hi hoga 


//Note: hmara loop i=0 ke liye pura j=1 to n-1 chlega and i=2 ke liye j=2 to n-1 pura chlega and so on and j=i+1 chlega.....
#include <iostream>
using namespace std;

int main(){

//int arr[6] = {10,4,1,3,2,7};


// for(int i=0; i<5; i++){//bcz step array size 6-1 => 5 honge (0-4)=>total 5 step me sort hoga
//     int index = i;
//     for(int j=i+1; j<6; j++){
//      if(arr[j] < arr[index])
//         index = j;
//     }
//     swap(arr[i],arr[index]);
// }
// for(int i=0; i<6; i++){
//   cout<<arr[i]<<" ";
// }


//take input from user
// int n;
// cout<<"enter the num: ";
// cin>>n;
// int arr[1000];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// for(int i=0; i<n-1; i++){//bcz step array size 6-1 => 5 honge (0-4)=>total 5 step me sort hoga
//     int index = i;
//     for(int j=i+1; j<n; j++){
//      if(arr[j] < arr[index])
//         index = j;
//     }
//     swap(arr[i],arr[index]);
// }


// for(int i=0; i<n; i++){
//   cout<<arr[i]<<" ";
// }
// enter the num: 5
// 6 7 3 2 1
// 1 2 3 6 7 

//1 2 3 4 7 10

//t.c. -> o(n^2)
//total s.c -> o(1)
//auxiliary space complexity-> o(1)

//The space complexity of the provided code is O(1), which means it uses a constant amount of extra space regardless of the input size.
//So, whether arr is declared as arr[6] or arr[n], the space complexity is O(1), meaning it uses a constant amount of extra space regardless of the size of the array.
//Note: arr[6]/arr[200] iski space complexity hmesa o(1) hogi bcz ye constant number hai

//Additionally, there are a few integer variables used in the code (e.g., i, j, index) and they don't depend on the input size, so their space complexity is also O(1).





//h.w.

//1. Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 

//means reverse of first method/selection sort means phle sbse bda element mile usko last me leker jao or sort kro

// int n;
// cout<<"enter the num: ";
// cin>>n;
// int arr[1000];

// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// for(int i=n-1; i>1; i--){
//     int index = i;
//     for(int j=i-1; j>=0; j--){
//      if(arr[j] > arr[index])
//         index = j;
//     }
//     swap(arr[i],arr[index]);
// }


// for(int i=0; i<n; i++){
//   cout<<arr[i]<<" ";
// }


// enter the num: 5
// 10 4 3 2 8
// 2 3 4 8 10 





//2: Selection Sort Algorithm to sort the array of integers in decreasing/decending order.



// int n;
// cout<<"enter the num: ";
// cin>>n;
// int arr[1000];

// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// for(int i=0; i<n-1; i++){
//     int index = i;
//     for(int j=i+1; j<n; j++){
//      if(arr[j] > arr[index])
//         index = j;
//     }
//     swap(arr[i],arr[index]);
// }


// for(int i=0; i<n; i++){
//   cout<<arr[i]<<" ";
// }

// enter the num: 5
// 4 5 7 9 3
// 9 7 5 4 3

// enter the num: 5
// 1 2 3 4 5
// 5 4 3 2 1 




// Selection Sort Algorithm to sort the array of char in ascending order.
int n;
cout<<"enter the num: ";
cin>>n;
char arr[1000];

for(int i=0; i<n; i++){
    cin>>arr[i];
}

for(int i=0; i<n-1; i++){
    int index = i;
    for(int j=i+1; j<n; j++){
     if(arr[j] < arr[index])
        index = j;
    }
    swap(arr[i],arr[index]);
}


for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}
// enter the num: 5
// b d e a c
// a b c d e














}