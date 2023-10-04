#include<iostream>
using namespace std;
int main(){


//Convert Decimal  To Binary
//Decimal       -    Binary
    // 0        -     0
    // 1        -     1
    // 2        -     10
    // 3        -     11
    // 4        -     100
    // 5        -     101
    // 6        -     110
    // 7        -     111
    // 8        -     1000
    // 9        -     1001
    //10        -     1010  
//using below this method 
//1. 13         
//base->     2 - 13->quosent(bhagfal)/num                -   
        //   2 - 6 - 1->(remainder)
        //   2 - 3 - 0
        //   2 - 1 - 1
        //     - 0 - 1
        // _____________    
        //     1101     ->to get binary form
        // _____________
   

//-------------------
//Convert Decimal  To Decimal->base=10
//1. 143
//base->     10 - 143              -   
        //   10 - 14 - 3->(remainder)
        //   10 -  1 - 4           
        //         0 - 1
        // _____________    
        //     143        -> to get same num 143     
        // _____________


//------------------------

//Note: ydi mmujhe kise bi number/binary form(1101) ko combine means add krna   krna hai to what wiil i have to do?
//Note: ydi kise number ki power 0 hai to uska ans 1 hoga always
//1. a=2 , b=5  isko mujhe combine krke 25 bnana hai

//ans =  a*10 + b => 25
//now i have to make 258 then-> ans = 25*10 + 8 => 258  
//now i have to make 2587 then-> ans = 25*10 + 8 => 258 * 10 + 7 => 2587 

//note - ydi me ise breakdown kro to mujhe is type ka pattern dikh rha hai first me 8 ko 10 ki pawer 0 se then 5 ko 10^1 se and 2 ko 10^2 se multiply krke add kr rha hu
//258
// |
//2*10^2+5*10^1+8*10^0

//---------------------------
//in starting totalans=0 hoga then isme add hokr update hote jayega aage jaise jaise num add honge
//first   8*10^0  = 8 ->num  ->bcz 10^0 = 1
//second +5*10^1  = 50
//third   2*10^2  = 200
// ________________________
//       totalans = 258  
// ________________________
//to ek formula create ho rha yha (totalans = totalans*10 + num) ->num means jo bi new num add ho rha aage
 
 
 //-----------------
//ex- a=6 ,b=9   and you have to make it-> 96

//ans = b*10 + a  => 96

//----------------------
//now i have to reverse it and create number and return ans
//1.  6492  -> 2946-reverse

//first   2*10^3  = 2000 ->num
//second  9*10^2  = 900
//third   4*10^1  = 40
//fourth  6*10^0  = 6  
// ________________________
//            ans = 2946  
// ________________________

//----------------------
//i=0 to n 
//in starting ans=0 hoga
//to ek formula create ho rha yha-> ans=num*10^i+ans
//ex-6492
    //   6*1  +     0     = 6
    //   4*10 +     6     = 46
    //   9*100 +    46    = 946
    //   2*1000 +  946    = 2946->that will be  final ans



//-------------------
//ab ise formula ko me binary me use kr luga
//ans=rem*10^i+ans  //mene yha instead of num remainder kr diya

    //ex-13 -> 1101
    //1. 13         
//base->//   2 - 13->quosent(bhagfal)/num                -   
        //   2 - 6 - 1->(remainder)
        //   2 - 3 - 0
        //   2 - 1 - 1
        //     - 0 - 1
        // _____________    
        //     1101     
        // _____________
    //i=0
    //ans=rem*10^i+ans

    //   1*10^0 +  0     = 1
    //   0*10^1 +  1     = 1
    //   1*10^2 +  1     =101
    //   1*10^3 +  101   =1101->that will be  final output ans

//------------------------

//q.1 wap to print  decimal num  to binary(converted)
//   long long int n;
//     cout << "Enter the decimal number: ";
//     cin >> n;

//     long long int rem, multi = 1, ans = 0;
//     while (n > 0) {
        
//         rem = n & 1; //you  can use bitwise opr &
//        // rem = n % 2;//remainder
       
//        // Quotient
//          n /= 2; 
//         //n = n>>1;
       
//         //ans
//         ans += rem * multi;
        
//         //multi update
//         multi *= 10;
//     }
//     cout << ans;

//-----------------------------
//Note: rem = n & 1 you can use this line instead of  rem = n % 2;
//mujhe remainder nikalna hai to sbse phle jo bi num input donge aap 
//let's assume aapne 13 diya to 13 ko sbse phle compilor binary me convert krega
// //13 & 1 = 1101
//          * 0001 -> 13 & 1
//     // _____________  
//               1 ->  first time rem 1 hoga  and so on.....

//and you can also rightshift opr use this n = n>>1; to get quotient

//this code will not give right output for bignumber input bcz int ki storing power 32bit hai only
//iske liye apko long long use krna pdega



//--------------------------

//2.Convert Binary  To Decimal
//->base=2 (0,1) that's why you have to multiply power of 2
// 101
//  |
//1 *2^2 + 0 *2^1 + 1 *2^0 => 5->ans

//so my formula is ->ans = rem * 2 ^ i + ans


//q.1 wap to print  binary num  to decimal
//   long long int n;
//     cout << "Enter the decimal number: ";
//     cin >> n;

//     long long int rem, multi = 1, ans = 0;
//     while (n > 0) {//while(n)
//        // rem = n % 10;//remainder
       
//        // Quotient num ko divide kr do for updating
//         //n /= 10;

//         //ans
//         ans += rem * multi;
        
//         //multi update
//         multi *= 2;
//     }
//     cout << ans;
//Enter the decimal number: 101
//5


//---------------------

//3. Convert Decimal  To Octal

//q.1 wap to print  decimal   to Octal
//Octal->[0,1,2,3,4,5,6,7] , base=8

//1. 13
//base->     8 - 13              -   
        //   8 - 1 - 5->(remainder)
        //   -   0 - 1           
        //_____________    
       //     15        ->ans   
       // _____________
//now 15 ko decimal me convert kro

// 15
// |
//1 *8^1 + 5 *8^0 => 13->ans and get decimal num input


  long long int n;
    cout << "Enter the decimal number: ";
    cin >> n;

    long long int rem, multi = 1, ans = 0;
    while (n > 0) {//while(n)
        rem = n % 8;//remainder
       
       // Quotient num ko divide kr do for updating
        n /= 8;

        //ans
        ans += rem * multi;
        
        //multi update (multiply by 10 for octal)
        multi *= 10;
    }
    cout << ans;
//Enter the decimal number: 13
//15






















}
