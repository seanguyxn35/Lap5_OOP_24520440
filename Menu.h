#ifndef QLY_H
#define QLY_H

#include "NhanVien.h"

class Qly {
    nvVanPhong VP[100];
    nvSanXuat SX[100];
    int n, m;

public:
    void NhapDS();
    void XuatDS();
    void TongLuong();
    void run();
};

#endif
