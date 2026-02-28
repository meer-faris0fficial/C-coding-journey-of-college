#include <iostream> 
using namespace std;

int main()
{
    // int num = 0;
    // std::cout << "Enter the range of the number from the 1 to calculate the sum of the odd numbers\n";
    // std::cout << "Enter a number (1-....) : ";
    // std::cin >> num;

    // int sum = num / 2;
    // sum = sum * sum;

    int num{50.6};
    int sum = num / 2;
    sum = sum * sum;

    std::cout << "The sum of the odd number till " << num << " is : " << sum;


    return 0;
}
