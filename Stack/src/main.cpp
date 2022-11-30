#include<iostream>
#include<string>
#include"stack.hpp"


int main(){
    stack<int> number;
    number.push(34);
    number.push(99); 
    number.push(66); 
    number.push(44); 
    number.pop();
    number.pop();
    number.top();
    number.top();
    number.top();
    std::cout<<number.size()<<std::endl;
    number.top();
    number.top();
    std::cout<<number.empty()<<std::endl;

    stack <std::string> names;
    names.push("Vaxinak");
    names.push("Leonid");
    return 0;
}