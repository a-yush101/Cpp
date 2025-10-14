#include <iostream>
using namespace std;
// void inc(){
//     static int x=5;
//     x++;
//     cout<<x<<endl;
// }
int main(){
    // inc();
    // inc();
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1; i < n+1; i++){
        cout<<i<<" ";
    }
    return 0;
}