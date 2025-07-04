#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter marks: ";
    cin >> n;
    if(n>=90 && n<=100){
        cout << "Grade A" << endl;
    }
    else if(n>=80 && n<90){
        cout << "Grade B" << endl;
    }
    else if(n>=70 && n<80){
        cout << "Grade C" << endl;
    }
    else if(n<70){
        cout << "Fail" << endl;
    }
    else{
        cout << "Invalid marks" << endl;
    }
    return 0;
}