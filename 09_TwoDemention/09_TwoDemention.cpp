#include <iostream>
using namespace std;

int main() {
    int arr1[3][4] = {
        {1, 0, 5, 0},
        {0, 3, 0, 8},
        {7, 0, 9, 2}
    };

    int zeros = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr1[i][j] == 0) {
                zeros++;
            }
        }
    }
    cout << "Zeros: " << zeros << endl << endl;

    // zav 2
    int n = 4;
    int arr[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "      a" << endl;
    int max_a = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j <= n - 1) {
                cout << "* ";
                if (arr[i][j] > max_a) max_a = arr[i][j];
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Max a: " << max_a << endl << endl;

    cout << "      b" << endl;
    int max_b = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                cout << "* ";
                if (arr[i][j] > max_b) max_b = arr[i][j];
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Max b: " << max_b << endl << endl;

    cout << "      c" << endl;
    int max_c = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i && j <= n - 1 - i) {
                cout << "* ";
                if (arr[i][j] > max_c) max_c = arr[i][j];
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Max c: " << max_c << endl << endl;

    cout << "      d" << endl;
    int max_d = arr[n - 1][n - 1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i && j >= n - 1 - i) {
                cout << "* ";
                if (arr[i][j] > max_d) max_d = arr[i][j];
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Max d: " << max_d << endl << endl;

    cout << "      e" << endl;
    int max_e = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((j >= i && j <= n - 1 - i) || (j <= i && j >= n - 1 - i)) {
                cout << "* ";
                if (arr[i][j] > max_e) max_e = arr[i][j];
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Max e: " << max_e << endl << endl;

    cout << "      f" << endl;
    int max_f = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((j <= i && j <= n - 1 - i) || (j >= i && j >= n - 1 - i)) {
                cout << "* ";
                if (arr[i][j] > max_f) max_f = arr[i][j];
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Max е: " << max_f << endl << endl;

    cout << "      g" << endl;
    int max_g = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i && j <= n - 1 - i) {
                cout << "* ";
                if (arr[i][j] > max_g) max_g = arr[i][j];
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Max ж: " << max_g << endl << endl;

    cout << "      h" << endl;
    int max_h = arr[0][n - 1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i && j >= n - 1 - i) {
                cout << "* ";
                if (arr[i][j] > max_h) max_h = arr[i][j];
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Max з: " << max_h << endl << endl;

    cout << "      i" << endl;
    int max_i = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                cout << "* ";
                if (arr[i][j] > max_i) max_i = arr[i][j];
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Max i: " << max_i << endl << endl;

    cout << "      l" << endl;
    int max_l = arr[n - 1][n - 1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j >= n - 1) {
                cout << "* ";
                if (arr[i][j] > max_l) max_l = arr[i][j];
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "Max l: " << max_l << endl << endl;

    return 0;
}