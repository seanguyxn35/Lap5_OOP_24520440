#ifndef SVIEN_H
#define SVIEN_H

#include <iostream>
#include <string>
using namespace std;

// Lớp trừu tượng SVien
class SVien {
protected:
    string mssv, hoTen, diaChi;
    int tinChi;
    double diemTB;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual bool totNghiep() = 0;
    double getDiemTB();
};

// Lớp Đại học kế thừa từ SVien
class DaiHoc : public SVien {
    string tenLV;
    double diemLV;
public:
    void Nhap() override;
    void Xuat() override;
    bool totNghiep() override;
};

// Lớp Cao đẳng kế thừa từ SVien
class CaoDang : public SVien {
    double diemTN;
public:
    void Nhap() override;
    void Xuat() override;
    bool totNghiep() override;
};

#endif
