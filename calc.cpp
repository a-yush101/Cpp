#include <iostream>
using namespace std;

int main(){
    float x,y,res;
    char op;
    cout<<"Enter First number: ";
    cin>>x;
    cout<<"Enter Second number: ";
    cin>>y;
    cout<<"Enter the operator[+,-,/,*,%]: ";
    cin>>op;
    switch(op){
        case '+': res = x+y;
        break;
        case '-': res = x-y;
        break;
        case '/': res = x/y;
        break;
        case '*': res = x*y;
        break;
        case '%': res = (int)x % (int)y;
        break;
        default:cout<<"Enter a valid operator";
    }
    cout<<"Result: "<<res;

}