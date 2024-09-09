#include <bits/stdc++.h>
using namespace std;
class Nguoi {
    private:
    string hoTen;
    int tuoi;
    public:
        void Nhap() {
            cin.ignore();
            cout << "Nhap ho va ten: ";
            getline(cin, hoTen);
            cout << "Nhap tuoi: ";
            cin >> tuoi;
        }
        void Xuat() {
            cout <<"\nHo va ten: "<<hoTen<<"\nTuoi: "<<tuoi<<endl;
        }
};
class NhanVien:public Nguoi{
    int snct;
    float hsl;
public:
    void Nhap() {
        Nguoi::Nhap();
        cout << "Nhap so nam cong tac:";
        cin >> snct;
        cout << "Nhap he so luon:";
        cin >> hsl;
    }
    void Xuat() {
        Nguoi::Xuat();
        cout << "So nam cong tac: " << snct << "\nHe so luong: " << hsl << endl;
    }
    float TienLuong() {
        return 1500000*hsl+200000*snct;
    }
    int getNam() {
        return snct;
    }
};

int main() {
    cout << "Nhap so nhan vien: ";
    int n;
    cin >> n;
    NhanVien a[n];
    for(int i=0;i<n;i++) {
        a[i].Nhap();
    }
    int max = a[0].getNam();
    for(int i=1;i<n;i++) {
        if(max<a[i].getNam()) {
            max =a[i].getNam();
        }
    }
    cout << "Nhan vien co nam cong tac nhieu nhat";
    for(int i=0;i<n;i++) {
        if(a[i].getNam()==max) {
            a[i].Xuat();
        }
    }

    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[j].TienLuong() > a[i].TienLuong()) {
                NhanVien t = a[i];
                a[i]=a[j];
                a[j] = t;
            }
        }
    }
    cout << "Danh sach nhan vien luong cao den thap: \n";
    for (auto x:a) {
        x.Xuat();
    }
}
