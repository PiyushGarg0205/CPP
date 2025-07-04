#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int count=0;
    while(str[count]!='\0'){
        count++;
    }
    string new_str="";
    for(int i=0; i<count;i++){
        new_str+=str[count-i-1];
    }
    if(new_str==str){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }   
    return 0;
}