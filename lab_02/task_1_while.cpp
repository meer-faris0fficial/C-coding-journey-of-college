#include <iostream>
using namespace std;

int main()
{
    int N = 100;
    int i = 0;

    std::cout << std::endl;
    std::cout << "The numbers that are odd till N are : " << endl;
    int totalsum = 0;
    while (i != 100)
    {
        if(i % 2 != 0){
                std::cout << i << " ";
        }
        i++;
    }
    i = 0;

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "The numbers that are odd and are not divided by the 2 3 and 7 are : " << endl;
    while (i != 100)
    {
        if(i % 2 != 0){
            if (i % 3 != 0 && i % 2 != 0 && i % 7 != 0)
            {
                totalsum = totalsum + i;
                std::cout << i << " ";
            }
        }
        i++;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "The numbers whose sum are not exceeding 100 are : " << endl;
    i = 0;
    int sum = 0;
    while (i != 100)
    {
        if(i % 2 != 0){
            if (i % 3 != 0 && i % 2 != 0 && i % 7 != 0 && sum < 100)
            {
                std::cout << i << " ";
                sum = sum + i;
            }
        }
        i++;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    cout << "The sum of the total numbers are : " << totalsum << endl;
    cout << "The sum of the numbers that are not exceeding 100 is : " << sum ;
    
    std::cout << std::endl;
    std::cout << std::endl;
    return 0;
}
