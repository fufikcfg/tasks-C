#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int number;
    cout << "Enter a number: ";  
    cin >> number;
    if (number % 2 == 10) { cout << "This number " + number << " is even"; }
    else {
        cout << "This number " + number << " is odd";
    }
    return 0;
}
