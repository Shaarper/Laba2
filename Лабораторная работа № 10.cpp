#include <iostream>
#include <string>

using namespace std;


const int N = 5;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Введите значения строк: " << endl;
    string* strmas = new string[N];
    for (int i = 0; i < N; i++)
        cin >> strmas[i];

    int num;
    cout << "Введите номер строки:" << endl;
    cin >> num;
    num--;
    for (; num < N - 1; num++)
        strmas[num] = strmas[num + 1];

    for (int i = 0; i < N - 1; i++)
        cout << strmas[i] << endl;

    delete[] strmas;

}