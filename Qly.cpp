#include "Qly.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Qly::NhapDS() {
    cin >> x >> y >> z;
    A = new khachHangBinhThuong[x];
    B = new khachHangThanThiet[y];
    C = new khachHangDacBiet[z];

    for (int i = 0; i < x; ++i) A[i].Nhap();
    cout << endl;

    for (int i = 0; i < y; ++i) B[i].Nhap();
    cout << endl;

    for (int i = 0; i < z; ++i) C[i].Nhap();
    cout << endl;
}

void Qly::XuatDS() {
    for (int i = 0; i < x; ++i) A[i].Xuat();
    cout << endl;

    for (int i = 0; i < y; ++i) B[i].Xuat();
    cout << endl;

    for (int i = 0; i < z; ++i) C[i].Xuat();
    cout << endl;
}

void Qly::TongSoTienCongTyThuDuoc() {
    int sum = 0;
    for (int i = 0; i < x; ++i) sum += A[i].getLuong();
    for (int i = 0; i < y; ++i) sum += B[i].getLuong();
    for (int i = 0; i < z; ++i) sum += C[i].getLuong();
    cout << fixed << setprecision(2) << sum << endl;
}

Qly::~Qly() {
    delete[] A;
    delete[] B;
    delete[] C;
}
