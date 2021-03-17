#include <iostream>
using namespace std;

struct PhanSo
{
    int iTuSo;
    int iMauSo;

    // void Nhap() {
    //     cout<<"Nhap tu so:";
    //     cin>>iTuSo;

    //     cout<<"Nhap mau so:";
    //     cin>>iMauSo;
    // }

    // void Xuat() {
    //     cout<<"Phan so la: "<<iTuSo<<"/"<<iMauSo;
    // }
};

// void Nhap(PhanSo &ps)
// {
//     cout << "Nhap tu so:";
//     cin >> ps.iTuSo;

//     cout << "Nhap mau so:";
//     cin >> ps.iMauSo;
// }

PhanSo Nhap()
{
    PhanSo ps;
    cout << "Nhap tu so:";
    cin >> ps.iTuSo;

    cout << "Nhap mau so:";
    cin >> ps.iMauSo;

    return ps;
}

void SoSanh(PhanSo ps1, PhanSo ps2) {
    int iTu1 = ps1.iTuSo * ps2.iMauSo;
    int iTu2 = ps2.iTuSo * ps1.iMauSo;

    if (iTu1 > iTu2)
    {
        cout<<ps1.iTuSo<<"/"<<ps1.iMauSo<<">"<<ps2.iTuSo<<"/"<<ps2.iMauSo;
    } else {
        ////
    }
    
}

void Xuat(PhanSo ps)
{
    cout << "Phan so la: " << ps.iTuSo << "/" << ps.iMauSo;
}

int main()
{

    PhanSo ps;
    ps = Nhap();
    Xuat(ps);
    return 0;
}