// Functions in C++ || Pass by Value || Pass by Reference

//why use function?
//1. code reusability
//2. readability
//and you can call it multiple times means you can call your task multiple times which exist inside the function 


//-------syntax--------

// return type funName(parameter1,parameter12){//its called function declared
//       { 
//         coding part  //and its called function define
//       }
//       retrun value;//jo bi function hme return krega means function ka jo bi return type hoga fun hme same return krega like-> if function type int then it return int value
// }

//----------------------

//1. check given num is prime number or not return true/false

// #include<iostream>
// using namespace std;

//   bool prime(int n){
//    // cout<<n; //copy var of  orignol num = n
//     if(n < 2){
//        return 0;
//     }
//     for(int i=2; i<n; i++){
//         // cout<<i;
//         if(n%i == 0){
//             return 0;
//         }
//     }
//     return 1;
//   }

//------------------------
//2. find factorial of any num but by this logic you can not get large number of factorial

//  long long int factorial(int n){
//    // cout<<n; //copy var of  orignol num 
//     long long fact = 1;
//     if(n < 1){
//        return 0;
//     }
//     for(int i=1; i<=n; i++){
//        //cout<<i<<"->";
//        fact = fact * i;
//        //cout<<fact<<" "<<endl;
//     }
//     return fact;
//   }






// int main(){
//    int num;
//    cout<<"enter the num: ";
//    cin>>num;
//    int ans = prime(num);
//    cout<< prime(num);

   
//-----------------------
//    int a,b;
//    cout<<"enter the num a and b: ";
//    cin>>a>>b;
   //long long int ans = factorial(num);
   //cout<< factorial(num); //or you can direct cout
   //cout<< factorial(num-1); 
   
//    cout<< factorial(a)<<endl; 
//    cout<< factorial(b)<<endl; 
//    cout<<factorial(a-b)<<endl; 
  
//  cout<<"final ans is: "<<ans;
 
//Note: jo bi me yha paramenter/input pass kr rha hu main function like ->[factorial(a)] uski value /bo upr jake(function) jha pr n variable me pass ho jayegi
//factorial(a) and its called argument

///--------------------
//input/output
// enter the num: 5
// 1->1 
// 2->2
// 3->6
// 4->24
// 5->120
// final ans is: 120


// enter the num a and b: 3 7
// 1->1 
// 2->2  (a!)
// 3->6
// 6

// 1->1
// 2->2
// 3->6
// 4->24
// 5->120  (b!)
// 6->720
// 7->5040
// 5040

// 1->1
// 2->2
// 3->6   (b-a!)
// 4->24
// 24

// enter the num a and b: 7 3
// 1->1
// 2->2
// 3->6
// 4->24  (a - b!)
// 24
//}


//--------------------
//3. sum of two number
#include<iostream>
using namespace std;


// int sum(int p, int q){
//     int ans = p + q;
//     return ans;
// }

// int Mul(int p, int q){
//     int ans = p * q;
//     return ans;
// }

//----------------
//if you pass value in fun then you dont need to take any input and also you don't need to pass any argument in main fun
// int Mul(int p=3, int q=2){ //default parameter
//     int ans = p * q;
//     return ans;
// }

// //-------------------
// void Mod(int p, int q){
//     // int ans = p % q;
//     // cout<<ans;
//     cout<<p % q;
// }

// //-------------------
// void fun(){
//     cout<<"Hello Goutam Gurjar";
// }

//-----------------
// long long int factorial(int n = 5){
//    // cout<<n; //copy var of  orignol num 
//     long long fact = 1;
//     if(n < 1){
//        return 0;
//     }
//     for(int i=1; i<=n; i++){
//        //cout<<i<<"->";
//        fact = fact * i;
//        //cout<<fact<<" "<<endl;
//     }
//     return fact;
// }



int main(){
//    int num;
//    cout<<"enter the num: ";
//    cin>>num;
//Note:-if you dont pass num value in main fun then you have to pass value in function-> factorial(int n = 5)
//   cout<<factorial();//120
//  cout<<factorial(num);
//is num ne fun bale var->n=5 ko 7 me bdl dega copy bnkr 
// enter the num: 7
// 5040


//-----------------
//  int a,b,c,d;
//    int a,b;
//    cout<<"enter the num a and b - c - d: ";
//    cin>>a>>b>>c>>d;
//    cin>>a>>b;

// //   function call
//     cout<<sum(a,b)<<endl;
//     cout<<Mul(a,b)<<endl;
//       cout<<Mul()<<endl;//6
    
//     cout<<sum(c,d)<<endl;
//     cout<<Mul(c,d);
    
//    cout<<endl;
    //cout<<fun();  error bcz you dont spesify any return type in function means your fonction retun no value/void
    // fun();
    // cout<<endl;
    // Mod(a,b);
}
// enter the num a and b - c - d: 2 4 7 2
// 6
// 9


//note: if you use cin two times one by one then compilor read last cin only and give output
//enter the num a and b - c - d: 1 2 3 4
// 4 6  (a,b)
// 10


// enter the num a and b - c - d: 5 4 3 2
// 9
// 20
// 5
// 6


// enter the num a and b - c - d: 5 6 7 8
// 11
// 30
// 15
// 56
// Hello Goutam Gurjar
// 5


