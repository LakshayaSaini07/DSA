#include <iostream>
using namespace std;

class Print{
    public:
        void show(int n){
            cout << n << endl;
        }

        void show(string a){
            cout << a << endl;
        }
};

class Parent{
    public:
        void show(){
            cout << "Parent class" ;
        }

        virtual void hello(){
            cout << " Parent hello " ;
        }
};

class Child : public Parent{
    public:
        void show(){
            cout << "child class"<< endl ;
        }

        void hello(){
            cout << "child hello" ;
        }
};


class Complex{
        int real;
        int img;

    public:
        Complex(int r , int i){
            real = r ;
            img = i;
        }

        void showNum(){
            cout << real << "+" << img << "i" << endl;
        }

        Complex operator + (Complex &c2){
            int resReal = this->real + c2.real;
            int resImg = this ->img +c2.img;
            Complex c3(resReal , resImg);
            return c3;
        }
};

class Shape{
    public:
        virtual void draw() = 0;
};

class Circle :public Shape{
    public:
        void draw(){
            cout << "circle" << endl ;
        }
};

class Square :public Shape{
    public:
        void draw(){
            cout << "Sqaure" << endl ;
        }
};


void counter(){
    static int count = 0 ;
    count++;
    cout << "count : " << count << endl;

}

class Example{
public:
    static int x ;
    Example(){
        cout << "Constructor" << endl;
    }

    ~Example(){
        cout << "Destructor" << endl;
    }
};

int Example::x = 0;


class A {
    string secret = "Secret Data" ;
    friend class B;
    friend void revealSecret(A &obj);
};

class B {
    public:
        void showSecret(A &obj){
            cout << obj.secret << endl;
        }
};

void revealSecret(A &obj){
    cout << obj.secret << endl;
}


class BankAccount{
    int accNum ;
    int balance;
    
    public:
        void set(int accNum , int balance){
           this -> accNum = accNum ;
           this -> balance = balance ;
        }

        void get(){
            cout << "accNum = " << accNum << endl;
            cout << "Balance = " << balance << endl;
        }

        void deposit(int deposit){
            balance += deposit;
        }

        void withdraw(int withdraw){
            balance -= withdraw;
        }
};

class Person{
    string name;
    int age;
    friend class Student;

     public:
        void set(string name , int age){
           this -> name = name ;
           this -> age = age ;
        }
};

int main(){

    // Print p1;
    // p1.show(5);
    // p1.show("Hello");


    // Complex c1(1,2);
    // Complex c2(3,4);
    // Complex c3 = c1 + c2;
    
    // c1.showNum();
    // c2.showNum();

    // c3.showNum();

    // Child C1;
    // C1.show();

    // Child child1;
    // Parent *ptr;

    // ptr = &child1;
    // ptr -> hello();

    // Circle C1;
    // C1.draw();
    
    // Square S1;
    // S1.draw();

    // counter();
    // counter();
    // counter();

    // Example eg1;
    // Example eg2;
    // Example eg3;

    // cout << eg1.x++ << endl;
    // cout << eg2.x++ << endl;
    // cout << eg3.x++ << endl;

    // int a = 0;
    // if(a==0) static Example eg1;

    // cout << "code ending" << endl;

    // A a1;
    // B b1;

    // b1.showSecret(a1);
    // revealSecret(a1);


    // BankAccount b1;
    // b1.set(1 , 1000);
    // b1.get();
    // b1.deposit(150);
    // b1.get();
    // b1.withdraw(200);
    // b1.get();
    
    return 0;
}