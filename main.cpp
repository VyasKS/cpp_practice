// main.cpp : this file contains 'main'function. Program execution begins and ends there.
#include <iostream>
#include <string>

int main() {
    std::cout << "Type your name" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello " << name << '\n';
    return 0;
}