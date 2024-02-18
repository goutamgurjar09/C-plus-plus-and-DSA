#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start ,int mid,int end){
    vector<int> temp(end-start + 1 );
     int index=0,  left = start, right = mid+1;
     while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            temp[index] = arr[left];
            index++,left++;
        }
        else{//arr[left] >= arr[right]
            temp[index] = arr[right];
            index++,right++;
        }
     }
     //if left array is not empty yet means isme ele. bche hai
     while(left <= mid){
          temp[index] = arr[left];
           index++,left++;
     }
     //if right array is not empty yet means isme ele. bche hai
     while(right <= end){
          temp[index] = arr[right];
           index++,right++;
     }
    index = 0;
     //put temp array value in the origonal array
     while(start <= end){
         arr[start] = temp[index];
         start++,index++;
     }
}
void mergeSort(int arr[],int s ,int e){

    if(s == e){
        return;
    }
  int mid = s +(e-s)/2;

  //left part
  mergeSort(arr,s,mid); // start to mid tktk devide kro
  //Right part
  mergeSort(arr,mid+1,e); // mid+1 to end tk devide kro
  merge(arr,s,mid,e);

}


int main(){
 int arr[] = {6,3,1,2,8,9,10,7,3,10};
 mergeSort(arr,0,9);
 for(int i=0; i<10; i++){
    cout<<arr[i] <<" ";
 }
 
}
//1 2 3 3 6 7 8 9 10 10
