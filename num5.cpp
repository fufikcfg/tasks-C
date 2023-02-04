#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, n; // a kopeyko n pirojki
    cout << "Цена шоколадки в рубля и копейках: ";
    cin >> b >> a;
    cout << "Количество шоколадок: ";
    cin >> n;
    cout << a * n + b * n / 100 << ' ' << b * n % 100;
    return 0;
}
