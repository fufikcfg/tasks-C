#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    unsigned int lenght, height;
    string symbol;
    cout << "Введите высоту прямоугольника: ";
    cin >> height;
    cout << "Введите ширину прямоугольника: ";
    cin >> lenght;
    cout << "Введите любой символ: ";
    cin >> symbol;
    for (size_t i = 0; i <= height; i++)
    {
        for (size_t i = 1; i <= lenght - 1; i++)
        {
            cout << symbol;
        }
        cout << symbol + "\n";
    }
    return 0;
}
