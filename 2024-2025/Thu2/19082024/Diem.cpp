#include <bits/stdc++.h>
using namespace std;

class Diem {
private:
	float hoanh, tung;
	
public:
	Diem(float h = 0, float t = 0) {
		hoanh = h;
		tung = t;
	}
	void nhap() {
		cout << "Nhap hoanh do: ";
		cin >> hoanh;
		cout << "Nhap tung do: ";
		cin >> tung;
		return;
	}
	void xuat() {
		cout << "[" << hoanh << "," << tung << "]\n";
		return;
	}
};

int main() {
	Diem x;
	x.xuat();
	x.nhap();
	x.xuat();
}
