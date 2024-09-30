#include <bits/stdc++.h>
using namespace std;

class Diem {
private:
    float x, y;
public:
    Diem() {
        x = 0;
        y = 0;
    }
    Diem(float x, float y) {
        this->x = x;
        this->y = y;
    }
    friend istream &operator>> (istream &inp, Diem &a) {
        cout << "Nhap toa do diem (x, y): ";
        inp >> a.x >> a.y;
        return inp;
    }
    friend ostream &operator<< (ostream &out, Diem a) {
        out << "(" << a.x << ", " << a.y << ")";
        return out;
    }
    float KhoangCachO() {
        return sqrt(x*x+y*y);
    }
};

int main() {
    int n;
    cout << "Nhap so diem: ";
    cin >> n;
    Diem a[n];
    for (int i=0; i<n; i++) cin >> a[i];

    float tongKC = 0;
    for (int i=0; i<n; i++) tongKC += a[i].KhoangCachO();
    cout << "Tong khoang cach cac diem den goc toa do la: " << tongKC << "\n";

    int minIndex = 0;
    float minRange = 1e9;
    for (int i=0; i<n; i++) if (minRange > a[i].KhoangCachO()) {
        minRange = a[i].KhoangCachO();
        minIndex = i;
    }
    cout << "Toa do diem gan goc toa do nhat la " << a[minIndex];

    return 0;
}
