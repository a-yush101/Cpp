#include <iostream>
using namespace std;
void inc(){
    static int x=5;
    x++;
    cout<<x<<endl;
}
int main(){
    inc();
    inc();
    return 0;
}