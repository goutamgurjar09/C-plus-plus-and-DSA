
// #include<iostream>
// using namespace std;

// NOTE:isme ydi n=100 hui to hme 100 times function ko likhna pdega jisme bhot time lgega and hmara code bhot bda hoga

// void fun3(int n){
//    cout<<n<<" days left for birthday"<<endl;
   
// }

// void fun2(int n){
//    cout<<n<<" days left for birthday"<<endl;
  
// }

// void fun1(int n){
//    cout<<n<<" days left for birthday"<<endl;
  
// }

// void fun0(int n){
//    cout<<"finally happy birthday"<<endl;
   
// }
// int main(){
//  int n=3;

// fun3(3);
// fun2(2);
// fun1(1);
// fun0(0);

// }
// 3 days left for birthday
// 2 days left for birthday
// 1 days left for birthday
// finally happy birthday


//--------------------

// #include<iostream>
// using namespace std;

// even isme bhi ydi n=100 hui to hme 100 times function ko likhna pdega jisme bhot time lgega and hmara code bhot bda hoga
// void fun0(int n){
//    cout<<"finally happy birthday"<<endl;   
// }
// void fun1(int n){
//    cout<<n<<" days left for birthday"<<endl;
//    fun0(n-1);
// }

// void fun2(int n){
//    cout<<n<<" days left for birthday"<<endl;
//    fun1(n-1);
// }
// //first ye code run hoga then fun2 ko call krega then 1 ko then finally 0 ko and stop ho jayega
// void fun3(int n){
//    cout<<n<<" days left for birthday"<<endl;
//    fun2(n-1);
// }

// int main(){
//  int n=3;

// fun3(3);

// }
// 3 days left for birthday
// 2 days left for birthday
// 1 days left for birthday
// finally happy birthday



//best approach using recursion

//recursion is a function which calls itself again and again untill certain condition  pr na reached ho
//means jb tk condition/base case tk nhi phochega tb tk apne apko call krta rhega 
//base case nhi denge to function baar baar call hoga and statement print krta rhega or memory/stack overflow full kr dega 

// #include<iostream>
// using namespace std;

// void fun(int n){
    //base case
//    if(n == 0){
//     cout<<"happy birthday goutam";
//     return;
//    }
//    cout<<n<<" days left for birthday"<<endl;
//    fun(n-1);
// }
// int main(){
//  int n;
//  cin>>n;

//recursive approach
//fun(n);


//iterative approach

// for(int i=n; i>0; i--){
//   cout<<i<<" days left for birthday"<<endl;
 
// }
// cout<<"happy birthday goutam"<<endl;


//}
// 5
// 5 days left for birthday
// 4 days left for birthday
// 3 days left for birthday
// 2 days left for birthday
// 1 days left for birthday
// happy birthday goutam



