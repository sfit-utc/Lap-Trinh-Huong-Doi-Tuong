#include <bits/stdc++.h>
using namespace std;

class SoPhuc{
	private: 
		float sothuc, soao;
	public:
		void nhap(){
			cout << "Nhap so thuc: "; cin >> sothuc;
			cout << "Nhap so ao: "; cin >> soao;
		}		
		void xuat(){
			cout << sothuc;
			if(soao > 0) cout << '+' << soao << "i\n";
		}
		SoPhuc cong(SoPhuc a, SoPhuc b){
			SoPhuc c;
			c.sothuc = a.sothuc + b.sothuc;
			c.soao = a.soao + b.soao;
			return c;
		}
};

int main(){
	SoPhuc a, b;
	a.nhap(); b.nhap();
	a.xuat(); b.xuat();
	SoPhuc c = c.cong(a, b);
	c.xuat();
}
