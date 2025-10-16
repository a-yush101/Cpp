#include <iostream>
using namespace std;

struct Man{             //We cant use methods in structs
    int age;
    string name;
};
class Dog{
    private:
        int age;
        string name;
    public:
        void bark(){
            cout<<"Barks"<<endl;
        }
        void setAge(int age){
            this->age = age;
        }
        void setName(string name){
            this->name = name;
        }
        int getAge(){
            return age;
        }
        string getName(){
            return name;
        }
        friend class Human;
        friend void printVars(const Dog& dog);
};
void printVars(const Dog& dog){
    cout<<dog.age<<" "<<dog.name;
}

class Human{
    public:
        void print(const Dog& dog){
            cout<<dog.age<<" "<<dog.name;
        }
};

class Counter{
    public:
        static int count;//declaration
        void inc(){
            count++;
        }
};
int Counter::count = 0;//definition and initialization

int main(){
    Dog dog;
    dog.setAge(10);
    dog.setName("Snoofy");
    dog.bark();
    cout<<"Dog's age: "<<dog.getAge()<<endl<<"Dog's Name: "<<dog.getName();

    Counter c1;
    c1.inc();
    cout<<c1.count;
    c1.inc();
    cout<<c1.count;
    Counter c2;
    c2.inc();
    cout<<c2.count;
}