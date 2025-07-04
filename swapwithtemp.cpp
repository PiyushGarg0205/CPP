#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter two numbers: (a,b) ";
    cin >> a >> b;  
    int temp = a;
    a=b;
    b=temp;
    cout << "After swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    return 0;
}