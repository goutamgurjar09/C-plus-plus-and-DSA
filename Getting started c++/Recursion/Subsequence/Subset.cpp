// #include<bits/stdc++.h>
// using namespace std;

// void subsequence( int arr[], int index, int n,vector<vector<int> >&ans,vector<int> temp){
//      if(index == n){
//         ans.push_back(temp);
//         return;
//      }
//      //if value not  include
//      subsequence(arr,index+1,n, ans, temp);
//      //if value included
//      temp.push_back(arr[index]);
//      subsequence(arr,index+1,n, ans, temp);

// }

// int main(){
//     int arr[] = {1,2,3};
//     vector<vector<int> > ans;
//     vector<int> temp;
//     subsequence(arr, 0 , 3, ans ,temp);
//    for(int i=0; i<ans.size(); i++){
//     for(int j=0; j<ans[i].size(); j++){
//         cout<<ans[i][j] <<" ";
//     }
//     cout<<endl;
//    }
// }
//first print space/empty temp array 
//
// 3 
// 2 
// 2 3 
// 1 
// 1 3 
// 1 2 
// 1 2 3 
//Tc- O(2^n)
//Sc- O(2^n * n)

//-----------------
//How to reudse space complexity ->to pass temp arr as a ref. and after adding pop_back it bcz ye sbke liye unique hai so that it can be empty
// #include<bits/stdc++.h>
// using namespace std;

// void subsequence( int arr[], int index, int n,vector<vector<int> >&ans,vector<int>& temp){
//      if(index == n){
//         ans.push_back(temp);
//         return;
//      }
//      //if value not  include
//      subsequence(arr,index+1,n, ans, temp);
//      //if value included
//      temp.push_back(arr[index]);
//      subsequence(arr,index+1,n, ans, temp);
//      temp.pop_back();

// }

// int main(){
//     int arr[] = {1,2,3};
//     vector<vector<int> > ans;
//     vector<int> temp;
//     subsequence(arr, 0 , 3, ans ,temp);
//    for(int i=0; i<ans.size(); i++){
//     for(int j=0; j<ans[i].size(); j++){
//         cout<<ans[i][j] <<" ";
//     }
//     cout<<endl;
//    }
// }
//sc -> O(n)




//Generate all subset of given string

#include<bits/stdc++.h>
using namespace std;

void subset( string &str, int index, int n,vector<string>&ans, string temp){
     if(index == n){
        ans.push_back(temp);
        return;
     }
     //if value not  include
     subset(str,index+1,n, ans, temp);
     //if value included
     temp.push_back(str[index]);
     subset(str,index+1,n, ans, temp);
     temp.pop_back();

}

int main(){
    string s = "abc";
    vector<string>ans;
    string temp;
    subset(s, 0 , 3, ans ,temp);
   for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<endl;
   }
}
//
// c  
// b  
// bc 
// a  
// ac 
// ab 
// abc