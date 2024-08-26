#include <bits/stdc++.h>
using namespace std;

class DT{
	int n; 
	float *a;
	public:
		DT(){
			a = new float;
		}
		void Nhap(){
			cout << "Nhap n: "; cin >> n;
			//a = new float[n];
			for(int i=0; i<=n; i++){
				cout << "a[" << i << "] = ";
				cin >> a[i];
			}
		}	
		void Xuat(){
			cout << "Da thuc la: " << a[0];
			for(int i=1; i<=n; i++){
				if(a[i] > 0) cout << "+";
				else if(a[i] == 0) continue;

				//cout << "+" << a[i] << "X^" << i;
				cout << a[i] << "X^" << i;
			}
			cout << '\n';
		}
		float gia_tri(float t){
			float sum = 0;
			for(int i=0; i<=n; i++){
				sum += a[i] * pow(t, i);
			}
			return sum;
		}
		friend float gia_tri1(DT d, float t){
			float sum = 0;
			for(int i=0; i<=d.n; i++){
				sum += d.a[i] * pow(t, i);
			}
			return sum;
		}
		~DT(){
			delete[] a;
		}
};
int main(){
	DT a;
	a.Nhap();
	a.Xuat();
	float t;
	cout << "Nhap t: "; cin >> t;
	cout << gia_tri1(a, t);
}
