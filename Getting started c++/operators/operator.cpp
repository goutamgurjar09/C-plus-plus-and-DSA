#include<iostream>
using namespace std;
int main(){
    //rules
   // {* , / , %}  presesion is >  then {+ , -}
   //both associavity letf to right

   //eg- 2*4/2 
   //first i have to multiply then divide bcz associavity letf to right(* , / , %)

   //eg- 2+4-2-5
   //first i have to addition then subtract bcz associavity letf to right{+ , -}

//types of opr->
   //1.arithmatic opr

   //two types->Unary and Binary opeartor

   //1.//Unary-> means this want only one operand means isme only one operand ka use hota hai
   //eg-  prifix(pre-increament)->++a and suffix(post-increament) ->a++

   //eg-1. a=10;
   //    ++a;  
   //eg-2. b=12;
   //      b++;


//difference between postfix and prefix
//ex- postfix
//    int a = 10;
//    int b = a++;
//    cout<<b<<endl;//10 bcz phle value gyi b me a ki->10 then a increase hua
//    cout<<a;//11

//ex- prefix
//    int a = 10;
//    int b = ++a;
//    cout<<b<<endl;//11 bcz phle value gyi b me a ki 1 se increase hokr then a ki value bhi 11 ho gyi 
//    cout<<a;//11

// //ex- post - decreament
//    int a = 10;
//    int b = a--;
//    cout<<b<<endl;//10 bcz phle value gyi b me a ki->10 then a decrease hua
//    cout<<a;//9


//ex- pre - decreament
//    int a = 10;
//    int b = --a;
//    cout<<b<<endl;//9 bcz phle value gyi b me a ki->9 then a ki new value  print hui
//    cout<<a;//9



//2.Binary -> this want only two operand-> a + b 

//    int a = 10;
//    int b = 12;
//    int sum = a+b;//here a and b two operand
//    cout<<sum<<endl;
   


//--------------
//cout<<13.2/4;//3.3-> bcz iski ek value float type(13.2) ki thi to iska precision jyada tha 

//cout<<13/4;//3-> bcz iski dono value(13/4) int type ki thi  to iska precision km tha 

//cout<<13.4*4;//53.6
//cout<<13*4;//52
// int a=14;
// cout<<a++;//14
// cout<<endl;
// cout<<a;//15


//2.Comparision opr
//{== , >, < , >= , <= , !=}
//{>, < , >= , <=}   >   {== , !=}
//both associavity l to r  but presesion always greater then {== , !=}

//ex- 5>4>3 
//check left to right bcz inki associavity l to r hai
//first check 5>4-> true/1->   then check 1 > 3-> 0/false so return 0

//5>4 yes so return true/1 mila then now i will have to check 1 > 3 -> this is false/0  so return 0

//ex- 5 > 4 < 3 == 2
//first check 5 > 4 yes/1 then check 1 < 3 yes/1   then check 1 == 2-> no/0  so return false/0

//ex- 3 > 4 > 5!= 1-> ans is true/1 
//     0 > 5 != 1 
//     0 != 1->yes/1


//------------------
// int a;
// cout<<"enter value a: ";
// cin>>a;
// int b;
// cout<<"enter value b: ";
// cin>>b;

// int c;
// cout<<"enter value c: ";
// cin>>c;

// if(a==b)
// cout<<"yes";
// else
// cout<<"no";

//<, >, <=, >=, !=
// if(a>b)
// cout<<"yes";
// else
// cout<<"no";


// if(a!=b)
// cout<<"yes";
// else
// cout<<"no";


// if(a>=b)
// cout<<"yes";
// else
// cout<<"no";


//3. Logical opr
//{&& ,|| ,!} and ,or, not

//if(a > b and a > c)//&&/&/and
//if(a > b || a > c)//or
//if(a != b || a != c)
// cout<<"yes";
// else
// cout<<"no";

//--------------------
//not truth table
// 0 -> 1
// 1 -> 0

//int d=24;//false/no bcz not! opr always 1/any number to 0/false
//int e = 0;//yes bcz not! opr always 0 to 1/true 
// if(!e)
// cout<<"yes";
// else
// cout<<"no";

//let's take another ex-
// cout<<!23;//0
// cout<<!0;//1

//---------------------
//1.wap to check given char is vowel /consonent
// char ch = 'f';
// if(ch =='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
// cout<<"vowel";
// else
// cout<<"consonent";


//4. Bitwise opr
//{&,|,^,~,<<,>>}and,or,xor,compliment,leftsift,rightshift
//as we know that bitwise opr perform bit operation on operands->0/1

//ex- 2 & 3 //and
//truth table of or
// 0 0 0
// 0 1 0
// 1 0 0
// 1 1 1
    //   10->2
    //   11->3
    //  _____
    //   10->2->ans

//ex- 2 | 3//or
//truth table of or
// 0 0 0
// 0 1 1
// 1 0 1
// 1 1 1
    //   10->2
    //   11->3
    //  _____
    //   11->3->ans

//ex- 2 ^ 3//xor
//truth table of xor
// 0 0 0
// 0 1 1
// 1 0 1
// 1 1 0
    //   10->2
    //   11->3
    //  _____
    //   01->1->ans

//--------------------
//ex- 6 << 1//leftshift means 1 step left shift kro

    //                32bit.....000000000110->6
    //   shift 1st time.........000000001100->ek ek left shift kiya then last me 0 likha so now 1100 jo ko 12 ki binary representation hai
    //so ans is 12

//ex- 6 << 2 //means 2 times kr do leftshift
      //   ..........000000001100->1st time
      //   .........0000000011000->2nd time so 110000 jo ki 24 ka binary hai
      //so ans is 24
//note: mujhe ek relation dikh rha ki jb bhi me 1 shift krta hu to 12 , 2 shift krta hu to 24
//means  jo ans aaya uska do guna 12*2=24  
//let's see mujhe 3 baar leftshift krna tb 24*2 = 48 
//formula-> 6<<2  -> num(6) * 2^x

//-----------------------
//ex- 6 >> 1 rightshift  //formula-> num(6) / 2^x
//.....000000000110->6
//.....000000000011->3->ans
//....  00000000001 1->ye to bahar ho gya  so ans is 1 means 2 baar shift krne pr ans is 1 


//~ complement
//ex-    ~5  
 //..0000101
 //..1111010  //means hmne iska complement kiya 1 ko 0 and 0 ko 1 bna diya
 //now iska 1's and 2's complement nikalenge means 0 ko 1 and 1 ko 0
//...0000101->1's complement 
//       + 1
//---------------
//...0000110 ->final ans will be -6
//Note: jb bhi hme complement nikalna ho tb jo bhi num diya hai usme +1 krke - me value return krna hai jaise 5 ka -6      


//example
// int ans = 2&3;
// cout << ans;//2

// int ans = 2|3;
// cout << ans;//3


// int ans = 2^3;
// cout << ans;//1


//  int ans = ~-2;
//  cout << ans;//1
// int ans = ~2;
//  cout << ans;//-3


// int ans = 2<<3;
// cout << ans;//16

// int ans = 6>>1;
// cout << ans;//3


//Assignment opr
// int a=20;
// a +=1;
// cout<<a;

// int a=20;
// a *=5;
// cout<<a;

// int a=20;
// a %=3;
// cout<<a;

// int a=20;
// a /=3;
// cout<<a;//6

// int a=20;
// a -=1;
// cout<<a;
}