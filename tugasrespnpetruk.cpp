#include <iostream>
using namespace std;

int main(){
	cout << "===========================================================================\";
	cout << "================== Menentukan Bilangan Terbesar dan Terkecil ==============\";
	cout << "===========================================================================\";
	cout << endl << endl;
	cout << "===========================================================================\";
	cout << "========== Dibuat oleh : ==================================================\";
	cout << "========== - 1957051003 Finka Marisa Geananda Sufie =======================\";
	cout << "========== - 1917051063 Hani Cita Lestari =================================\";
	cout << "========== - 1917051037 Vira Verina =======================================\";
	cout << "===========================================================================\";
	
	int n = 0, min = 0, max = 0;

	cout << "\Masukkan jumlah bilangan : ";
	cin >> n;
	
	int bil[n];
	for(int i = 0; i < n; i++) {
		cout << "Masukkan bilangan ke " << i + 1 << " : ";
		cin >> bil[i];
	}

	int *ptr;
	ptr = bil;
	max = min = *ptr;

	for(int i = 0; i < n; i++) {

		if (max < *(ptr + i)) {
			max = *(ptr + i);
		}
	}
	
	return 0;
}
