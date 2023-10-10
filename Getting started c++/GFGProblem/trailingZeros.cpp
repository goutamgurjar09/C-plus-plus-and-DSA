#include<bits/stdc++.h>
using namespace std;

int trailingZero(int n){
    int count = 0;
    while(n >= 5){  //n ki value n>=5  tbi to usme 5 aayega and hme zero pta chlega and hm n=1/2/3/4 ke liye isliye nhi chek kr rhe bcz unke factorial me zero nhi aata
        count += n / 5; 
        n /= 5;
    }
    return count;
}

int main(){
    int num;
    cout<<"enter the num: ";
    cin>>num;

    cout<<trailingZero(num)<<endl;
}
//5!->120 ->1
//means 10! ke last me 2 zero aati hai
// enter the num: 10 
// 2


//breakdown this q.
//ydi aap kise ka fact. nikalte ho to lets say 5!->120
//1 * 2 * 3 *  4    * 5
//         |
//1 * 2 * 3 * 2^2   * 5

//--------------
//6!->720
//1 * 2 * 3 *  4    * 5 *  6
//             |           |
//1 * 2 * 3 * 2^2   * 5 * 3*2
//and isko me ese likh skta hu
//2^4 * 3^2 * 5 => 6!    //5 * 2 =>10

//and mujhe ky dekhna 0 last me kitni baar aaya or 0 last me kb aayega jb last me 5 hoga   1*2*3*4*5-> ab me 5 * 2 =>10

//mujhe bs ye pta krna hai ki me jiska bi factorial nikalu usme 5 kitni baar aa rha hai or ydi mujhe pta chl gya to me bta skta hu ki last me  0 kitni baar aa rha 
//and one thing always remember that 2 ki power hmesa 5 ki power se jyada hogi
//ex- 2^4 * 3^2 * 5^1 => 6!=>720

//1*2*2*4* 5........10.....15........20......25.....30....35... 50and so on....
//        5*1       5*2    5*3       5*4     5*5    5*6   5*7  5*5*2
//as we know that 5 pr mujhe 1  5milega  ,10 pr mujhe 2 and 15 pr 3 and---so on

//ab mera ans 5 jitni baar aayega bhi hoga and me tb tk loop chlauga jb tk n ki value 5 se bdi ho 

//25!  me ->  5 baar-> 5,  1 se 25 tk aata hai->    ab isme two 5 ko multiply krne pr 25 aata hai -> 5*5 aate hai

//so ans wiil be 
//25/5 = 5-> and now this  5/5 = 1 jo ki <5 hai = total 5 + 1 = 6 zero aayege 25! me

//means mujhe tb tk devide kruga jb tk ans/num < 5 na ho jay

