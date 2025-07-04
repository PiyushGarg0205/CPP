#include<iostream>

int main() {
    std::string name;
    std::getline(std::cin, name);
    int age;
    std::cin >>age;
    std::cout << "Hello!";
    std::cout << "Hello, I am " << name << ". Nice to meet you!. " << "My age is " << age << "." << std::endl;
    return 0;
}