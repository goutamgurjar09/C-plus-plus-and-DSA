//in c++ array is a container/datastructure which stores same type of data like int,double,boolean,char
// and  it stores data in contigoues memory location and you can't grow/bdana its size at runtime bcz it has fixed size

//multiple ways to declare an array

//1.declare an array
//int arr[100];

//2.all values will be zeros
// int arr[100] = {0};

//3.declare and initialized
// int arr[] = {1,2,3,4};

//4.
// int arr[100];
// for(int i=0; i<100; i++){
//     cin>>arr[i];
//     cout<<arr[i]<<" ";
// } 

//1 2 3 4 5.....100
//1 2 3 4 5.....100

//5.
//  int arr[] = {1,2,3,4};
//  cout<<arr[0];

//6.it gives us garbage values/random it may be anything bcz i have declare 5 size but i have puted only two num 
//   int arr[5] = {1,2};
//   cout<<arr[3];

//--------------------------
//2.what do you understand by contiguous memory location

//hme iski need isliye pdi bcz ydi hmare paas same naam/number ka bhot sara data hai means hmare array me elemmts same naame /num ke ek se jyada  hai 
//to mujhe element ko acces krne me pr pta nhi hai ki kis ko kru bcz ek se jyada same naam/number ke element hai 
//isliye hmne sbi element ko access krne ke liye ek perticular address allocate kiya memory me taki me unhe esily acces kr sku
//lets see mujhe 2 ko access krna hai but yha to do baar hai two to kisko access kru that's why compilor allocates memory for each element
//---------------------
// 2 | 4 | 5 | 2 | 5 |
//---------------------

//array elements stores contiguous memory location means one by one and all elements have its own address which they point
//ex:-we have an array with size 5
//int arr[5] = {2,4,5,6,7}

//---------------------
// 2 | 4 | 5 | 6 | 7 |
//---------------------

//int size is 4 bytes and it may be change according to os means => 32bit bcz 1byte=>8bit
//so hr ek element ko 4bytes of space/memory milegi  and first element ko rkhne ke liye mujhe 4byte of space chahiye hogi to 
//let's see-> i have first element 2 whose address is -> 500 501 502 503 total 4bytes of memory bnegi then next element 4 point krega address  504->500 501 502 503 pr then next 508....and so on
//is type se hmara data contiguous memory me rkha hota hai according to datatype which you use
//bcz hr ek address 1byte ka hota hai let see 500->501->503->503 and yhi milkr 4bytes bna rhe hr ek element ke liye....so on

//lets assume address of 2 is-> 500
//then address of 4 will be-> 504
//then address of 5 will be-> 508
//then address of 6 will be-> 512
//and address of 7 will be-> 516


//3.why do we need 0 based indexing with array

//-------------------------
//index-0   1   2   3   4
//     --------------------
//      2 | 4 | 5 | 6 | 7 |
//     --------------------

//ab hme elemnt 6 ko acces krna hai to hme first ele. ka address pta hona chahiye 
//lets assume first ele. address-> 500 then 
//arr + index*size of datatype  => 500 + 3*4 => 512 location pr 6 present hai

//------------------------
//exception: why can not be use 1 based indexing

//-------------------------
//index-1   2   3   4   5
//     --------------------
//      2 | 4 | 5 | 6 | 7 |
//     --------------------
//bcz isme lenthy process hai to access the any elements

//arr + (index-1)*size of datatype  => 500 + 3*4 => 512 location pr 6 present hai


//-------------------------
//we have a char array and you have to find address and access its element

//char arr[5];
//index- 0     1     2     3     4
//     ------------------------------
//      'a' | 'b' | 'c' | 'd' | 'e' |
//     ------------------------------
//char size is 1bytes
//lets assume 'a'=100 to 'b'=101 ,'c'=102,'d'=103,'e'=104
//arr + index*size of datatype => 100 + 2*1 =>102->2

#include<bits/stdc++.h>
using namespace std;
int main(){

// int a;
// cout<<sizeof(a); //4 bytes bcz int var

//  char a;
//  cout<<sizeof(a); //1 bytes bcz int var

//--------------------
//calculate total size of array means array element kitni total memory le rhe
//    int arr[5] = {1,2,3,4,5};
//    cout<<sizeof(arr);
//20 bcz hr ek ele. 4bytes le rha

//---------------
//calculater how many elements present in the array/length/ of array
//    int arr[5] = {1,2,3,4,5};
//    cout<<sizeof(arr)/sizeof(arr[0]); //20/4 => 5
//5


// int size;
// cout<<"enter the size: ";
// cin>>size;
// //int arr[size];
// int arr[1000];
//    for(int i=0; i<5; i++){
//      cin>>arr[i];
//    }
//    for(int i=0; i<5; i++){
//      cout<<arr[i]<<" ";
//    }
// enter the size: 5
// 3 4 5 6 3
// 3 4 5 6 3 

//------------------
//    int arr[6] = {1,2,3,4};
//    for(int i=0; i<6; i++){
//      cout<<arr[i]<<" ";
//    }
//1 2 3 4 0 0 

//-----------------
//    int arr[5] = {1,2,3,4,5};
//    cout<<arr[6]<<" ";
//6422320 garbage value

//------------------
// int arr[4] = {1,2,3,4};
//    for(int i=0; i<4; i++){
//      cout<<arr[i]<<" ";
//    }
//1 2 3 4

//   int arr[5] = {1,2};
//   cout<<arr[4];

//------------------
//error: too many initializers for 'int arr[2]'
//   int arr[2] = {1,2,3,4};
//   cout<<arr[3];

//  int arr[] = {1,2,3,4};
//  cout<<arr[0];

//------------------
//int arr[5];
// for(int i=0; i<5; i++){
//     cin>>arr[i];
//     cout<<arr[i];
// } 
    


//1.find min element in the arr
// int arr[5] = {4,5,7,8,2};
// int ans = INT_MAX;
// for(int i=0; i<5; i++){
//     if(arr[i] < ans){
//         ans = arr[i];
//     }
// }
// cout<<ans;

//1.find max element in the arr
// int arr[5] = {4,5,7,8,2};
// int ans = INT_MIN;
// for(int i=0; i<5; i++){
//     // if(arr[i] > ans){
//     //     ans = arr[i];
//     // }
//     //ans = min(ans,arr[i]);
// }
// cout<<ans;


}