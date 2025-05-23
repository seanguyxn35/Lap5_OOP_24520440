#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu() : nDat(0), nNha(0), nChungCu(0), A(nullptr), B(nullptr), C(nullptr) {}
Menu::~Menu() {
    for (int i = 0; i < nDat; ++i) delete A[i];
    delete[] A;
    for (int i = 0; i < nNha; ++i) delete B[i];
    delete[] B;
    for (int i = 0; i < nChungCu; ++i) delete C[i];
    delete[] C;
}

void Menu::Nhap() {
    cout << "Nhap so luong giao dich dat: ";
    cin >> nDat;
    A = new giaoDichDat*[nDat];
    for (int i = 0; i < nDat; ++i) {
        cout << "--- Giao dich dat " << i + 1 << " ---\n";
        A[i] = new giaoDichDat();
        A[i]->Nhap();
    }

    cout << "Nhap so luong giao dich nha pho: ";
    cin >> nNha;
    B = new giaoDichNhaPho*[nNha];
    for (int i = 0; i < nNha; ++i) {
        cout << "--- Giao dich nha pho " << i + 1 << " ---\n";
        B[i] = new giaoDichNhaPho();
        B[i]->Nhap();
    }

    cout << "Nhap so luong giao dich ho chung cu: ";
    cin >> nChungCu;
    C = new giaoDichHoChungCu*[nChungCu];
    for (int i = 0; i < nChungCu; ++i) {
        cout << "--- Giao dich ho chung cu " << i + 1 << " ---\n";
        C[i] = new giaoDichHoChungCu();
        C[i]->Nhap();
    }
}

void Menu::Xuat() {
    cout << "\n--- Giao dich dat ---\n";
    for (int i = 0; i < nDat; ++i) {
        A[i]->Xuat();
        cout << ", Thanh tien: " << A[i]->thanhTien() << endl;
    }

    cout << "\n--- Giao dich nha pho ---\n";
    for (int i = 0; i < nNha; ++i) {
        B[i]->Xuat();
        cout << ", Thanh tien: " << B[i]->thanhTien() << endl;
    }

    cout << "\n--- Giao dich ho chung cu ---\n";
    for (int i = 0; i < nChungCu; ++i) {
        C[i]->Xuat();
        cout << ", Thanh tien: " << C[i]->thanhTien() << endl;
    }
}

void Menu::demSoLuong() {
    cout << "\nSo luong giao dich:\n";
    cout << "- Giao dich dat: " << nDat << endl;
    cout << "- Giao dich nha pho: " << nNha << endl;
    cout << "- Giao dich ho chung cu: " << nChungCu << endl;
}

void Menu::TBChungCu() {
    if (nChungCu == 0) {
        cout << "\nKhong co giao dich chung cu!\n";
        return;
    }
    double sum = 0;
    for (int i = 0; i < nChungCu; i++) {
        sum += C[i]->thanhTien();
    }
    cout << "\nTrung binh thanh tien cua giao dich Chung cu la: " << sum / nChungCu << endl;
}

void Menu::maxNhaPho() {
    if (nNha == 0) {
        cout << "Khong co giao dich nha pho!\n";
        return;
    }
    giaoDichNhaPho* maxTien = B[0];
    for (int i = 1; i < nNha; ++i) {
        if (B[i]->thanhTien() > maxTien->thanhTien()) {
            maxTien = B[i];
        }
    }
    cout << "\nGiao dich Nha pho co gia tri cao nhat:\n";
    maxTien->Xuat();
    cout << ", Thanh tien: " << maxTien->thanhTien() << endl;
}

void Menu::xuatThang12() {
    cout << "\nCac giao dich trong thang 12:\n";
    for (int i = 0; i < nDat; ++i)
        if (A[i]->getNgayGiaoDich().substr(3, 2) == "12") A[i]->Xuat();
    for (int i = 0; i < nNha; ++i)
        if (B[i]->getNgayGiaoDich().substr(3, 2) == "12") B[i]->Xuat();
    for (int i = 0; i < nChungCu; ++i)
        if (C[i]->getNgayGiaoDich().substr(3, 2) == "12") C[i]->Xuat();
}

void Menu::Run() {
    int choice;
    Nhap();
    do {
        cout << "\n=========== MENU ==========\n";
        cout << "1. Xuat danh sach giao dich\n";
        cout << "2. Tinh tong so luong tung loai\n";
        cout << "3. Tinh trung binh thanh tien cua giao dich Chung cu\n";
        cout << "4. Giao dich Nha pho co gia tri cao nhat\n";
        cout << "5. Xuat danh sach giao dich thang 12\n";
        cout << "6. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice) {
            case 1: Xuat(); break;
            case 2: demSoLuong(); break;
            case 3: TBChungCu(); break;
            case 4: maxNhaPho(); break;
            case 5: xuatThang12(); break;
            case 6: cout << "Tam biet!\n"; break;
            default: cout << "Lua chon khong hop le!\n"; break;
        }
    } while (choice != 6);
}
