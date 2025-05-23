#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <iostream>
#include <string>
using namespace std;

class khachHang {
protected:
    string tenKH;
    int soLuongHang;
    int donGiaHang;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual int getLuong() = 0;
};

class khachHangBinhThuong : public khachHang {
public:
    void Nhap() override;
    void Xuat() override;
    int getLuong() override;
};

class khachHangThanThiet : public khachHang {
    int soNamThanThiet;
public:
    void Nhap() override;
    void Xuat() override;
    int getLuong() override;
};

class khachHangDacBiet : public khachHang {
public:
    void Nhap() override;
    void Xuat() override;
    int getLuong() override;
};

#endif
