////BAI 4
////Viết hàm đệ qui tính giá trị của x^n 
//
//#include <iostream>
//using namespace std;
//
////hàm đệ qui tính giá trị của x^n 
//int TinhMu(int x, int n)
//{
//	if(n==1)
//		return x;
//	else
//		return x * TinhMu(x, n-1);
//}
//
//int main()
//{
//	int n,x;
//	do{
//		cout <<"Nhap vao x: "; cin >> x;
//		cout <<"Nhap vao n: "; cin >> n;
//		if(n<=0 && x <0)
//			cout << "Nhap sai. Vui long nhap lai !!!  \n";
//	}
//	while(n <= 0 && x < 0);
//
//
//	cout << "\nKet qua x^n la: " << TinhMu(x,n) << endl; 
//
//
//
//	system("pause");
//	return 0;
//}