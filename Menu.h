#ifndef MENU_H
#define MENU_H

#include "BDS.h"

class Menu {
    int nDat, nNha, nChungCu;
    giaoDichDat** A;
    giaoDichNhaPho** B;
    giaoDichHoChungCu** C;

public:
    Menu();
    ~Menu();
    void Nhap();
    void Xuat();
    void TBChungCu();
    void demSoLuong();
    void maxNhaPho();
    void xuatThang12();
    void Run();
};

#endif
