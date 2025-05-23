#include "BDS.h"

void BDS::Nhap() {
    cout << "Nhap vao ma giao dich: ";
    cin >> maGiaoDich;
    cout << "Nhap vao ngay giao dich (dd/mm/yyyy): ";
    cin >> ngayGiaoDich;
    cout << "Nhap vao don gia: ";
    cin >> donGia;
    cout << "Nhap vao dien tich: ";
    cin >> dienTich;
}

void BDS::Xuat() {
    cout << "Ma giao dich: " << maGiaoDich
         << ", Ngay giao dich: " << ngayGiaoDich
         << ", Don gia: " << donGia
         << ", Dien tich: " << dienTich;
}

string BDS::getNgayGiaoDich() {
    return ngayGiaoDich;
}

// GiaoDichDat
void giaoDichDat::Nhap() {
    BDS::Nhap();
    cout << "Nhap vao loai dat (A/B/C): ";
    cin >> loaiDat;
}

void giaoDichDat::Xuat() {
    BDS::Xuat();
    cout << ", Loai dat: " << loaiDat << endl;
}

double giaoDichDat::thanhTien() {
    if (loaiDat == 'A') return dienTich * donGia;
    else return dienTich * donGia * 1.5;
}

// GiaoDichNhaPho
void giaoDichNhaPho::Nhap() {
    BDS::Nhap();
    cout << "Nhap vao loai nha (Cao cap/Thuong): ";
    cin.ignore();
    getline(cin, loaiNha);
    cout << "Nhap vao dia chi: ";
    getline(cin, diaChi);
}

void giaoDichNhaPho::Xuat() {
    BDS::Xuat();
    cout << ", Loai nha: " << loaiNha
         << ", Dia chi: " << diaChi << endl;
}

double giaoDichNhaPho::thanhTien() {
    if (loaiNha == "Thuong") return dienTich * donGia * 0.9;
    else return dienTich * donGia;
}

// GiaoDichHoChungCu
void giaoDichHoChungCu::Nhap() {
    BDS::Nhap();
    cout << "Nhap vi tri tang: ";
    cin >> viTriTang;
}

void giaoDichHoChungCu::Xuat() {
    BDS::Xuat();
    cout << ", Vi tri tang: " << viTriTang << endl;
}

double giaoDichHoChungCu::thanhTien() {
    if (viTriTang == 1) return donGia * dienTich * 2;
    else if (viTriTang >= 15) return donGia * dienTich * 1.2;
    else return donGia * dienTich;
}
