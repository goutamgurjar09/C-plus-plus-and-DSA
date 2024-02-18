// #include<iostream>
// using namespace std;
// int main(){
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


//int count;
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
// int n; 
// cout<<"enter your no :";
// cin>>n;
// int i;
// int c = 0;
   // for(i = 2; i<=n; i+=2){
   //   // if(i % 2 == 0) bcz i am apply i+=2
   //    //cout<<"even num  is "<<i<<endl;
   //   //c++;
   // }
   //cout<<"even num  is "<<c<<endl;

   //using condition
   // for(i = 1; i<=n; i+=1){
   //    if(i % 2 == 0)
   //    cout<<i<<" ";
   // }
   //cout<<i; //11


//----------------------------
//Gcd (greatest common divisor) /HCF of two number

// int a , b;
// cout<<"enter two no :";
// cin>>a>>b;
// int gcd = 1;

// for(int i=1; i<a && i<b; i++){
//    if(a % i == 0 && b % i == 0){
//       gcd = i;
//       cout<<"Gcd factor between both is: "<<gcd<<endl;   //1 2 4  =>means dono me in teeno number ka bhag jata hai

//    }

// }
// cout<<"Gcd of "<<a<<" and "<<b<<" is "<<gcd<<endl;   //highest common divisor (HCF) between both is 4

//}


//-------------------------
//Fibonacci series 1 to n
// #include <iostream>
// using namespace std;
// int main() {
//     int n;

//     // Input from user
//     cout << "Enter the number of terms for Fibonacci series: ";
//     cin >> n;

//     int firstTerm = 0, secondTerm = 1, nextTerm;

//     cout << "Fibonacci Series up to " << n << " terms: ";

//    for(int i=1; i<=n; i++){
//      cout<<firstTerm << " ";
//      nextTerm = firstTerm + secondTerm;
//      firstTerm = secondTerm;
//      secondTerm = nextTerm;
//    }
//     return 0;
// }

//----------------------------------------
// Write code Check if the given string is Palindrome or not

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     char str[100];
//     cout << "Enter the string: ";
//     cin >> str;
//     int length = strlen(str);
//     bool isPalindrome = true;
//     for(int i=0; i<length/2; i++){
//        if(str[i] != str[length-1-i]){
//           isPalindrome = false;
//        }
//        else{
//           isPalindrome = true;
//        }
//     }

//     if(isPalindrome){
//        cout << "The string is a palindrome.";
//     }
//     else{
//        cout << "The string is not a palindrome.";
//     }

// }


//------------------------------------
//using only string
// #include <bits/stdc++.h>
// using namespace std;

// bool isPalindrome(string& str) {
//     int left = 0;
//     int right = str.length()-1;
//     while(left < right){
//       if( tolower(str[left]) != tolower(str[right]) ){
//          return false;
//       }
//       left++;
//       right--;
//     }
//     return true;
// }

// int main() {
//    string str;
//    cout << "Enter the string: ";
//    getline(cin, str);
    
//    if(isPalindrome(str)) {
//       cout << "The string is a palindrome.";
//    }
//    else {
//       cout << "The string is not a palindrome.";
//    }
// }

//------------------------
//if user input numeric vlaue then
// bool isnumeric(string& str){
//     for(int i=0; i<str.length(); i++){
//         if(isdigit(str[i])){
//            return true;                //means digit present
//         }
//     }
//     return false;                   //means no digit
// }
// bool isPalindrome(string& str) {
//     int left = 0;
//     int right = str.length()-1;
//     while(left < right){
//       if( tolower(str[left]) != tolower(str[right]) ){
//          return false;
//       }
//       left++;
//       right--;
//     }
//     return true;
// }

// int main() {
//    string str;
//    cout << "Enter the string: ";
//    getline(cin, str);
   
//    if(isnumeric(str)) {
//       cout << "Only strings are allowed, number are not. Please enter a valid string.";
//    }
//    else if(isPalindrome(str)) {
//       cout << "The string is a palindrome.";
//    }
//    else {
//       cout << "The string is not a palindrome.";
//    }
// }


