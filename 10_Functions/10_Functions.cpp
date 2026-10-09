#include <iostream>
using namespace std;


int getAbsoluteDays(int dd, int mm, int yy) {
    int total_days = dd;

    for (int y = 1; y < yy; y++) {
        if ((yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0)) {
            total_days += 366;
        }
        else {
            total_days += 365;
        }
    }
    int month_days = 0;
    switch (mm) {
    case 1:  month_days = 0; break;
    case 2:  month_days = 31; break;
    case 3:  month_days = 31 + 28; break;
    case 4:  month_days = 31 + 28 + 31; break;
    case 5:  month_days = 31 + 28 + 31 + 30; break;
    case 6:  month_days = 31 + 28 + 31 + 30 + 31; break;
    case 7:  month_days = 31 + 28 + 31 + 30 + 31 + 30; break;
    case 8:  month_days = 31 + 28 + 31 + 30 + 31 + 30 + 31; break;
    case 9:  month_days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31; break;
    case 10: month_days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30; break;
    case 11: month_days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
    case 12: month_days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; break;
    }

    total_days += month_days;
    if (mm > 2 && (yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0)) {
        total_days += 1;
    }

    return total_days;
}

// zav 1

void DateComparison(int dd, int mm, int yy, int dd2, int mm2, int yy2) {
    int total1 = getAbsoluteDays(dd, mm, yy);
    int total2 = getAbsoluteDays(dd2, mm2, yy2);

    int tot = total1 - total2;

    cout << "Date 1: " << dd << "/" << mm << "/" << yy << endl;
    cout << "Date 2: " << dd2 << "/" << mm2 << "/" << yy2 << endl;
    cout << "Date comparison in days: " << tot << endl;
}

// zav 2

float Average(int arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

// zav 3

void countElements(int arr[], int size) {
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    cout << "Zeros: " << zero << endl;
}

int main() {
    int days, months, years;
    int days2, months2, years2;

    cout << " DATE 1" << endl;
    cout << "1 | DD: "; cin >> days;
    cout << "1 | MM: "; cin >> months;
    cout << "1 | YY: "; cin >> years;

    cout << " DATE 2" << endl;
    cout << "2 | DD: "; cin >> days2;
    cout << "2 | MM: "; cin >> months2;
    cout << "2 | YY: "; cin >> years2;

    DateComparison(days, months, years, days2, months2, years2);

    int arr[5] = { 10, -5, 0, 3, -1 };
    int size = 5;

    cout << "\nAverage: " << Average(arr, size) << endl;
    countElements(arr, size);

    return 0;
}