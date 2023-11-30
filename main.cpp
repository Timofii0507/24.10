#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть число: ";
    cin >> n;
    int arr[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (j == 0) {
                arr[i][j] = n;
            }
            else {
                arr[i][j] = arr[i][j - 1] * 2;
            }
        }
    }
    cout << "Створений масив:" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
