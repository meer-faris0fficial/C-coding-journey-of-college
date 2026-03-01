#include <iostream>
using namespace std;

int main()
{
    int N = 100;
    int i = 0;
    int totalsum = 0;

    std::cout << std::endl;
    std::cout << "The numbers that are odd till N are : " << endl;
    do
    {
        if(i % 2 != 0){
            std::cout << i << " ";            
        }
        i++;
    } while (i != 100);

    std::cout << std::endl;
    std::cout << std::endl;

    i = 0;
    std::cout << "The numbers that are odd and are not divided by the 2 3 and 7 are : " << endl;
    do
    {
        if(i % 2 != 0){
            if (i % 3 != 0 && i % 2 != 0 && i % 7 != 0)
            {
                std::cout << i << " ";
                totalsum += i;
            }
        }
        i++;
    } while (i != 100);
    
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "The numbers whose sum are not exceeding 100 are : " << endl;
    i = 0;
    int sum = 0;
    do
    {
        if(i % 2 != 0){
            if (i % 3 != 0 && i % 2 != 0 && i % 7 != 0 && sum <= 100)
            {
                std::cout << i << " ";
                if (sum + i < 100)
                {
                    sum = sum + i;
                }
            }
        }
        i++;
    } while (i != 100);

    std::cout << std::endl;
    std::cout << std::endl;

    cout << "The sum of the total numbers are : " << totalsum << endl;
    cout << "The sum of the numbers that are not exceeding 100 is : " << sum ;
    
    std::cout << std::endl;
    std::cout << std::endl;
    return 0;
}