//-------------------------
//6. Find non-repeating characters in a string.   
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string str;
//     cout<<"Enter the string: ";
//     getline(cin,str);
//     bool foundNonRepeating = false;
//     int freqarr[256] = {0};
//     for(int i=0; i<str.length(); i++){
//         freqarr[str[i]]++;
//     }
//     for(int i=0; i<str.length(); i++){
//         if(freqarr[str[i]] == 1){
//           foundNonRepeating = true;
//             cout<<str[i]<<" ";
//         }
//     }
//     if(!foundNonRepeating){ //false
//         cout<<"-1";
//     }

// // Enter the string: geekforgeeks
// // f o r s 
// }

//-------------------------------------

// C++ program to reverse words in a string 

#include <bits/stdc++.h> 
using namespace std; 

// Function to reverse words 
void reverseWords(string s) 
{	 
	// Temporary vector to store all words 
	vector<string> tmp; 
	string str = ""; 
	for (int i = 0; i < s.length(); i++) 
	{		 
		// Check if we encounter space 
		// push word(str) to vector 
		// and make str NULL 
		if (s[i] == ' ') 
		{ 
			tmp.push_back(str); 
			str = ""; 
		} 

		// Else add character to str to form current word 
		else
			str += s[i]; 
	} 
	
	// Last word remaining,add it to vector 
	tmp.push_back(str); 

	// Now print from last to first in vector 
	for (int i = tmp.size() - 1; i >= 0; i--) 
		cout << tmp[i] << " "; 
	} 

// Driver Code 
int main() 
{ 
	string s = "i like this program very much"; 
	reverseWords(s); 
	return 0; 
}

//output-> much very program this like i


//----------------------------------
//Chack given number is prime or not

// #include <iostream> 
// using namespace std;
// void checkPrime(int N) 
// { 
// 	// initially, flag is set to true or 1 
// 	int flag = 1; 

// 	// loop to iterate through 2 to N/2 
// 	for (int i = 2; i <= N / 2; i++) {  //or we can set i<N

// 		// if N is perfectly divisible by i 
// 		// flag is set to 0 i.e false 
// 		if (N % i == 0) { 
// 			flag = 0; 
// 			break; 
// 		} 
// 	} 

// 	if (flag) { 
//       cout<<"The number is a Prime Number: "<<N;
// 	} 
// 	else { 
//       cout<<"The number is not a Prime Number: "<<N;
// 	} 

// 	return; 
// } 

// // driver code 
// int main() 
// { 
// 	int N = 546; 

// 	checkPrime(N); 

// 	return 0;
// }

//why loop runs i <= N / 2; times->
//Note: In the case of N = 15, the loop checks divisibility by 2, 3, 4, 5, 6, and 7. Since 15 is divisible by 3 and 5, it is not a prime number.

//If the loop runs up to 15/2 = 7, it covers all possible factors of 15.
//Note: By checking up to N/2, you can reduce the number of iterations and improve the performance of the primality check.


//----------------------------------------
// C++ program to check if a number is armstrong or not
// #include <iostream> 
// using namespace std;
// int main() 
// { 
// int n;
// cin>>n;
// int temp = n;
// int sum = 0;
// while(n){
//   int d = n % 10;
//   sum += d * d * d;
//   n /= 10;
// }
// if(temp == sum){
//   cout << n << " is an Armstrong number.";
// }
// else{
//   cout << n << " is not an Armstrong number.";
// }

// }
//------------------------------------
// C++ program to print all the Armstrong numbers between 1 to n 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     cout << "Armstrong numbers between 1 to n  are:" << endl;
//     int n;
//     cin>>n;
//     for (int num = 1; num <= n; ++num) {
//         int temp = num;
//         int count = 0;
//         while(temp){
//            temp /= 10;
//            count++;
//         }
//         // Calculate the sum of cubes of digits
//         temp = num;
//         int sum = 0;

//         while (temp) {
//             int digit = temp % 10;
//             sum += pow(digit,count);
//             temp /= 10;
//         }

//         // Check if the number is Armstrong
//         if (num == sum) {
//             cout << num << " ";
//         }
//     }

//     cout << endl;

//     return 0;
// }


//--------------------------------
//Write a Program to all print  Factors of a Number.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }
//12
//1 2 3 4 6 12 

//-------------------
//Write a Program to  print prime Factors of a Number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=2; i<n; i++){ 
        while(n%i==0){
            cout<<i<<" ";  // Print the current prime factor
            n = n/i;   // Update n by dividing it by the current prime factor i
        }
    }
}

//i=2 bcz i have to print prime factor and prime number starts with 2 
//
