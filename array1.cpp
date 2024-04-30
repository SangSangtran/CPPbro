#include <iostream>

using namespace std;

int main() {
    int i, j;

    int ma_tran[4][3];
    cout << "Nhap mang: \n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Nhap a[" << i << "][" << j << "] = ";
            cin >> ma_tran[i][j];
        }
        printf("\n");
    }

    cout << "Ket qua: \n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ma_tran[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}