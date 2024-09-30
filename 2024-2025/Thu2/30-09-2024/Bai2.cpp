#include <bits/stdc++.h>

using namespace std;

class ToaDo{
	private:
		float x, y;
	public:
		ToaDo(){
		}
		float GetX(){
			return x;
		}
		float GetY(){
			return y;
		}
		void Nhap(){
			cout << "\tNhap toa do cua diem: ";
			cin >> x >> y;
		}		
		void Xuat(){
			cout << "\t(" << x << ',' << y <<  ") ";
		}
		float KhoangCach(){
			return sqrt(x*x + y*y);
		}
};

class DiemMau : public ToaDo{
	private:
		int mau;
	public:	
		DiemMau(){
			ToaDo();
		}
		void Nhap(){
			ToaDo::Nhap();			
			do{
				cout << "\tNhap ma mau (1, 2, 3): ";
				cin >> mau;
			}
			while(mau > 3 && mau < 1);
		}
		void Xuat(){
			ToaDo::Xuat();
			cout << "\tMau: " << mau << endl;
		}
		int GetMau(){
			return mau;
		}
};

int main(){
	int n; 
	cout << "Nhap n: "; cin >> n;
	DiemMau a[n];
	for(int i=0; i<n; i++){
		a[i].Nhap();
	}
	int tke[4] = {};
	for(int i=0; i<n; i++){
		if(a[i].GetMau() == 1) tke[1]++;
		else if(a[i].GetMau() == 2) tke[2]++;
		else tke[3]++;
	}
	cout << "Thong ke diem moi mau la: \n";
	for(int i=1; i<=3; i++){
		cout << "\tMau " << i << ": " << tke[i] << endl;
	}
	float max = a[0].KhoangCach();
	for(int i=1; i<n; i++){
		max = (max < a[i].KhoangCach()) ? a[i].KhoangCach() : max;
	}
	cout << "Cac diem co khoang cach lon nhat den goc toa do la: \n";
	for(int i=0; i<n; i++){
		if(max == a[i].KhoangCach()){
			a[i].Xuat();
		}
	}
}
