#include "NhanVien.h"

// ----------------- NVien -----------------
void NVien::Nhap() {
    cout << "Nhap vao ho va ten: ";
    cin.ignore();
    getline(cin, hoTen);
    cout << "Nhap vao ngay sinh: ";
    getline(cin, ngaySinh);
}

void NVien::Xuat() {
    cout << "Ho va ten: " << hoTen << endl;
    cout << "Ngay sinh: " << ngaySinh << endl;
}

// ----------------- nvVanPhong -----------------
void nvVanPhong::Nhap() {
    NVien::Nhap();
    cout << "Nhap vao so ngay lam viec: ";
    cin >> soNgayLamViec;
}

int nvVanPhong::getLuong() {
    return soNgayLamViec * 100000;
}

void nvVanPhong::Xuat() {
    NVien::Xuat();
    cout << "So ngay lam viec: " << soNgayLamViec << endl;
    cout << "Luong: " << getLuong() << endl;
}

// ----------------- nvSanXuat -----------------
void nvSanXuat::Nhap() {
    NVien::Nhap();
    cout << "Nhap vao luong co ban: ";
    cin >> LuongCB;
    cout << "Nhap vao so san pham: ";
    cin >> soSP;
}

int nvSanXuat::getLuong() {
    return LuongCB + soSP * 5000;
}

void nvSanXuat::Xuat() {
    NVien::Xuat();
    cout << "Luong co ban: " << LuongCB << endl;
    cout << "So san pham: " << soSP << endl;
    cout << "Luong: " << getLuong() << endl;
}
