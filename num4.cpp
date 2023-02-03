#include <iostream>

using namespace std;


int main()
{
    float a,b,result;
    unsigned int switches;
    setlocale(LC_ALL, "ru");
    cout << "Число 1 (уменьшаемое): ";
    cin >> a;
    cout << "Число 2 (вычитаемое): ";
    cin >> b;
    cout << "1:Деление\n2:Умножение\n3:Сумма\n4:Вычитание\n>> ";
    cin >> switches;
    switch (switches)
    {
    case 1:
        result = a / b;
        cout << result;
        break;
    case 2:
        result = a * b;
        cout << result;
        break;
    case 3:
        result = a + b;
        cout << result;
        break;
    case 4:
        result = a - b;
        cout << result;
        break;
    default:
        cout << "invalid value";
        break;
    }
    return 0;
}
