#include <iostream>
using namespace std;

// khai bao prototype ham:
double giaTriTB(int* arr, int size);

int main() {
    // khai bao mang so nguyen arr co 5 phan tu.
    int arr[5] = { 10, 20, 100, 30, 60 };
    double trungbinh;

    // truyen con tro toi mang duoi dang mot tham so.
    trungbinh = giaTriTB(arr, 5);

    // hien thi ket qua 
    cout << "Gia tri trung binh la: " << trungbinh << endl;

    return 0;
}

double giaTriTB(int* arr, int size) {
    int    i, sum = 0;
    double trungbinh;

    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }

    trungbinh = double(sum) / size;

    return trungbinh;
}