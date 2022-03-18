// #include<iostream>
// #include<cstdlib>
// using namespace std;
// int C(int k, int n) {
//     if (k == 0 || k == n) return 1;
//     if (k == 1) return n;
//     return C(k - 1, n - 1) + C(k, n - 1);
// }
// int main(){
//     int **a ;
//     int n;
//     cout << "Nhap vao ma tran cap n = ";
//     cin >> n;
//     a = new int *[n];
//     for(int i = 0;i<n;i++)
//         a[i] = new int [n];
//     for(int i = 0;i<n;i++)
//     {
//         for(int j= 0;j<n;j++)
//         {
//             *(*(a+i)+j) = rand () % 20;
//         }
//     }
//     cout << "---------PASCAl---------" << endl;
//     for (int i = 0; i < n; i++) {

//         for (int j = 0; j <= i; j++) {
//             cout << C(j, i) << " ";
//         }
//         cout << endl;
//     }
//     system("pause");
//     return 0;
// }
// cach 2
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int **a, h;
//	do
//	{
//		cout << "Nhap chieu dai ma tran: ";
//		cin >> h;
//		if(h <= 0)
//			cout << "Nhap sai! Nhap lai \n";
//	}while(h <= 0);
//	a = new int *[h];
//	for(int i = 0; i < h; i++)
//		a[i] = new int [h];
//	cout << "Xuat tam giac Pascal: \n";
//	for(int i = 0; i < h; i++)
//	{
//		for(int j = 0; j <= i; j++)
//		{
//			if(j == 0 || j == i)
//				a[i][j] = 1;
//			else
//				a[i][j] = a[i-1][j-1] + a[i-1][j];
//			cout << setw(4) << a[i][j];
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}