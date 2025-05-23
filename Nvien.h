#ifndef NVIEN_H
#define NVIEN_H

#include <iostream>
#include <string>
using namespace std;

class NVien {
protected:
    string maNV, hoTen, sdt, tuoi, email;
    int luongCB;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual int getLuong() = 0;
    virtual ~NVien() {}
};

class Coder : public NVien {
    int soGioOvertime;

public:
    void Nhap() override;
    void Xuat() override;
    int getLuong() override;
};

class Tester : public NVien {
    int soLoi;

public:
    void Nhap() override;
    void Xuat() override;
    int getLuong() override;
};

#endif
