#include "Menu.h"
#include <iostream>
using namespace std;

void Qly::NhapDS() {
    cout << "Nhap so luong nhan vien van phong: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "--- Van phong " << i + 1 << " ---\n";
        VP[i].Nhap();
    }

    cout << "Nhap so luong nhan vien san xuat: ";
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cout << "--- San xuat " << i + 1 << " ---\n";
        SX[i].Nhap();
    }
}

void Qly::XuatDS() {
    cout << "\n--- Danh sach nhan vien van phong ---\n";
    for (int i = 0; i < n; ++i) {
        VP[i].Xuat();
        cout << "--------------------\n";
    }

    cout << "\n--- Danh sach nhan vien san xuat ---\n";
    for (int i = 0; i < m; ++i) {
        SX[i].Xuat();
        cout << "--------------------\n";
    }
}

void Qly::TongLuong() {
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += VP[i].getLuong();
    for (int i = 0; i < m; ++i)
        sum += SX[i].getLuong();

    cout << "Tong luong cong ty phai tra: " << sum << endl;
}

void Qly::run() {
    int choice;
    NhapDS();
    do {
        cout << "\n========== MENU ==========\n";
        cout << "1. Xuat danh sach nhan vien\n";
        cout << "2. Tinh tong luong cua cong ty\n";
        cout << "3. Thoat chuong trinh\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice) {
            case 1:
                XuatDS();
                break;
            case 2:
                TongLuong();
                break;
        }
    } while (choice > 0 && choice < 3);
}
