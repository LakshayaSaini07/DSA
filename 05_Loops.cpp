#include <iostream>
using namespace std;
#include <cmath>

int main(){
    // int x ,fact = 1;
    // cin >> x ;
    // if(x == 0){
    //     fact = 1;
    // }else{
    //     for (int i = 1 ; i<=x ;i++){
    //         fact = fact*i;
    // }}
    // cout << fact;

    // int n ;  
    // cin >> n;
    // for(int i = 1 ; i<=10 ; i++){
    //     cout << n <<"*" << i << " = " << n*i << endl;
    // }

    // int N , num ,digit , cube , sum = 0 ;
    // cin >> N;
    // num = N;

    // while (num >0){
    //     digit = num%10;
    //     sum += digit*digit*digit;
    //     num = num/10;
    // }

    // if (sum == N){
    //     cout << "Armstrong number ";
    // }else{
    //     cout << "No";
    // }


    int N ,i , j;
    cin >> N;

    for(int i = 2 ; i <=N ; i++){
        int curr = i;
        bool isPrime = true;
        for (j= 2 ; j*j <= i ; j++){
            if(curr%j == 0){
                isPrime = false;
            }
        }
        if(isPrime){
            cout << curr << " " ;
        }
    }
    cout << endl;

    // int N , num;
    // cin >> N ;
    // int n1 = 0 ,n2 = 1 ;
    // cout << n1 << " " << n2  << " " ;

    // for(int i = 2 ; i<= N ; i++){
    //     int n3 = n1+ n2;
    //     cout << n3 << " " ;
    //     n1 = n2;
    //     n2 = n3;
    // }
    return 0;
}