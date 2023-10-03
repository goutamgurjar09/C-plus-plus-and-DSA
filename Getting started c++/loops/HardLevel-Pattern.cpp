#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"enter the num: ";
 cin>>n;

//1. print
// enter the num: 5
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * *
// for(int row=1; row<=n; row++){
//     for(int s=1; s<=n-row; s++){
//         cout<<"  ";
//     }
//     for(int col=1; col<=2*row-1; col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }

//2.
//         1         
//       1 2 3       
//     1 2 3 4 5     
//   1 2 3 4 5 6 7   
// 1 2 3 4 5 6 7 8 9 
// for(int row=1; row<=n; row++){
//     for(int s=1; s<=n-row; s++){
//         cout<<"  ";
//     }
//     for(int col=1; col<=2*row-1; col++){
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }



//3.
//         1 
//       3 2 1 
//     5 4 3 2 1 
//   7 6 5 4 3 2 1 
// 9 8 7 6 5 4 3 2 1 
// for(int row=1; row<=n; row++){
//     for(int s=1; s<=n-row; s++){
//         cout<<"  ";
//     }
//     for(int col=2*row-1; col>=1; col--){
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }

//4.
//         1 
//       2 2 2
//     3 3 3 3 3
//   4 4 4 4 4 4 4
// 5 5 5 5 5 5 5 5 5
//approach-1
// for(int row=1; row<=n; row++){
//     for(int s=1; s<=n-row; s++){
//         cout<<"  ";
//     }
//     for(int col=1; col<=2*row-1; col++){
//         cout<<row<<" ";
//     }
//     cout<<endl;
// }
//approach-2
// for(int row=1; row<=n; row++){
//     for(int s=1; s<=n-row; s++){
//         cout<<"  ";
//     }
//     for(int col=2*row-1; col>=1; col--){
//         cout<<row<<" ";
//     }
//     cout<<endl;
// }


//3.
//         1 
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
// for(int row=1; row<=n; row++){
//     for(int s=1; s<=n-row; s++){
//         cout<<"  ";
//     }
//     for(int col=1; col<=row; col++){
//         cout<<col<<" ";
//     }
//     for(int col=row-1; col>=1; col--){
//         cout<<col<<" ";
//     }
    //this loop is used to print this part
    //row-1 se isliye run kr rhe bcz jo bi row number hai usse ek km krke 1 tk print krna hai
//  1
//  2 1
//  3 2 1
//  4 3 2 1
//    cout<<endl;
//}
//note
//first print col=1 to col<=row tk this part
//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5
//then print row-1 means jo bi row number hai usme se ek km krke 1 tk hme col print krna hai
//  1
//  2 1
//  3 2 1
//  4 3 2 1
//overall first hme according to  second row   1 2 then 1 
//third row me 1 2 3 then 2 1
//fourth row me 1 2 3 4 then 3 2 1 and so on....


//5.
// enter the num: 5
//   * * * * * * * * * 
//     * * * * * * *
//       * * * * *
//         * * *
//           *
// for(int row=n; row>=1; row--){
//     for(int s=0; s<=n-row; s++){//s=0/1
//         cout<<"  ";
//     }
//     for(int col=1; col<=2*row-1; col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }


//6.print
// * * * * * * * * * * 
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * * 

//part-1
// * * * * * * * * * * 
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
// for(int row=n; row>=1; row--){
//     for(int col=1; col<=row; col++){
//         cout<<"*"<<" ";
//     }
//     for(int s=1; s<=2*n-2*row; s++){//s=0/1
//         cout<<"  ";
//     }
//     for(int col=1; col<=row; col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }
//part-2
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * * 
// for(int row=1; row<=n; row++){
//     for(int col=1; col<=row; col++){
//         cout<<"*"<<" ";
//     }
//     for(int s=1; s<=2*n-2*row; s++){//s=0/1
//         cout<<"  ";
//     }
//     for(int col=1; col<=row; col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }


//7.
// enter the num: 5
// *                 * 
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *
//1st                 *
// for(int row=1; row<=n; row++){
//     for(int col=1; col<=row; col++){
//         cout<<"*"<<" ";
//     }
//     for(int s=1; s<=2*n-2*row; s++){//s=0/1
//         cout<<"  ";
//     }
//     for(int col=1; col<=row; col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }
//2nd
// for(int row=n; row>=1; row--){
//     for(int col=1; col<=row; col++){
//         cout<<"*"<<" ";
//     }
//     for(int s=1; s<=2*n-2*row; s++){//s=0/1
//         cout<<"  ";
//     }
//     for(int col=1; col<=row; col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }


//8.print
//         * 
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
//1st
// for(int row=1; row<=n; row++){
//     for(int s=1; s<=n-row; s++){
//         cout<<"  ";
//     }
//     for(int col=1; col<=2*row-1; col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }
//2nd
// for(int row=n; row>=1; row--){
//     for(int s=1; s<=n-row; s++){
//         cout<<"  ";
//     }
//     for(int col=1; col<=2*row-1; col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }









}
 