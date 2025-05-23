#ifndef QLY_H
#define QLY_H

#include "KhachHang.h"

class Qly {
    int x, y, z;
    khachHangBinhThuong* A;
    khachHangThanThiet* B;
    khachHangDacBiet* C;

public:
    void NhapDS();
    void XuatDS();
    void TongSoTienCongTyThuDuoc();
    ~Qly();
};

#endif
