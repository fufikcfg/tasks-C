#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int randNumOne[3];
    int randNumTwo[3];
    int sumOneAndTwo[3];
    int averageThirdArray = 0;

    for (size_t i = 0; i <= 2; i++)
    {
        randNumOne[i] = rand() % 50 + 10;
        randNumTwo[i] = rand() % 50 + 10;
        sumOneAndTwo[i] = randNumOne[i] + randNumTwo[i];
    }

    cout << "Первый массив:";
    for (size_t i = 0; i <= 2; i++)
    {
        cout << " ";
        cout << randNumOne[i];
    }
    cout << "\n";
    cout << "Второй массив:";
    for (size_t i = 0; i <= 2; i++)
    {
        cout << " ";
        cout << randNumTwo[i];
    }
    cout << "\n";
    cout << "Третий массив:";
    for (size_t i = 0; i <= 2; i++)
    {
        cout << " ";
        cout << sumOneAndTwo[i];
    }
    return 0;
}
