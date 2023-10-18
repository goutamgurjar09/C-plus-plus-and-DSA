








//input->int arr = {7,4,8,5,3}, int size = 5

//Bubble sort

//first round-> compare consecutive element with each other and swap it ydi first bda ho second se- 1st->  4 7 5 3 8  
//means in bubblesort hme sbse bde element ko piche/last me le jana hai each step or ese krke sort ho jayega
//and jo already chota hai next ele. se use bhi rhne dena hai and remember one thing each round/step me 4 times (n-1) times compare krna hai or unhe swap krna hai

//2nd->  4 5 3 7 8
//3rd->  4 3 5 7 8
//4th->  3 4 5 7 8


//note: to hme dikh rh ki first step me hm sbse bde ele. ko last me le ja rhe means(8) ->8
//second step me hm dusre sbse bde ele. ko last me le ja rhe means (7)-> 7 8
//third step me hm third sbse bde ele. ko lat me le ja rhe means(5)->5 7 8
//and fourth step me hm 4th sbse bde ele ko last me le ja rhe means(4)-> 4 5 7 8
//is trh hmara array sort ho jayega  
//last step tk isliye nhi gye bcz last bale already chota hoga sbse to  final ans-> 3 4 5 7 8



//let's understand briefly
//input->    arr = {7,4,8,5,3} 

//round 1           4 7 8 5 3
//                  4 7 8 5 3
//                  4 7 5 8 3
//                  4 7 5 3 8  ->round 1 final result iske baad round 2 start hoga  

//Note: in round first hmne sbse bde ele. ko last me swap krte hue laye-> (8)  to res 8

// //round 2        4 7 5 3 8
//                  4 5 7 3 8
//                  4 5 3 7 8  ->round 2 final result iske baad round 3 start hoga

//Note: in round second hmne 2nd sbse bde ele. ko last me swap krte hue laye ->(7) to res 7 8  

// //round 3        4 5 3 7 8
//                  4 3 5 7 8  ->round 3 final result iske baad round 4 start hoga

//Note: in round third hmne tisre sbse bde ele. ko last me swap krte hue laye ->(5) to res 5 7 8  

// //round 4        3 4 5 7 8  ->round 4  and final  output is-> 3 4 5 7 8   -> 4 5 7 8

//Note: in round fourth hmne fourth sbse bde ele. ko last me swap krte hue laye ->(4) to res 4 5 7 8  

//at the and hmne each round ki every step me hmne ek el. ko dusre ele. se compare krte hue swp kiya



//Note: if we have a size of 5 array[2,4,5,3,8]  to hme n-1 (4) tk hi swap krna hai / j loop chlana hai 
//bcz  hmarari con. fail ho jayegi for 5th element ke liye bcz hm arr[j] ko arr[j+1] se compare krege thats why (0 to 3)=> 4 tk chlega j loop

//round 1 me j loop  (0 to 3) means total 4 time chlega bcz last ele. already sorted ho jayega/hai after first round->(8)
//round 2 me ........(0 to 2) means total 3 time chlega bcz last ele. already sorted ho jayega/hai after first round->(7,8)
//round 3 me ........(0 to 1) means total 2 time  .........->(5,7,8)
//round 2 me ........(0 to 0) means total 1 time  .........->(3->4,5,7,8) 

//Note: means i ki value hr ek round me ek se km ho rhi (3,2,1,0)
//if n=5  so i will be run i=n-2 to i>=0; i--


//tc -> o(n^2) in wrost case
//tc -> o(n)  in best case if given array is already sorted [1,2,3,4,5] isme hme ek bhi swap krne ki need nhi hai thats why






#include<bits/stdc++.h>
using namespace std;
int main(){

// int n;
// cout<<"enter the num: ";
// cin>>n;
// int arr[1000];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// for(int i=n-2; i>=0; i--){
//     bool swapped = 0;   //means ek bhi swap nhi hua hai
//     for(int j=0; j<=i; j++){
//         if(arr[j] > arr[j+1])
//         swap(arr[j],arr[j+1]);
//         swapped = 1;   //means swap hua hai 
//     }
//     if(swapped == 0){ //means given array is already sorted to aage check nhi krna loop break
//         break;
//     }
// }


// for(int i=0; i<n; i++){
//     cout<<arr[i] <<" ";
// }
// enter the num: 5
// 1 2 5 3 4
// 1 2 3 4 5




//2.soreted array in decreasing order using bubble sort


// int n;
// cout<<"enter the num: ";
// cin>>n;
// int arr[1000];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// for(int i=n-2; i>=0; i--){
//     bool swapped = 0;   //means ek bhi swap nhi hua hai
//     for(int j=0; j<=i; j++){
//         if(arr[j] < arr[j+1])
//         swap(arr[j],arr[j+1]);
//         swapped = 1;   //means swap hua hai 
//     }
//     if(swapped == 0){ //means given array is already sorted to aage check nhi krna loop break
//         break;
//     }
// }


// for(int i=0; i<n; i++){
//     cout<<arr[i] <<" ";
// }
// enter the num: 5
// 1 2 5 3 4
// 5 4 3 2 1 





//3: Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from the last. Question was explained in the class.

// int n;
// cout<<"enter the num: ";
// cin>>n;
// int arr[1000];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// for(int i=0; i<n-1; i++){
//     bool swapped = 0;   //for sorted array means ek bhi swap nhi hua hai
//     for(int j=n-2; j>=0; j--){
//         if(arr[j] > arr[j+1])
//         swap(arr[j],arr[j+1]);
//         swapped = 1;   //means swap hua hai 
//     }
//     if(swapped == 0){ //means given array is already sorted to aage check nhi krna loop break
//         break;
//     }
// }


// for(int i=0; i<n; i++){
//     cout<<arr[i] <<" ";
// }


// enter the num: 5
// 4 1 2 5 3
// 1 2 3 4 5


//4: Bubble Sort Algorithm to sort the array of char in ascending order.
int n;
cout<<"enter the num: ";
cin>>n;
char arr[1000];

for(int i=0; i<n; i++){
    cin>>arr[i];
}

for(int i=n-2; i>=0; i--){
    
    for(int j=0; j<=i; j++){
     if(arr[j] > arr[j+1])
      swap(arr[j],arr[j+1]);

    }
}


for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}
// enter the num: 5
// b d e a c
// a b c d e




















}