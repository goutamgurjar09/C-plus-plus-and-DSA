//input->int arr = {7,4,2,3,5}, int size = 5

//in insertion sort hm always first ele. ko sort mante hue comparison start krege second ele.(j) se ydi second ele. chota hai to swap krege

//let's understand briefly
//input->    arr =  {7,4,2,3,5}

//round 1           4 7 2 3 5    ->round 1 final result iske baad round 2 start hoga  and 7 ke aage(left side start se) jitne bhi ele. hai unhe sort manege  to finally (4 7) means 7 tk ele. sort ho chuke hai



//round 2           4 2 7 3 5
//                  2 4 7 3 5    ->round 2 final result iske baad round 3 start hoga  and 7 ke aage jitne bhi ele. hai unhe sort manege


//Note: first hmne (7 2) ko swap kiya then check kiya 2 ke aage koi ele. bda hai ky gr hai to 2 phle aayega usse then (4 2) ko kiya    to finally (2 4 7) means 7 tk ele. sort ho chuke hai



// //round 3        2 4 3 7 5 
//                  2 3 4 7 5  ->round 3 final result iske baad round 4 start hoga  and 7 ke aage jitne bhi ele. hai unhe sort manege

//Note: in round third hmne (7,3) ko swap kiya then hmne dekha 3 to 4 se bhi chota hai then hmne(4,3) ko bhi swap kiya  to finally (2 3 4 7) means 7 tk ele. sort ho chuke hai


// //round 4        2 3 4 5 7  ->round 4  and final  output is->  2 3 4 5 7

//finally last round tk hmara first ele. right position pr aa jayega(7) or array bhi sort hoga

//according to given input hmne 1 to n-1 se ele. ko pkdte gye or sort krte gye  means phle 4 then 2 then 3 then 5-> {4,2,3,5}
//mtlb insertion sort me hm 2nd bale ele. se start krke hai or uske aage(left me) jitne bhi ele. usse bde milte hai usko usse swap krte jate hai or tb tk swap krte hai jb tk ki bo apni right  position pr na phoche

//note: isme bhi hme i=1 to i<n tk sort krna hai ele. ko bcz ek ele. ko sort hi manege

//-------------------------

//final conclusion->

//if input-> arr =  {7,4,2,3,5}
//first round me index(1 to 0 ) tk comapre krke swap krna hai means worst case me hmara ele. index 0 pr bhi aa skta  hai  ydi veh sbse chota huaa to ex:- if arr={1,4,5,6,0} then {0,1,4,5,6}
//second round me index (2 to 0)
//third round me index (3 to 0)
//fourth round me index (4 to 0)

//Note:  yha pr (1,0)(2,0)(3,0)(4,0)  hme ye dikha rha hai ki hme kis index se kis index tk ele. ko comapre krke swap krna hai or us ele. ko right uski position pr le jana hai


//-----------------------
//ex:2
// arr= {1,4,5,6,0}

//means hme 0 ko uski right position pr lana hai baki to sort hai
//start-> i=1 to i<n-1  and j=i to j>0 j--;

//output is-> {0,1,4,5,6}






// #include <iostream>
// using namespace std;

// int main(){

// int n;
// cout<<"enter the num: ";
// cin>>n;
// int arr[1000];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// for(int i=1; i<n; i++){
//     for(int j=i; j>0; j--){
//      if(arr[j] < arr[j-1])
//       swap(arr[j],arr[j-1]);
//      else                      //and one thin remember that worst case me loop pura chlega to bha pr break nhi hoga loop
//         break;
//     }
// }


// for(int i=0; i<n; i++){
//   cout<<arr[i]<<" ";
// }

// enter the num: 5
// 1 4 3 5 0
// 0 1 3 4 5 




//2.sort array in decreasing order

// #include <iostream>
// using namespace std;

// int main(){

// int n;
// cout<<"enter the num: ";
// cin>>n;
// int arr[1000];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// for(int i=1; i<n; i++){
//     for(int j=i; j>0; j--){
//      if(arr[j] > arr[j-1])
//       swap(arr[j],arr[j-1]);
//      else  //if con. is not true
//         break;
//     }
// }


// for(int i=0; i<n; i++){
//   cout<<arr[i]<<" ";
// }

// enter the num: 5
// 1 4 3 5 0
// 5 4 3 1 0 



//3: Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. Question was explained in the class.
// #include <iostream>
// using namespace std;

// int main(){

// int n;
// cout<<"enter the num: ";
// cin>>n;
// int arr[1000];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// for(int i=0; i<n-1; i++){
//     for(int j=n-1; j>0; j--){
//      if(arr[j] < arr[j-1])
//       swap(arr[j],arr[j-1]);
//      else
//         break;
//     }
// }


// for(int i=0; i<n; i++){
//   cout<<arr[i]<<" ";
// }

// enter the num: 5
// 1 4 3 5 0
// 0 1 3 4 5 


//--------------------------
//i=1 to i<n
// j=i to n-1   ->i tk
// j= 1 2 3 ...n-1 itne time chlega every time
// n *(n-1) /2 => o(n^2)
// tc-> in worst case  => o(n^2)
//auxilarry s.c ->  o(1)


//--------------------
//if given array already sorted
// tc-> in best case => o(n)

//-----------------
//avg. case = sum of all cases / total case

//n-1 + n + n+1 + n+2 +..........n(n-1)/2
// tc-> in best case => o(n ^ 2)



















































}