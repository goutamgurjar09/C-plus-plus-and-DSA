#include<iostream>
using namespace std;
int main(){
   //first-> initialization-  int i=1;
   //second-> condition/breaking point- while(i<=n)
   //third-> statements/task -cout<<"goutam gurjar";
   //fourth-> update/increament/decreament -i++;

// int n;
// cout<<"enter the num: ";
// cin>>n;
//int i=1;
//    while(i<=n){//i<=10
//     //cout<<"goutam gurjar"<<endl;
//     cout<<n<<"*"<<i<<"=>"<<n*i<<endl;//print table of any num
//     i++;
//    }

//2. wap print all factor of given number->10 = 1,2,5,10
// int i=1;
// while(i<=n){
//     cout<<"value of i is: "<<i<<endl;
//     if(n%i == 0){
//      cout<<"factor of num is:-> "<<i<<" "<<endl;
//     }
//     i++;
// }
// enter the num: 10
// 1 2 5 10 
// enter the num: 2
// 1 2

//do-while
//1st initialization
//2nd statements/task
//update/increament/decreament
//condition/breaking point

// int sum = 0;
// int i=1;
// do{
//    sum = sum+i;
//   // cout<<sum;->X
//    cout<<"goutam"<<endl;
//    i++; 
// }while(i<=n);
// cout<<sum;
//enter the num: 10
//55


//exception
// int i=1;
// do{
//    cout<<i;//bhle meri condition false  ho but ye code ek(1) baar to chlega hi chahe me jo bhi input dalu
//    i++; 
// }while(i<=n);
// enter the num: 0
// 1



//----------------------
//1.Break
//note:suppose that aapne ek loop run kiya 1 to n tk ab hme ise rokna hai jb i==5 ho usse phle to hm break keyboards ka use krte hai
// int i=1;
// while(i<=n){
//    if(i==5)
//    break;
// //   if(i==5){
// //    break;
// //   }

//    cout<<i<<endl;//1 2 3 4 
//    i++;
// }
// enter the num: 10
// 1
// 2
// 3
// 4

// int x;
// cout<<"enter the x val: ";
// cin>>x;
// int i=1;
// while(i<=n){
//    if(i==x)
//    break;

//    cout<<i<<" ";//1 2 3......14
//    i++;
// }
// enter the num: 20
// enter the x val: 15
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 


// int i=1;
// while(i<=n){
//    if(i==x){// if(i%4==x)
//       i++;
//       continue;
//    }
//    cout<<i<<" ";//1 2 3 4 6.....ntk
//    i++;
// }
// enter the num: 10
// enter the x val: 5
// 1 2 3 4 6 7 8 9 10 


//SwitchCase Statements like if else if
//1.
// switch (n)
// {
// case 1:
//    /* code */
//    cout<<"goutam";
//    break;
// case 2:
//    /* code */
//    cout<<"ranve";
//    break;
// case 3:
//    /* code */
//    cout<<"rupali";
//    break;

// default:
//    cout<<"gurjar";
//    //break;
// }

//wap to print week days
// switch (n)
// {
// case 1:
//    /* code */
//    cout<<"monday";
//    break;
// case 2:
//    /* code */
//    cout<<"tuesday";
//    break;
// case 3:
//    /* code */
//    cout<<"wednesday";
//    break;
// case 4:
//    /* code */
//    cout<<"thuresday";
//    break;   
// case 5:
//    /* code */
//    cout<<"friday";
//    break;
// case 6:
//    /* code */
//    cout<<"saturday";
//    break;
// case 7:
//    /* code */
//    cout<<"sunday";
//    break;
// default:
//    cout<<"pls input vaild days";
//    //break;
// }
//note if you dont use break then it will print niche ke sare statement ko



//---------------------
//scope of variable

// int name = 10;
// cout<<name;
// int name = 30;
// cout<<name;

//error-> 'int name' previously declared here 
// redeclaration of 'int name'

//-----------------
//error: 'nm' was not declared in this scope    
// cout<<nm;
// int nm = 10;


//-------------
// int i=10;
// int j=20;
// if(i==10){
//    int j = 50;
//    cout<<j;//50 bcz iska scope alg hai 
// }
//-------------
// int i=10;
// int j=20;
// if(i==10){
//    cout<<j;//20 bcz isko yha j nhi mila 
// }


//-------------
// int i=10;
// for(int i=1; i<=10; i++){
//    cout<<i<<" ";
// }
//1 2 3 4 5 6 7 8 9 10 bcz both i is different dono ke block/scope diff. hai
//ydi for loop me i declare nhi hota tb bo upr bale i ke paas jata 

//-------------
// int i=10;
// for(i=3; i<=20; i++){
//    cout<<i<<" ";
// }
//3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 

//-------------
int i=1;
for(; i<=20; i++){
   cout<<i<<" ";
}
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
//you can initialize i var outside of loop


//same block me do same name ke variable exist nhi kr skte

//












}