//#include <iostream>
//#include<cstdlib>
//#include <ctime>
//using namespace std;
//int main() {
//	int* a;
//	int* max;
//	a = new int[30];// new int [n]
//	int p;
//	do {
//		cout << " Nhap so luong phan tu vao mang: ";
//		cin >> p;
//		if (p < 0 || p>30);
//	} while (p < 0 || p>30);
//	srand(time(NULL));
//	for (int i = 0; i < p; i++) {
//		*(a+i) = rand() % 10;
//		cout << *(a + i) << endl;
//	}
//	max = a;
//	cout << "Xuat mang:";
//	for (int i = 0; i < p; i++) {
//		if (*(a + i) % 2 == 1) {
//			cout << *(a + i) << " ";
//		}
//		if (*max < *(a + i)) {
//			max = a + i;
//		}
//	}
//	cout << "\n Gia tri lon nhat: " << *max << endl;
//	delete a;
// a = 0;
//	system("pause");
//	return 0;
//}