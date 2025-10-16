//Inline function will be stored in code not in stack

#include <iostream>
#include <iomanip>
using namespace std;
int add(int x, int y);
int main(){
    cout<<add(2)<<endl;
    double pi = 3.1415926359;
    cout<<scientific<<pi<<endl;
    cout<<setprecision(2)<<pi<<endl;
}

inline int add(int x, int y = 5){
    return x + y;
}