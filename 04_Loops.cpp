#include <iostream>
using namespace std ;
#include <cmath>

int main(){
    // int i ,j ;

    // for(i = 1 ; i <=4 ; i++ ){
    //     for (j=1 ; j<=4 ; j++){
    //         cout << "*" << "";
    //     }
    //     cout << endl;
    // }


    // int n ;
    // cout << "Enter the number : " ;
    // cin >> n ;
    
    // for (n ; n>=1 ; n--){
    //     cout << n << " " ;
    // }


    // int n = 10829 , sum = 0 ,lastdigit = 0;
    // while (n>0){
    //     lastdigit = n%10;
    //     sum += lastdigit;
    //     n = n/10;
    // }
    // cout << sum;


    // int num ;
    // cin >> num ;
    // int sum = 0;
    // while(num>0){
    //     int digit = num%10;
    //     if(digit%2 != 0){
    //         sum = sum + digit;   
    //     }
    //     num = num/10;
    // }
    // cout << sum ;


    // int n = 10829 ,lastdigit;
    // while(n>0){
    //     lastdigit = n%10;
    //     cout << lastdigit << "";
    //     n = n/10;
    // }


    // int n = 10829 ,lastdigit , num = 0;
    // while(n>0){
    //     lastdigit = n%10;
    //     num = num*10 +lastdigit;
    //     cout << lastdigit << "";
    //     n = n/10;
    // }


    // int num ;

    // do{
    //     cin >> num;
    //     if (num%10 == 0){
    //         break ;//continue
    //     }
    // }while(true);


    // int n ;
    // cin >> n;

    // bool isPrime = true;
    // for (int i = 2 ; i <= (n/2) ; i++){
    //     if(n%i == 0){
    //         isPrime = false;
    //         cout <<"Number is not Prime";
    //         break;
    //     }
    // }
    // if(isPrime){
    //     cout << "Number is Prime";
    // }

    // Optimized Version
    int n ;
    cin >> n;

    bool isPrime = true;
    for (int i = 2 ; i <= sqrt(n) ; i++){
        if(n%i == 0){
            isPrime = false;
            cout <<"Number is not Prime";
            break;
        }
    }
    if(isPrime){
        cout << "Number is Prime";
    }
    return 0;
}