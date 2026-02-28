#include <iostream>
using namespace std;

int main()
{
    int num1{};
    float num2{};
    std::cout << "Enter a number of the int data type : ";
    std::cin >> num1;
    std::cout << "Enter a number of the double data type : ";
    std::cin >> num2;

    std::cout << "The sum of the two numbers " << num1 << " + " << num2 << 
                " is : " << num1 + num2 << std::endl;

    std::cout << "The subtraction of the two numbers " << num1 << " - " << num2 << 
                " is : " << num1 - num2 << std::endl;

    std::cout << "The multiplication of the two numbers " << num1 << " x " << num2 << 
                " is : " << num1 * num2 << std::endl;

    std::cout << "The division of the two numbers " << num1 << " / " << num2 << 
                " is : " << num1 / num2 << std::endl;

    std::cout << "The division of the two numbers " << num1 << " % " << num2 << 
                " is : " <<  num1 % (int)num2 << std::endl;
    
    return 0;
}
