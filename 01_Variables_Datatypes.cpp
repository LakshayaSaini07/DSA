#include <iostream>
using namespace std ;

int main(){
    // float a ,area;
    // cout << "Input the side of square  " << endl;
    // cin >> a;

    // area = a*a;
    // cout << "Area of square is : " << area << endl;





    float a , b ,c ,cost;
    cout << "Enter the cost of Pencil\n";
    cin >> a ;

    cout << "Enter the cost of Pen\n";
    cin >> b ;

    cout << "Enter the cost of eraser\n";
    cin >> c ;

    cost = a+b+c;
    cost = cost*(1.18);
    cout << "Total Cost = " << cost << endl;








    // float p , r, t ,si;
    // cout << "Enter the principal\n";
    // cin >> p ;

    // cout << "Enter the rate\n";
    // cin >> r ;

    // cout << "Enter the time(in years)\n";
    // cin >> t ;

    // si = (p*r*t)/100;
    // cout << "Simple interest = "<< si << endl;





    float r ,area;
    
    cout << "Input the radius of circle  " << endl;
    cin >> r;

    area = 3.14*r*r;
    cout << "Area of circle is  : " << area << endl;
    return 0;
}