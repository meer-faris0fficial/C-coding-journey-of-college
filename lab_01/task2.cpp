#include <iostream>
using namespace std;

int main() {
    int num = 0;
    std::cout << "Welcome to the reverse digit calculator of 4 digit number\n";
    std::cout << "Enter a four digit number : ";
    std::cin >> num;
    std::cout << std::endl;

    int first, second, third, fourth;
    int first_remain, second_remain, third_remain;

    int num_copy = num;

    first = num % 10;
    first_remain = num / 10;
    second = first_remain % 10;
    second_remain = first_remain / 10;
    third = second_remain % 10;
    third_remain = second_remain / 10;
    fourth = third_remain % 10;

    int result = first * 1000 + second * 100 + third * 10 + fourth;

    std::cout << "The reverse of the number " << num_copy <<" is : " << result << std::endl;

    return 0;
}

