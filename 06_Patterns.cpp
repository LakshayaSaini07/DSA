#include <iostream>
using namespace std;

int main()
{

    // for (int i = 1 ; i<=4 ;i++){
    //     for(int j = 1 ; j<= i ;j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 4; j >= i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1 ; i <= 5 ; i++){
    //     for (int j = 1 ; j<= i ; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }


    // int n = 4;
    // char ch = 'A';
    // for (int i = 1 ; i<=n ; i++ ){
    //     for (int j = 1 ; j<= i ; j++){
    //         cout << ch++;
    //     }
    //     cout << endl;
    // }

    // int n = 5 ;
    // for (int i = 1 ; i<=n ;i++){
    //     cout << "*" ;

    //     for (int j = 1 ; j<=n-1 ;j++){
    //         if (i == 1 || i == n){
    //             cout << "*"; 
    //         }else{
    //         cout << " ";
    //         }}
    //     cout << "*";
    //     cout << endl;
    // }

    // int n = 5 ;
    // for (int i = 1 ; i<=n ; i++){
    //     for(int j =1 ;j<=n-i ;j++){
    //         cout << " ";
    //     }
    //     for(int j = 1 ; j<= i ;j++ ){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int n = 5;
    // int num = 1;

    // for(int i = 1; i<= n ; i++){
    //     for(int j = 1 ; j<= i ;j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // int n = 10;
    // for (int i = 1 ; i<= n ; i++){
    //     for(int j= 1 ; j <= n-i ; j++){
    //         cout << " ";
    //     }

    //     for(int j = 1 ; j <= 2*i-1 ; j++){
    //         cout << "*";
    //     }
        
    //     cout << endl;
    // }

    // for(int i = n ; i>=1 ;i--){
    //      for(int j= 1 ; j <=n-i ; j++){
    //         cout << " ";
    //     }

    //     for(int j = 1 ; j <= 2*i-1 ; j++){
    //         cout << "*";
    //     }
        
    //     cout << endl;
    // }

    int n = 4;
    for (int i = 1 ; i<= n ;i++){
        for(int j = 1 ; j<=i ; j++){
            cout << "*";
        }

        for (int j = 1 ; j<= 2*(n-i) ; j++){
            cout << " ";
        }

        for(int j = 1 ; j<=i ; j++){
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n ; i>= 1 ;i--){
        for(int j = i ; j>=1 ; j--){
            cout << "*";
        }

        for (int j = 2*(n-i) ; j >= 1 ; j--){
            cout << " ";
        }

        for(int j = i ; j >=1 ; j--){
            cout << "*";
        }

        cout << endl;
    }




    return 0;
}