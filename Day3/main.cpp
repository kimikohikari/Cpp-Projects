#include <iostream>
#include <string>

void greetUser(){
    std::cout << "Hello from function!" << std::endl;
}
int add(int a, int b){
    return a + b;
}
int getMax(int num1, int num2){
    return std::max(num1, num2);
}
void swapNumbers(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}
void print ( int value ){
    std::cout << "Printing integer: " << value << std::endl;
}
void print ( double value ){
    std::cout << "Printing double: " << value << std::endl;
}
void print ( std::string value ){
    std::cout << "Printing string: " << value << std::endl;
}
int main(){
    greetUser();
    int result = add(14, 5);
    std::cout << result << std::endl;
    int maxNum = getMax(15, 100);
    std::cout << maxNum << std::endl;
    int num1 = 15;
    int num2 = 120;
    std::cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << std::endl; 
    swapNumbers(num1, num2); 
    std::cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;  
    int k = 14; 
    print(k);
    double p = 3.14;
    print(p);
    std::string tiny = "Rakom Sakom!";
    print(tiny);
    return 0;
}
