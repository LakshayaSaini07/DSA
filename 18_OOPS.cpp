#include <iostream>
#include <string>
using namespace std;



class Animal {
    public:
        string color;

        void eat(){
            cout << "eats " << endl;
        }

        void breathe(){
            cout << "breathes" << endl;
        }
};

class Mammal: public Animal{
    public:
        string blood = "warm";
};

class Dog : public Mammal {
    public:
        void bark(){
            cout << "Barks";
        }
};

class Fish : public Animal {
    public:
        int fins;

        void swim(){
            cout << "swims" << endl;
        }

};

class User{
    int id ;
    string password;

    public:
        string username;

        User(int id){
            this -> id = id;
            cout << "Constructor is Initialized"  << endl;
        }

        void setPassWord(string password){
            this -> password = password ; 
        }

        string getPassWord(){
            return password ;
        }

        
};

class Student {
    // Properties
    string name;
    float cgpa;

    public:
        // Methods
        void getPercentage(){
            cout << cgpa * 9.5 << endl ;
        }

        // Setters
        void SetName(string nameVal){
            name = nameVal;
        }

        void SetCgpa(float cgpaVal){
            cgpa = cgpaVal;
        }


        // Getters
        string getName(){
            return name;
        }

        float getCgpa(){
            return cgpa;
        }

};


class Car{
    string name ;
    string color ;
    int *mileage; // dynamic allocation

    public :
        Car(string name , string color){
            cout << "Constructor is called , Object is being created....\n";
            this -> name = name;
            this -> color = color;
            mileage = new int;
            *mileage = 12;
        }

        void start(){
            cout << "Car has started......" ; 
        }

        void stop(){
            cout << "Car has stopped...." ;
        }

        //Getter
        string getName(){
            return name;
        }

};

class Boats{
    public :
        string name ;
        string color ;
        int *mileage; 

        Boats(string name , string color){
            this -> name = name ;
            this -> color = color ;
            mileage = new int ;
            *mileage = 12;
        }

        Boats(Boats &orignal){
            cout << "Copying orignal to new.. \n" ;
            name = orignal.name;
            color = orignal.color;
            mileage = orignal.mileage;
        }
        ~Boats(){
            cout << "Deleting object." << endl ;
        }
};

int main(){
    // Student s1;
    // cout << sizeof(s1) << endl;


    // s1.SetName("Lakshaya");
    // s1.SetCgpa(6.85);

    // cout << s1.getName() << endl;
    // cout << s1.getCgpa() << endl;


    // Car c1("wagonR" , "white");
    // cout << c1.getName() << endl;


    // User u1(67);
    // u1.setPassWord("ABCDEFGH");
    // cout << u1.getPassWord() << endl;


    // Boats b1("titanic" , "white") ;
    // Boats b2(b1);

    // cout << b1.name << endl;
    // cout << b2.name << endl;
    // cout << *b1.mileage << endl;

    // * b2.mileage = 10;

    // cout << *b1.mileage << endl;


    // Fish f1 ;
    // f1.fins = 3 ;
    // cout << f1.fins << endl;
    // f1.swim();
    // f1.eat();
    // f1.breathe();

    // Dog d1;
    // d1.breathe();
    // cout << d1.blood ;
    // d1.bark();

    

    return 0;
}