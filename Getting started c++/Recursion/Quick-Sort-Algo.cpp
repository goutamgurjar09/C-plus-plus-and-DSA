#include<bits/stdc++.h>
using namespace std;

int Partition(int arr[],int start,int end){
     int pos = start;
     for(int i=start; i<=end; i++){
        if(arr[i] <= arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }

     }
     return pos-1;
}

void quickSort(int arr[],int s,int e){
    if(s >= e){
        return;
    }
    int pivot = Partition(arr,s,e);
    //Left part array
    quickSort(arr,s,pivot-1);
    quickSort(arr,pivot ,e);

}
int main(){

  int arr[] ={10,3,4,1,5,6,3,2,11,9};
  quickSort(arr,0,9);
  for(int i=0; i<10; i++){
    cout<<arr[i]<<" ";
  }

}
//1 2 3 3 4 5 6 9 10 11 