#include "SVien.h"

// ========== LỚP SVIEN ==========
void SVien::Nhap() {
    cout << "Nhap vao mssv: ";
    cin >> mssv;
    cin.ignore();
    cout << "Nhap vao ho va ten: ";
    getline(cin, hoTen);
    cout << "Nhap vao dia chi: ";
    getline(cin, diaChi);
    cout << "Nhap vao tong so tin chi: ";
    cin >> tinChi;
    cout << "Nhap vao diem trung binh: ";
    cin >> diemTB;
}

void SVien::Xuat() {
    cout << "MSSV: " << mssv << ", Ho va ten: " << hoTen << ", Dia chi: " << diaChi
         << ", Tong so tin chi: " << tinChi << ", Diem trung binh: " << diemTB;
}

double SVien::getDiemTB() {
    return diemTB;
}

// ========== LỚP DAIHOC ==========
void DaiHoc::Nhap() {
    SVien::Nhap();
    cin.ignore();
    cout << "Nhap vao ten luan van: ";
    getline(cin, tenLV);
    cout << "Nhap vao diem luan van: ";
    cin >> diemLV;
}

void DaiHoc::Xuat() {
    SVien::Xuat();
    cout << ", Ten luan van: " << tenLV << ", Diem luan van: " << diemLV << endl;
}

bool DaiHoc::totNghiep() {
    return (tinChi >= 170 && diemTB >= 5 && diemLV >= 5);
}

// ========== LỚP CAODANG ==========
void CaoDang::Nhap() {
    SVien::Nhap();
    cout << "Nhap vao diem tot nghiep: ";
    cin >> diemTN;
}

void CaoDang::Xuat() {
    SVien::Xuat();
    cout << ", Diem tot nghiep: " << diemTN << endl;
}

bool CaoDang::totNghiep() {
    return (tinChi >= 120 && diemTB >= 5 && diemTN >= 5);
}
