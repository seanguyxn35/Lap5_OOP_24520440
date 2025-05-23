#include <iostream>
#include <climits>
#include "Qly.h"
using namespace std;

int Qly::TBLuong() {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += code[i].getLuong();
    for (int i = 0; i < m; i++) sum += test[i].getLuong();
    return sum / (n + m);
}

void Qly::NhapDS() {
    cout << "Nhap vao so luong coder: ";
    cin >> n;
    code = new Coder[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin coder thu " << i + 1 << ":\n";
        cin.ignore();
        code[i].Nhap();
    }

    cout << "Nhap vao so luong tester: ";
    cin >> m;
    test = new Tester[m];
    for (int i = 0; i < m; i++) {
        cout << "Nhap thong tin tester thu " << i + 1 << ":\n";
        cin.ignore();
        test[i].Nhap();
    }
}

void Qly::XuatDS() {
    cout << "\n--- Danh sach coder ---\n";
    for (int i = 0; i < n; i++) code[i].Xuat();

    cout << "\n--- Danh sach tester ---\n";
    for (int i = 0; i < m; i++) test[i].Xuat();
}

void Qly::ThapHonTB() {
    int tbinh = TBLuong();
    cout << "\nNhan vien co luong thap hon muc trung binh (" << tbinh << "):\n";
    for (int i = 0; i < n; i++)
        if (code[i].getLuong() < tbinh) code[i].Xuat();
    for (int i = 0; i < m; i++)
        if (test[i].getLuong() < tbinh) test[i].Xuat();
}

void Qly::NVLuongCaoNhat() {
    int maxLuong = INT_MIN;
    NVien* nvMax = nullptr;
    for (int i = 0; i < n; i++)
        if (code[i].getLuong() > maxLuong) {
            maxLuong = code[i].getLuong();
            nvMax = &code[i];
        }
    for (int i = 0; i < m; i++)
        if (test[i].getLuong() > maxLuong) {
            maxLuong = test[i].getLuong();
            nvMax = &test[i];
        }
    cout << "\nNhan vien co luong cao nhat:\n";
    if (nvMax) nvMax->Xuat();
}

void Qly::NVLuongThapNhat() {
    int minLuong = INT_MAX;
    NVien* nvMin = nullptr;
    for (int i = 0; i < n; i++)
        if (code[i].getLuong() < minLuong) {
            minLuong = code[i].getLuong();
            nvMin = &code[i];
        }
    for (int i = 0; i < m; i++)
        if (test[i].getLuong() < minLuong) {
            minLuong = test[i].getLuong();
            nvMin = &test[i];
        }
    cout << "\nNhan vien co luong thap nhat:\n";
    if (nvMin) nvMin->Xuat();
}

void Qly::CoderLuongCaoNhat() {
    int maxLuong = INT_MIN, idx = -1;
    for (int i = 0; i < n; i++)
        if (code[i].getLuong() > maxLuong) {
            maxLuong = code[i].getLuong();
            idx = i;
        }
    if (idx != -1) {
        cout << "\nCoder co luong cao nhat:\n";
        code[idx].Xuat();
    }
}

void Qly::TesterLuongThapNhat() {
    int minLuong = INT_MAX, idx = -1;
    for (int i = 0; i < m; i++)
        if (test[i].getLuong() < minLuong) {
            minLuong = test[i].getLuong();
            idx = i;
        }
    if (idx != -1) {
        cout << "\nTester co luong thap nhat:\n";
        test[idx].Xuat();
    }
}

Qly::~Qly() {
    delete[] code;
    delete[] test;
}
