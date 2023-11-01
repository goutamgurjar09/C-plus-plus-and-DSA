#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    //create vector,declare
    //vector<int> v;
    
    //size and capacity

    // cout<<"size of v: "<<v.size()<<endl;//0
    // cout<<"capacity of v: "<<v.capacity()<<endl;//0

    // v.push_back(2);  
    // cout<<"size of v: "<<v.size()<<endl;//1
    // cout<<"capacity of v: "<<v.capacity()<<endl;//1

    // v.push_back(3);  
    // cout<<"size of v: "<<v.size()<<endl;//2
    // cout<<"capacity of v: "<<v.capacity()<<endl;//2

    // v.push_back(4);  
    // cout<<"size of v: "<<v.size()<<endl;//3
    // cout<<"capacity of v: "<<v.capacity()<<endl;//4

    // v.push_back(5);  
    // cout<<"size of v: "<<v.size()<<endl;//4
    // cout<<"capacity of v: "<<v.capacity()<<endl;//4

    // v.push_back(6);  
    // cout<<"size of v: "<<v.size()<<endl;//5
    // cout<<"capacity of v: "<<v.capacity()<<endl;//8


    //  v.push_back(9); 
    //  cout<<v[0]<<endl;


//point-1-> jb bhi hm vector create krte hai or use kise value se initilize krte hai to initially uska size and capascity same hoti hai but jb hm usme ele. push krte hai tb bdti hai capcity and size and capacity jyada hoti hai
    // vector<int> v1(5,1);

    // cout<<"size of v1: "<<v1.size()<<endl;//5
    // cout<<"capacity of v1: "<<v1.capacity()<<endl;//5

    // v1.push_back(7); 
    // cout<<"size of v1: "<<v1.size()<<endl;//6
    // cout<<"capacity of v1: "<<v1.capacity()<<endl;//10


//vector initializetion

// vector<int> v2 = {1,2,3,4,5};
// //  cout<<v2.size()<<endl;
// //  cout<<v2[0]<<endl;

// //update value
// v2[1] = 8;
// cout<<v2[1]<<endl;//8
// for(int i=0; i<v2.size(); i++){
//     cout<<v2[i]<<" ";//1 8 3 4 5
// }


//Delete value

// vector<int> v;

// v.push_back(7); 
// v.push_back(8); 
// v.push_back(9); 
// v.push_back(10); 
// v.push_back(5); 

//v.pop_back();

// cout<<"size of v: "<<v.size()<<endl;//4
// cout<<"capacity of v: "<<v.capacity()<<endl;//8

// v.erase(v.begin() + 1);//index 1 (8)ele. remove
// cout<<"size of v: "<<v.size()<<endl;//3
// cout<<"capacity of v: "<<v.capacity()<<endl;//8

// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";//7 9 10 
// }


//to insert element

// v.insert(v.begin() + 2 , 50);//index 2 pr (50)ele. insert
// cout<<"size of v: "<<v.size()<<endl;//3
// cout<<"capacity of v: "<<v.capacity()<<endl;//8

// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";//7 8 50 9 10 
// }

//again update
// v[2] = 20;
// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" "<<endl;//7 8 20 10 
// }


//to clear/remove all element in vector
// vector<int> v;

// v.push_back(7); 
// v.push_back(8); 
// v.push_back(9); 
// v.push_back(10); 
// v.push_back(5); 

// v.clear();
// cout<<"size of v: "<<v.size()<<endl;//0
// cout<<"capacity of v: "<<v.capacity()<<endl;//8



//front and back

// vector<int>arr;
// arr.push_back(1); 
// arr.push_back(2); 
// arr.push_back(9); 
// arr.push_back(7); 
// arr.push_back(5);

// cout<<arr[0]<<endl;
// cout<<arr.front()<<endl;
// cout<<arr[arr.size()-1]<<endl;
// cout<<arr.back()<<endl;

//Copy value of one to another vector

// vector<int> copy;
// copy = arr;
// for(int i=0; i<copy.size(); i++){
//     cout<<copy[i]<<" ";//1 2 9 7 5 
// }
// cout<<"size of copy: "<<copy.size()<<endl;//5
// cout<<"capacity of copy: "<<copy.capacity()<<endl;//5

//using iterative loop

//for(auto it = arr.begin(); it!=arr.end(); it++){
//     cout<<*it<<" ";//1 2 9 7 5
// }
// cout<<endl;
// for(auto i : arr){
//    cout<<i<<" ";//1 2 9 7 5
// }


//sort in increasind order
vector<int>arr;
arr.push_back(1); 
arr.push_back(2); 
arr.push_back(9); 
arr.push_back(7); 
arr.push_back(5);
// sort(arr.begin(),arr.end());

// for(auto i : arr){
//    cout<<i<<" ";//1 2 5 7 9
// }

// cout<<endl;

//sort in decreasing order both same work

//sort(arr.begin(),arr.end(),greater<int>());
// sort(arr.rbegin(),arr.rend());

// for(auto i : arr){
//    cout<<i<<" ";//9 7 5 2 1
// }


//search ele. using binary search
//cout<<binary_search(arr.begin(),arr.end(), 8);//returns 1/0 if ele. present or not

//Max or Min

int maxi = max_element(arr.begin(),arr.end());
cout<<maxi;



















}
