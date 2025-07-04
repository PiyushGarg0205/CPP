#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int original_n = n;
    int new_n=0;
    while(original_n>0){
        int rem = original_n%10;
        new_n= new_n*10+rem;
        original_n=original_n/10;
    }
    if(new_n==n){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
}