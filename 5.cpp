//#include <iostream>
//using namespace std;
//void Fibonacci(int n)
//{
//	int* p;
//	*p = 0, * (p + 1) = 1;
//	cout << *p << " " << *(p + 1);
//	p = new int[n];
//	for (int i = 2; i < n; i++)
//	{
//		*(p + i) = *(p + (i - 2)) + *(p + (i - 1));
//		cout << " " << *(p + i) << endl;
//	}
//	delete[]p;
//	p = 0;
//}
//int main() {
//	int n;
//	do {
//		cout << " Nhap so nguyen: ";
//		cin >> n;
//		if (n <= 1 )
//			cout << " Nhap sai! Nhap lai: ";
//	} while (n <= 1);
//	cout << " Day Fibonacci: " << endl;
//	Fibonacci(n);
//	system("pause");
//	return 0;
//}
