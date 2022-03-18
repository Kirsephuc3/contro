//#include<iostream>
//#include<cstdlib>
//#include<iomanip>
//using namespace std;
//void NHAP(int **a, int m, int n);
//void XUAT(int **a, int m, int n);
//bool KTNT(int n);
//int TongNT(int **a, int m, int n);
//int main()
//{
//	int **a, m, n;
//	cout << "Nhap dong va cot: ";
//	cin >> m >> n;
//	a = new int *[m];
//	for(int i = 0; i < m; i++)
//		a[i] = new int [n];
//	NHAP(a, m, n);
//	cout << "Xuat mang: \n";
//	XUAT(a, m, n);
//	cout << "Tong cac so nguyen to la: " << TongNT(a, m, n) << endl;
//	system("pause");
//	return 0;
//}
//void NHAP(int **a, int m, int n)
//{
//	for(int i = 0; i < m; i++)
//	{
//		for(int j = 0; j < n; j++)
//			*(*(a + i) + j) = rand() % 20;
//	}
//}
//void XUAT(int **a, int m, int n)
//{
//	for(int i = 0; i < m; i++)
//	{
//		for(int j = 0; j < n; j++)
//			cout << setw(4) << *(*(a + i) + j);
//		cout << endl;
//	}
//}
//bool KTNT(int n)
//{
//	if(n < 2)
//		return false;
//	for(int i = 2; i <= sqrt((double)n); i++)
//	{
//		if(n % i == 0)
//			return false;
//	}
//	return true;
//}
//int TongNT(int **a, int m, int n)
//{
//	int sum = 0;
//	for(int i = 0; i < m; i++)
//		for(int j = 0; j < n; j++)
//			if(KTNT(a[i][j]))
//				sum += a[i][j];
//	return sum;
//}