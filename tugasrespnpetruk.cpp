#include <iostream>
using namespace std;

int main(){
	cout << "===========================================================================\n";
	cout << "================== Menentukan Bilangan Terbesar dan Terkecil ==============\n";
	cout << "===========================================================================\n";
	cout << endl << endl;
	cout << "===========================================================================\n";
	cout << "========== Dibuat oleh : ==================================================\n";
	cout << "========== - 1957051003 Finka Marisa Geananda Sufie =======================\n";
	cout << "========== - 1917051063 Hani Cita Lestari =================================\n";
	cout << "========== - 1917051037 Vira Verina =======================================\n";
	cout << "===========================================================================\n";
	
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
		else if (min > *(ptr + i)) {
			min = *(ptr + i);
		}
	}
	cout << "\nBilangan Terkecil = " << min << endl;
	cout << "Bilangan Terbesar = " << max;
	
	return 0;
}
