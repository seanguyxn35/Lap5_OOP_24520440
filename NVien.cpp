#include "NVien.h"

// ========== NVien ==========
void NVien::Nhap() {
    cout << "Nhap vao ma nhan vien: ";
    cin >> maNV;
    cin.ignore();
    cout << "Nhap vao ho va ten: ";
    getline(cin, hoTen);
    cout << "Nhap vao tuoi: ";
    getline(cin, tuoi);
    cout << "Nhap vao sdt: ";
    cin >> sdt;
    cout << "Nhap vao email: ";
    cin >> email;
    cout << "Nhap vao luong co ban: ";
    cin >> luongCB;
}

void NVien::Xuat() {
    cout << "Ma nhan vien: " << maNV
         << ", Ho va ten: " << hoTen
         << ", Tuoi: " << tuoi
         << ", SDT: " << sdt
         << ", Email: " << email
         << ", Luong co ban: " << luongCB;
}

// ========== Coder ==========
void Coder::Nhap() {
    NVien::Nhap();
    cout << "Nhap vao so gio lam them: ";
    cin >> soGioOvertime;
}

void Coder::Xuat() {
    NVien::Xuat();
    cout << ", So gio overtime: " << soGioOvertime << endl;
}

int Coder::getLuong() {
    return luongCB + 200000 * soGioOvertime;
}

// ========== Tester ==========
void Tester::Nhap() {
    NVien::Nhap();
    cout << "Nhap vao so loi tim duoc: ";
    cin >> soLoi;
}

void Tester::Xuat() {
    NVien::Xuat();
    cout << ", So loi tim duoc: " << soLoi << endl;
}

int Tester::getLuong() {
    return luongCB + 50000 * soLoi;
}
