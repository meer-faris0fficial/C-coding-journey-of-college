#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Enter a number so that its pyramid can be built : ";
    cin >> num;
    cout << endl;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1  ; k++)
        {
            cout << "X";
        }printf("\n");
    }
    
    return 0;
}
