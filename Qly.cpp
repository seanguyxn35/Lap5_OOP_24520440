#include "QLy.h"
#include <iostream>
using namespace std;

void QLy::NhapDS() {
    cout << "Nhap vao so luong sinh vien dai hoc: ";
    cin >> n;
    DH = new DaiHoc[n];
    for (int i = 0; i < n; ++i) {
        cout << "\nNhap sinh vien dai hoc thu " << i + 1 << ":\n";
        DH[i].Nhap();
    }

    cout << "\nNhap vao so luong sinh vien cao dang: ";
    cin >> m;
    CD = new CaoDang[m];
    for (int i = 0; i < m; ++i) {
        cout << "\nNhap sinh vien cao dang thu " << i + 1 << ":\n";
        CD[i].Nhap();
    }
}

void QLy::XuatDS() {
    cout << "\n====== DANH SACH SINH VIEN DAI HOC ======\n";
    for (int i = 0; i < n; ++i)
        DH[i].Xuat();

    cout << "\n====== DANH SACH SINH VIEN CAO DANG ======\n";
    for (int i = 0; i < m; ++i)
        CD[i].Xuat();
}

void QLy::SVduDK() {
    cout << "\nSinh vien dai hoc du dieu kien tot nghiep:\n";
    for (int i = 0; i < n; ++i)
        if (DH[i].totNghiep()) DH[i].Xuat();

    cout << "\nSinh vien cao dang du dieu kien tot nghiep:\n";
    for (int i = 0; i < m; ++i)
        if (CD[i].totNghiep()) CD[i].Xuat();
}

void QLy::SVkhongDuDK() {
    cout << "\nSinh vien dai hoc khong du dieu kien tot nghiep:\n";
    for (int i = 0; i < n; ++i)
        if (!DH[i].totNghiep()) DH[i].Xuat();

    cout << "\nSinh vien cao dang khong du dieu kien tot nghiep:\n";
    for (int i = 0; i < m; ++i)
        if (!CD[i].totNghiep()) CD[i].Xuat();
}

void QLy::maxDH() {
    if (n == 0) return;
    int maxIndex = 0;
    for (int i = 1; i < n; ++i)
        if (DH[i].getDiemTB() > DH[maxIndex].getDiemTB())
            maxIndex = i;
    cout << "\nSinh vien dai hoc co diem trung binh cao nhat:\n";
    DH[maxIndex].Xuat();
}

void QLy::maxCD() {
    if (m == 0) return;
    int maxIndex = 0;
    for (int i = 1; i < m; ++i)
        if (CD[i].getDiemTB() > CD[maxIndex].getDiemTB())
            maxIndex = i;
    cout << "\nSinh vien cao dang co diem trung binh cao nhat:\n";
    CD[maxIndex].Xuat();
}

void QLy::countKoTN() {
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; ++i)
        if (!DH[i].totNghiep()) count1++;
    for (int i = 0; i < m; ++i)
        if (!CD[i].totNghiep()) count2++;
    cout << "\nCo " << count1 << " sinh vien dai hoc, " << count2 << " sinh vien cao dang khong du dieu kien tot nghiep.\n";
}

QLy::~QLy() {
    delete[] DH;
    delete[] CD;
}
