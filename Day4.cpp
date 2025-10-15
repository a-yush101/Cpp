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
};

int main(){
    Dog dog;
    dog.setAge(10);
    dog.setName("Snoofy");
    dog.bark();
    cout<<"Dog's age: "<<dog.getAge()<<endl<<"Dog's Name: "<<dog.getName();
}