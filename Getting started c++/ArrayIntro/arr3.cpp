//1:search an element in array and return index;

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 5, 6, 8};
//     int index = -1;
//     int foundindex;
//     cin >> foundindex;

//     for (int i = 0; i < 5; i++) {
//         if (arr[i] == foundindex) {
//             index = i;
//             break;
//         }
//     }

//     cout << index << endl;

//     return 0;
// }

// 5
// 2

//2.reverse an array
#include <iostream>
using namespace std;

int main() {
    // int arr[] = {1, 2, 5, 6, 8};
    // int temp[5]= {0};
    // int i=4;//n-1
    // int j=0;// i work as a index for arr and j for temp
    // while(i >= 0){
    //    temp[j] = arr[i];
    //    j++;
    //    i--;
    // }
    
    // for(int i=0; i<5; i++){
    //   cout << temp[i];
    // }


//other approach
 int arr[] = {1, 2, 5, 6, 8};
 int i=0;
 int j=4;//index
 while(i < j){
    swap(arr[i],arr[j]);
    i++;
    j--;
 }
 for(int i=0; i<5; i++){
      cout << arr[i]<<" ";
 } 
}
//8 6 5 2 1 
