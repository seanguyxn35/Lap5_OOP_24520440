#ifndef QLY_H
#define QLY_H

#include "NVien.h"

class Qly {
    int n, m;
    Coder* code;
    Tester* test;

    int TBLuong();

public:
    void NhapDS();
    void XuatDS();
    void ThapHonTB();
    void NVLuongCaoNhat();
    void NVLuongThapNhat();
    void CoderLuongCaoNhat();
    void TesterLuongThapNhat();
    ~Qly();
};

#endif
