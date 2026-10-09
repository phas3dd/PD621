#include <iostream>
using namespace std;

int main() {

    // zav 1

    const int size = 10;
    int product = 1;

    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr1[i];
    }
    cout << endl;
    cout << "Massive: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < size; i++)
    {
        product *= arr1[i];
    }
    cout << endl;
    cout << "Product: " << product << " ";
    cout << endl;
    cout << endl;
    cout << endl;

    // zav 2

    const int size2 = 7;
    int arr2[size2] = { -10, 25, -3, 50, 3, -12, 18 };
    int count_negative = 0;
    int count_positive = 0;

    for (int k = 0; k < size2; k++)
    {
        if (arr2[k] < 0) {
            count_negative++;
        }
    }
    for (int k = 0; k < size2; k++)
    {
        if (arr2[k] > 0) {
            count_positive++;
        }
    }
    cout << "Massive: ";
    for (int k = 0; k < size2; k++)
    {
        cout << arr2[k] << " ";
    }
    cout << endl;
    cout << "Negative elements: " << count_negative << endl;
    cout << "Positive elements: " << count_positive << endl;
    cout << endl;
    cout << endl;

    // zav 3

    const int size3 = 7;
    long arr3[size3] = { 12, 5, -8, 14, 3, 0, 9 };
    long sum_even = 0;

    cout << "Massive: ";
    for (int i = 0; i < size3; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size3; i++)
    {
        if (arr3[i] % 2 == 0) {
            sum_even += arr3[i];
        }
    }
    cout << "Summa even: " << sum_even << endl;
    cout << endl;
    cout << endl;

    // zav 4

    const int size4 = 10;
    int arr4[size4];
    int val = 1;

    for (int i = 0; i < size4; i++)
    {
        arr4[i] = val;
        val *= 2;
    }

    cout << "Normal: ";
    for (int i = 0; i < size4; i++)
    {
        cout << arr4[i] << " ";
    }
    cout << endl;

    cout << "Reversed: ";
    for (int i = size4 - 1; i >= 0; i--)
    {
        cout << arr4[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;

    // zav 5

    const int size5 = 8;
    int arr5[size5] = { -5, 12, -3, 0, -18, 7, -1, 9 };

    cout << "Massive: ";
    for (int i = 0; i < size5; i++)
    {
        cout << arr5[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size5; i++)
    {
        if (arr5[i] < 0) {
            arr5[i] = arr5[i] * -1;
        }
    }

    cout << "New massive: ";
    for (int i = 0; i < size5; i++)
    {
        cout << arr5[i] << " ";
    }
    cout << endl;

    return 0;

}