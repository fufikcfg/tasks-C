#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int numbers[3];
    cout << "Enter any three random numbers:\n";
    for (size_t i = 0; i <= 2; i++)
    {
        cin >> numbers[i];
    }
    if (numbers[0] > numbers[1]) {
        cout << "Самое большое число - " << numbers[0];
    }
    else if (numbers[1] > numbers[2]) {
        cout << "Самое большое число - " << numbers[1];
    }
    else if (numbers[2] > numbers[0]) {
        cout << "Самое большое число - " << numbers[2];
    }
    else {
        cout << "Числа одинаковые";
    }
    return 0;
}
