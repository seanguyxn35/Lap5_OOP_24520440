#ifndef BDS_H_INCLUDED
#define BDS_H_INCLUDED

#ifndef BDS_H
#define BDS_H

#include <iostream>
#include <string>
using namespace std;

class BDS {
protected:
    string maGiaoDich;
    string ngayGiaoDich;
    double donGia;
    double dienTich;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual double thanhTien() = 0;
    string getNgayGiaoDich();
};

class giaoDichDat : public BDS {
    char loaiDat;

public:
    void Nhap() override;
    void Xuat() override;
    double thanhTien() override;
};

class giaoDichNhaPho : public BDS {
    string loaiNha;
    string diaChi;

public:
    void Nhap() override;
    void Xuat() override;
    double thanhTien() override;
};

class giaoDichHoChungCu : public BDS {
    int viTriTang;

public:
    void Nhap() override;
    void Xuat() override;
    double thanhTien() override;
};

#endif


#endif // BDS_H_INCLUDED
