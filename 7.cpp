//#include<iostream>
//using namespace std;
//void NHAP(int *a, int n);
//void XUAT(int *a, int n);
//int *Tim(int *a, int n, int x);
//int main()
//{
//	int *a, n, x;
//	cout << "Nhap chieu dai mang: ";
//	cin >> n;
//	a = new int[n];
//	NHAP(a, n);
//	cout << "Xuat mang: \n";
//	XUAT(a, n);
//	cout << "Nhap x: ";
//	cin >> x;
//	if(Tim(a,n,x) == NULL)
//		cout << "Khong tim thay " << x << "trong mang!";
//	else
//		cout << "Tim thay " << x << " trong mang tai vi tri " << *Tim(a,n,x);
//	delete[]a;
//	a = NULL;
//	cout << endl;
//	system("pause");
//	return 0;
//}
//void NHAP(int *a, int n)
//{
//	for (int i = 0; i < n; i++) {
//		*(a + i) = rand() % 20;
//		cout << *(a + i) << endl;
//	}
//}
//void XUAT(int *a, int n)
//{
//	for(int i = 0; i < n; i++)
//			cout << " " << *(a + i);
//	cout << endl;
//}
//int *Tim(int *a, int n, int x)
//{
//	int *p = NULL;
//	for(int i = 0; i < n; i++)
//		if(*(a + i) == x)
//		{
//			p = &i;
//			return p;
//		}
//	return p;
//}