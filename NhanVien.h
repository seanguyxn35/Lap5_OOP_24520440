#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string>
using namespace std;

class NVien {
protected:
    string hoTen;
    string ngaySinh;

public:
    void Nhap();
    void Xuat();
};

class nvVanPhong : public NVien {
    int soNgayLamViec;

public:
    void Nhap();
    void Xuat();
    int getLuong();
};

class nvSanXuat : public NVien {
    int LuongCB;
    int soSP;

public:
    void Nhap();
    void Xuat();
    int getLuong();
};

#endif
