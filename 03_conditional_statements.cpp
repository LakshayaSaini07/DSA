#include <iostream>
using namespace std;

int main(){
    // int a ;
    // cout << "Enter any number of your choice :" ;
    // cin  >> a ;
    // if(a == 0){
    //     cout << "Zero";
    // }else if(a <= 0){
    //     cout << "Negative" ;
    // }else{
    //     cout << "Positive" ;
    // }


    // int year ;

    // cout << "Enter any year :" ;
    // cin >> year ;

    // if (year%400 == 0){
    //     cout << "It's a Leap Year" ;
    // }else if (year % 100 == 0) {
    //     cout << "Not a Leap Year" ;
    // }else if( year %4 == 0){
    //     cout << "A leap Year";
    // }else {
    //     cout << "Not a leap year" ;
    // }

    
    int num ;
    cout << "Enter any 3 digit number : " ;
    cin >> num ;

    int n = num ;

    int digi1 = n%10 ;
    n = n/10;

    int digi2 = n%10 ;
    n = n/10;

    int digi3 = n%10;
    n = n/10;

    int cubesum = digi1*digi1*digi1 + digi2*digi2*digi2 + digi3*digi3*digi3 ;

    if(cubesum == num){
        cout << num << "is an armstrong number" ;
    }else{
        cout << "Not an armstrong number" ;
    }

    return 0;
}