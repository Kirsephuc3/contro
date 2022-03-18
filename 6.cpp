//#include <iostream>
//#include<cstdlib>
//#include <ctime>
//using namespace std;
//void DN(int* a, int n) {
//	int* p = a;
//	int* q = a+(n - 1);
//	int temp;
//	while (p < q) {
//		temp = *p;
//		*p = *q;
//		*q = temp;
//		p++;
//		q--;
//	}
//}
//int main() {
//	int n;
//	int* a;
//	cout << " Nhap so luong phan tu trong mang: ";
//	cin >> n;
//	a = new int[n];
//	srand(time(NULL));
//	for (int i = 0; i < n; i++) {
//		*(a + i) = rand() % 10;
//		cout << *(a + i) << endl;
//	}
//	cout << " Xuat mang: ";
//	for (int i = 0; i < n; i++) {
//		cout << *(a + i) << " ";
//	}
//	cout << "\n Mang dao nguoc la: ";
//	DN(a, n);
//	for (int i = 0; i < n; i++) {
//		cout << *(a + i) << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}