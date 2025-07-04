#include<iostream>
using namespace std;

int main() {
    char x;
    int a, b;
    int c;
    int d=0;
    int result_again=0;
    while (d==0){
        if(result_again==1){
            cout << "Enter another number: ";
            cin >> b;
            cout << "Enter an operator (+,-,*,/): ";
            cin >> x;
        }
        else{
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Enter an operator (+,-,*,/): ";
            cin >> x;
        }
    switch(x){
        case '+':
        c=a+b;
        cout << "Sum: " << c << endl;
        break;
        case '-':
        c=a-b;
        cout << "Difference: " << c << endl;
        break;
        break;
        case '*':
        c=a*b;
        cout << "Multiplication: " << c << endl;
        break;
        case '/':
        if(b!=0){
            c=a/b;
        cout << "Division: " << c << endl;}
        else{
            cout << "Division by zero is not allowed." << endl;
        }
        break;
        default:
        cout << "Invalid operator." << endl;
        break;
    }
    cout << "Do you want to continue the operation with result? (y/n): ";
    char choice;
    cin >> choice;
    if(choice=='y'){
        result_again=1;
        a=c;
    }
    else{
        result_again=0;
        cout << "Do you want to restart the calculator? (y/n): ";
        char restart_choice;
        cin >> restart_choice;
        if(restart_choice=='y'){
            d=0;
        } else {
            d=1; 
            cout << "Exiting calculator." << endl;
        }
    }
}
    return 0;
     


}