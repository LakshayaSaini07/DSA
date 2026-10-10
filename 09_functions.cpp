# include <iostream>
#include <cmath>
using namespace std;


// int reverse(int n){
//     int rev = 0;
//     while(n>0){
//         int digit = n%10;
//         rev = rev*10 + digit;
//         n= n/10;
//     }
//     return rev;
// }

// bool palindrome(int num){
//     int revnum = reverse(num);
//     return num == revnum;
// }


// int addition(int n){
//     int digit ;
//     int rev = 0;
//     while(n>0){
//         rev += n%10;
//         n = n/10;
//     }
//     return rev;
// }


// int wholesq(int a , int b){
//     int ans = pow(a , 2)+ pow(b,2) + 2*a*b ;
//     return ans;
// }


// int largest(int a , int b , int c){
//     if(a >b){
//         if(a>c){
//             return a;
//         }else{
//             return c;
//         }
//     }else{
//         if(b>c){
//             return b;
//         }else{
//             return c;
//         }

//     }
// }

char next(char c){
    if(c == 'z'){
        return  'a';
    }else{
        return c + 1;
    }


}
int main(){

    // int num;
    // num = 121;
    // bool ans = palindrome(num);
    // cout << ans;


    // int ans = addition(4321);
    // cout << ans;
    
    
    
    // int ans = wholesq(2 ,3);
    // cout << ans;
    
    // int ans = largest(19 , 11 ,12);
    // cout <<  ans;

    char ans = next('z');
    cout << ans;


    return 0;
}