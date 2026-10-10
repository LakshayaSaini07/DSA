#include <iostream>
#include <vector>
using namespace std;

void func(){
    cout << "function call ..... function work" << endl ;
    func();
}

int fact(int n){
    if(n==0) return 1;
    return n * fact(n-1);
}

void decreasing(int n){
    if(n == 0){
        return ;
    }
    cout << n << endl;
    decreasing(n-1);

}

int sum(int n){
    if(n == 1){
        return 1;
    }

    return (n + sum(n-1));
}

int fib(int n){
    if(n == 0  || n == 1) return n ;

    return fib(n-1) + fib(n-2);
}

bool sorted(int *arr, int n , int i){
    if(i == n-1){
        return true;
    }
   
    if(arr[i] > arr[i+1]){
        return false;
    }
    
    return sorted(arr , n , i+1);
}

int firstOcc(vector <int> arr ,   int target , int i){

    if( i == arr.size() ){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }

    return firstOcc(arr , target , i+1);
}

int LastOcc(vector <int> arr ,   int target , int i){
    if( i < 0){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }

    return LastOcc(arr , target , i-1);
}

int powerN(int x , int n){
    if(n == 0){
        return 1 ;
    }
    return x * powerN(x , n-1);
}

int pow(int x , int n){
    if( n == 0){
        return 1;
    }

    int halfpow = pow(x , n/2);
    int halfPowSquare = halfpow * halfpow;

    if(n%2 != 0){
        return x * halfPowSquare;
    }

    return halfPowSquare;
}


int main(){

    int n ;
    cin >> n ;

    int x ;
    cin >> x ;

   


    // int factorial =  fact(n);
    // cout << "Factorial = " << factorial << endl;

    // decreasing(n);

    // cout << sum(n);

    // cout << fib(n);

    // vector <int> arr ={1,2,3,3,3,4};


    // cout << sorted(arr , 5 , 0);

    // cout << firstOcc(arr , 3 , 0) << endl;
    // cout << LastOcc(arr , 3 , 5) << endl;

     cout << powerN(x , n);

    return 0;
}