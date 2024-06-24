#include <iostream>
using namespace std;

int main() {
	int uoc;
	cout << "Nhap so: ";
	cin >> uoc;
	cout << "\nUoc cua " << uoc << " la: ";
	for (int i = 1; i <= uoc; i++) {
		if (uoc % i == 0) {
			cout << i << " ";
		}
	}
	int boi, ketqua, i = 1;
	cout << "\nNhap so: ";
	cin >> boi;
	cout << "\nBoi cua so " << boi << " la: ";
	while (i <= 100) {
		cout << boi * i << " ";
		i++;
	}
	return 0;
}

