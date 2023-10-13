//1: Take 20 elements from user input and find its sum with the help of an array.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the size: ";
//     cin>>size;
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0; i<size; i++){
//         sum += arr[i];
//     }
//     cout<<sum;
// }
//enter the size: 20
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 
// 15 16 17 18 19 20
// 210

//2.Calculate the average of elements in an array of size 18.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the size: ";
//     cin>>size;
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0; i<size; i++){
//         sum += arr[i];

//     }
//     int average = sum/size;
//     cout<<average;
// }
// enter the size: 18
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 
// 15 16 17 18
// 9


//3: Find the index of a specific element in an array, if the element is not present, print -1. Ask the size of the array from the user and then implement it.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the size: ";
//     cin>>size;
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }
//     int element;
//     cin>>element;
    
//     int foundIndex = 0;//-1
//     for(int i=0; i<size; i++){
//        if(arr[i] == element)
//         foundIndex = i;
//         break;
//     }
//     if(foundIndex != 0)//!=-1
//      cout<<foundIndex;
   
//     else
//      cout<<-1;//not found

    
// }
// enter the size: 5
// 1 2 3 4 5
// 3
// 2


// //4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // int size;
//     // cout<<"enter the size: ";
//     // cin>>size;
//     char arr[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','w','x','y','z'};
//     // for(int i=0; i<size; i++){
//     //     cin>>arr[i];
//     // }
//     for(int i=0; i<25; i++){
//         cout<<arr[i]<<" ";
//     }
//enter the size: 25
// a b c d e f g h i j k l m n o p q r s t w x y z  

//}


//5: Find the second largest element in an array of unique elements of size n. Where n>3.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the size: ";
//     cin>>size;
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }
//     int largest=INT_MIN;
//     int secondlargest=INT_MIN;
//     for(int i=0; i<size; i++){
//        if(arr[i] > largest ){
//         secondlargest = largest;
//         largest = arr[i];
//         }
//        else if(arr[i] > secondlargest && arr[i] != largest){
//         secondlargest = arr[i];
//        }

//     }
   
//     cout<<largest <<" "<<secondlargest;
// }
// enter the size: 5
// 10 35 7 9 29
// 35 29

//6: Find the third smallest element in an array of unique elements size n. Where n>3.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter the size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int smallest=INT_MAX;
    int secondsmallest=INT_MAX;
    int thirdsmallest=INT_MAX;
    for(int i=0; i<size; i++){
       if(arr[i] < smallest ){
        thirdsmallest = secondsmallest;
        secondsmallest = smallest;
        smallest = arr[i];
        }
       else if(arr[i] < secondsmallest && arr[i] != smallest){
        secondsmallest = arr[i];
       }
       else if(arr[i] < thirdsmallest && arr[i] != smallest && arr[i] != secondsmallest){
        thirdsmallest = arr[i];
       }

    }
   
    cout<<smallest<<" "<<secondsmallest<<" "<<thirdsmallest;
}
// enter the size: 5
// 3 4 2 6 1  
// 1 2 3