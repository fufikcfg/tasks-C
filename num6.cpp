#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    int lenght;
    string symbol;
    unsigned int switches;
    cout << "Введите количество символов в линии: ";
    cin >> lenght;
    cout << "Какой будет символ?: ";
    cin >> symbol;
    if (symbol.empty() || symbol.size() >= 1) {
        cout << "symbol empty or symbol size >= 2";
    }
    cout << "Выберите тип линии:\n";
    cout << "1 - вертикальная линия\n2 - горизонтальная линия\n";
    cin >> switches;
    switch (switches)
    {
    case 1:
        for (size_t i = 0; i <= lenght - 1; i++)
        {
            cout << symbol + "\n";
        }
        break;
    case 2:
        for (size_t i = 0; i <= lenght - 1; i++)
        {
            cout << symbol;
        }
        break;
    default:
        cout << "Ошибка. Такой линии нет.";
        break;
    }
}
