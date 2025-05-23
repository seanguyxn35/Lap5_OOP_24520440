#ifndef QLY_H
#define QLY_H

#include "SVien.h"

class QLy {
    int n, m;
    DaiHoc* DH;
    CaoDang* CD;
public:
    void NhapDS();
    void XuatDS();
    void SVduDK();
    void SVkhongDuDK();
    void maxDH();
    void maxCD();
    void countKoTN();
    ~QLy();
};

#endif
