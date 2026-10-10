#include <iostream>
using namespace std;

int main(){


    // int a , b ;
    // int large ;

    // cout << "Enter the First number : " << endl;
    // cin >> a;

    // cout << "Enter the second number : " << endl;
    // cin >> b;

    // if (a >= b ){
    //     large = a;
    // }else{
    //     large = b;
    // }

    // cout << "Largest of these 2 numbers is : " << large ;


    // int num ;

    // cout << "Enter the number : " ;
    // cin >> num ;

    // if (num %2 == 0){
    //     cout << "Number is EVEN";
    // }else{
    //     cout << "Number is ODD";
    // }
    
    // int income , tax ;
    // cout << "Income :" ;
    // cin >> income ;
    // if (income <= 500000){
    //     tax = 0;
    // }else if (income >=500000 && income <= 1000000){
    //     tax = income * 0.20 ;
    // }
    // else {
    //     tax = income * 0.30;
    // }
    // cout << "Tax is :" << tax ;


    
    // int a , b ,c ;
    // int large ;

    // cout << "Enter the First number : " << endl;
    // cin >> a;

    // cout << "Enter the second number : " << endl;
    // cin >> b;

    // cout << "Enter the third number : " << endl;
    // cin >> c;

    // if (a >= b && a >= c){
    //         large = a;
    // }else if (b>=a){
    //     large = b;
    // }else {
    //     large = c;
    // }


    int a , b , result ,operand;

    cout << "Enter the First number : " << endl;
    cin >> a;
    cout << "Enter the second number : " << endl;
    cin >> b;

    cout << "1 - Add , 2 - Sub , 3 - Multiply , 4 - Divide : " ;
    cin >> operand ;
    switch(operand){
        case 1 :
            result  =  a +b ;  
            break;
        case 2 :
            result  =  a - b ; 
            break;
        case 3 :
            result  =  a * b ;
            break;
        case 4 :
            result  =  a/b ;
            break;
    }
    cout << "result is : " << result ;

    return 0;
}