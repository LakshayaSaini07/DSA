#include <iostream>
using namespace std;


// int prod(int a,int b){
//     return a*b;
// }

// bool isEven(int n){
//     if(n%2 == 0){
//         return true;
//     }else{
//         return false;
//     }
// }

// int fact(int num){
//     int f = 1;
//     for(int i = 1 ; i<= num ; i++){
//         f = f*i;
//     }
//     return f;
// }

// int binaryCoefficient(int n , int r){
//     int var1 = fact(n);
//     int var2 = fact(r);
//     int var3 = fact(n-r);

//     int ans = var1 / (var2* var3);
//     return ans;
// }

bool prime(int n ){
    if(n == 1){
        return false;
    }
    for(int i = 2 ; i*i <= n ;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void allPrimes(int n){
   for (int i = 2 ; i<=n ; i++){
    if (prime(i) == true){
        cout << i << " ";
    }
   }

}




int main(){
    // int a ,b;
    // cin >> a ;
    // cin >> b;
    // int p = prod(a,b);
    
    // cout << "Product : " << p << endl;

    // int n ;
    // cin >> n ; 
    // bool ans = isEven(n);
    // cout << ans;
    
    // int num;
    // cin >> num;
    // int factorial = fact(num);
    // cout << factorial ;

    // int n;
    // cin >> n;
    // bool ans = prime(n);
    // cout << ans;


    // int n , r ;
    // cout << "Enter n : " ;
    // cin >> n ;
    // cout << "Enter r : " ;
    // cin >> r ; 
    // int result = binaryCoefficient(n ,r);
    // cout << result ; 

    int n ; 
    cin >> n ;
    allPrimes(n);
    return 0;
}