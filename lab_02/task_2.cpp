#include <iostream> 
using namespace std;

int main()
{
    int year = 0;
    std::cout << "Welcome to the leap year calculator" << std::endl;
    std::cout << "Enter a year : ";
    std::cin >> year ;
    
    if (year % 4 == 0)
    {
        if (year < 100 || (year % 4 == 0 && year % 100 != 0))
        {
            std::cout << "The year is a leap year" << std::endl;
        }else{
            if (year % 100 == 0 && year % 400 == 0)
            {
                std::cout << "The year is a leap year" << std::endl; 
            }else{
                std::cout << "The year is not a leap year" << std::endl;
            }
        }
    }else{
        std::cout << "The year is not a leap year" << std::endl;
    }
    
    return 0;
}
