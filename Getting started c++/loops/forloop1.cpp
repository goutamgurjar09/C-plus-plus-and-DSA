#include<iostream>
using namespace std;
int main(){
//cout<<"goutam\n";
// cout<<"goutam\n"<<endl;
// cout<<"goutam"<<endl;
// cout<<"goutam"<<endl;
// cout<<"goutam"<<endl;

//Note: it means mujhe kise bhi statement ko ydi baar baar print krna hai to i have to use loop insted of baar baar cout krna

//how does this  for loop works
// step 1: initialized i/var value
// step 2: check conditional
// step 3: print i valuse if condition match  else break
// step 4: increament i value 
// step 5: then again check condition is matched or not 
// step 6: then again print i 
//Note: is tarah hmara loop baar baar chlta rhega or print krta rhega i ki value jb tk condition satisfied/true hogi tb tk 


int count;
   // for(count = 1; count<=10; count++){
   //    //cout<<count<<endl;
   //    cout<<count << "  goutam" <<endl;
   //    //inside the  for loop ,loop me print hoga 1 se 10 tk
   // }
     //cout<<count<<endl; //11

   
   // for(count = 1; count>0; count++){
   //    //cout<<count<<endl;
   //    cout<<count << "  goutam" <<endl;
   //      //ye loop infinite time chlega bcz every time condition  will be greater then 1 
   // }
   


//2. to print square of any given number / table of any num
// int n; 
// cout<<"enter your no :";
// cin>>n;
//    for(count = 1; count<n; count++){
//       //cout<<count <<"squre is  "<< count * count <<endl;
//       //ye loop me print hoga 1 se num tk 
//    }
//    cout<<count * count<<endl;
// }


//3. print all the even number 1 to n // and count it
int n; 
cout<<"enter your no :";
cin>>n;
int i;
int c = 0;
   // for(i = 2; i<=n; i+=2){
   //   // if(i % 2 == 0) bcz i am apply i+=2
   //    //cout<<"even num  is "<<i<<endl;
   //   //c++;
   // }
   //cout<<"even num  is "<<c<<endl;

   //using condition
   for(i = 1; i<=n; i+=1){
      if(i % 2 == 0)
      cout<<i<<" ";
   }
   //cout<<i; //11
}

