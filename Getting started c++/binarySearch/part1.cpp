
//BinarySearch- binary search algo. tbi us hogi tb hmara data sorted formn me diya gya ho but data increasing/decreasing order me sort hona chahiye

//ex:arr = {2,3,5,6,8,9}  ,int left=0,right=n-1
//int x = 8

//sbse phle hm mid ele. find krte hai-> mid=(left + right)/2
//then check krte hai mid == x hai
//is case me mid chota hai x se means mid se piche/phle bale sbi ele. chote hai x se or mid ke baad bale x ke equal ya bde hai
//to hm left ko left = mid+1 kr dete hai bcz  hme mid ke baad hi milega x -> means index 3 to 5 se 
//next step me hm fir se mid calculate krte hai index 3 + 5 /2 krke bcz ab hmara left and right  index-3 and 5  hoga  thats why and now mid 8 hoga
//ab fir check krege mid==x to is case me condition true hogi to return true kr denge or finally hme x ele. mil gya


//Note:is algorithm se hme  2 step me ans mil gya phle hme mid nikala then fir se mid nikala to mid==x ho gya or ans mil gya

//Note: means comparison to Leanear search hmne using binary search ans ko jldi dundh liya
//isme hmari TC-> o(logn) lgi and Leanear search me hm ek ek step find krte to hme bo ele 4 step me
//milta isme hmari TC- 0(n) lgti 


//ex:2  arr={2,4,6,8,10} int x=4

//mid = index 2 jis pr ele. 6 hai 
//check con. but mid  to x se bda hai to hm
//right = mid-1  ab right=index 1 and left=0
//fir mid nikalege to 0 index aayega 
//then check con.-> mid jo ki chota hai x se
//to left=mid+1
//fir se mid is baar left and right dono same index pr hai to mid=1 index pr hi hoga 
//then check con. to is baar con. bi true or finally mid==x and ele. bhi mil gya


//ex:3   arr={2,4,6,12,14} int x=11
//ab ydi x present hi na ho to hme loop kaise break krna hai
//jb tk hmara left <= right ho tb tk hi hme loop chlana hai
//jha pr left > right to hme loop break kr dena hai/mtlb hme rukna pdega  or return false kr dena hai bcz hme ele. nhi mila


//ex:
//n=5 , x=14
//arr={2,4,12,14,15,17}

//TC-
//jaise apke pass 6 size ka array hai 
//first time hmne mid nikala  jo ki index-2 pr hoga

//to hmne first->  n = 1-> step me mid nikala

//ab bo ele. mid pr present nhi hua to ya to bo ele. hme mid se right part me milega ya left part me
//jaise mid se bo ele. right part me hai to 

//ab hmara array ka size n/2 ho jayega or hmne  mid ko 1 step me calculte kiya -> n/2 = 1

//but ab ele. x mid pr fir se present nhi hai to ya to bo mid se left side me  hoga ya right side me

//to ab hmara array ka size-> n/4 = 1  and isme bhi ek hi step lgega ele. ko dundhne me


//or ese krte krte aap n/2^k = 1 yha tk phoch jaoge 
//mana yha pr mujhe mera ele. mil gya to mera array ka size = 1  hoga  ise worst case bolege 
//ex:-phle array size = 100,50,25,12,6,3,1 mtlb size km hota gya or last me size=1 hi bcha
//bcz hme ele. last me jakr mila
//ab ye bi ho skta  suppose that ydi ele. last me bhi nhi mile

//to finally  TC->
//n = 1      -> n/2^0  =0 + 1 => 1 mtlb first time 1 step me ans mila hoga
//n/2 = 1    -> n/2^1 = 1 + 1 => 2
//n/4 = 1    -> n/2^2 = 2 + 1 => 3
// .
// .
//n/2^k = 1  -> n/2^k => k + 1   mtlb last time hme k+1 step me ans mila skta hai in worst case

//note: n = 2^k  means isze of array 1 bchega last me

//n/2^k = 1  -> n = 2^k  -> logn = klog2 -> k = logn/log2 => log2n 
//k= (log2n + 1)->   ::n/2^k => k + 1 
//so finally TC-> O(logn)


//NOTE: me logn kyu bol rha bcz jb mera n size ka array tha to bo phle n hua then n/2 hua then n/4 then n/8 ..........1 /n/2^k bn gya  mtlb double - double krke km ho rha array ka size
//isliye TC->O(logn) 

//in Best case TC -> O(1) bcz man lo jo bhi hme ele. find krna hai bo mid pr hi mil gya to ek baar/step me that why
//Avg. case TC -> O(logn) bcz ya to ek bar me ya do baar me ya teen baar me ele. mila.....


#include<bits/stdc++.h>
using namespace std;
//1: An array is given in increasing order with Key, Find the index of key, if key is not present, print -1;

// int BinarySearch(int arr[],int key,int n){
//     int left = 0,right = n-1,mid;
//     while(left <= right){
//         // find Mid

//         mid = (left + right)/2;
//         if(arr[mid] == key){
//             return mid;
//         }
//         else if(arr[mid] < key){
//             left = mid + 1;
//         }
//         else{//arr[mid] > key
//             right = mid - 1;
//         }
//     }
//     return -1;
// }


//2: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;

int BinarySearch(int arr[],int key,int n){
    int left = 0,right = n-1,mid;
    while(left <= right){
        // find Mid

        mid = (left + right)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            right = mid - 1;
        }
        else{//arr[mid] > key
            left = mid + 1;
        }
    }
    return -1;
}


int main(){

int n;
cout<<"enter the num: ";
cin>>n;
int arr[1000];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int x;
cin>>x;
// int ans = BinarySearch(arr,n,x);
// // cout<<ans;
// //cout<< BinarySearch(arr,x,n);

// if (ans != -1) {
//         cout << "Element found at index: " << ans << endl;
//     } else {
//         cout << "Element not found." << endl;
// }

// enter the num: 5
// 2 4 6 8 9
// 4
// 1



//for decreasing
cout<< BinarySearch(arr,x,n);

// enter the num: 5
// 5 4 3 2 1
// 2
// 3


































}