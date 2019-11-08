////BAI 1
//
//#include <iostream>
//using namespace std;
//
////Cau A. S1 = 1 + 2 + 3 + ... + n (n nguyen duong)
//int TongSoND(int n)
//{
//	if(n==1)
//		return 1;
//	else
//		return n+ TongSoND(n-1);
//
//}
//
//
////Cau B. S2 = 1^2 + 2^2 + 3^2 + ... + n^2 (n nguyen duong)
//int TongSoNDmu(int n)
//{
//	if(n==1)
//		return 1;
//	else
//		return n*n + TongSoNDmu(n-1);
//
//}
//
////Cau C. S3 = 1 + 1/3 + 1/5 + ... + 1/n (n nguyen duong)
//double TongPS(int n)
//{
//	if(n==1)
//		return 1;
//	else
//		return 1.0/n + TongPS(n-2);
//}
//
////Cau D. S4 = 1! + 2! + 3! + ... + n! (n nguyen duong)
//int GT(int n)
//{
//	if(n==1)
//		return 1;
//	else
//		return n * GT(n-1);
//}
//int TongGT(int n)
//{
//	if(n==1)
//		return 1;
//	else
//		return GT(n) + TongGT(n-1);
//}
//
//
//int main()
//{
//	int m;
//	int n;
//	do{
//	cout <<"Nhap vao n: "; cin >> n;
//	if(n<=0)
//		cout <<"Nhap sai vui long nhap lai so nguyen!!!\n";
//	}
//	while(n<=0);
//	
//	//a
//	cout << "---> Tong so nguyen tu 1 den n la: " << TongSoND(n) << endl << endl;
//	//b
//	cout << "---> Tong so nguyen tu 1^2 den n^2 la: " << TongSoNDmu(n) << endl << endl;
//
//	//d
//	cout << "---> Tong so nguyen giai thua tu 1! den n! la: " << TongGT(n) <<  endl << endl;
//	//c
//	
//	do{
//	cout <<"Nhap vao m de tinh tong 1 den 1/m: "; cin >> m;
//	if(  m %2 == 0 && m>0 )
//		cout <<"Nhap sai vui long nhap lai so nguyen va so le!!!\n" << endl << endl ;
//	}
//	while( m %2 ==0 && m>0 );
//	cout << "---> Tong so nguyen le tu 1 den 1/n la: " << TongPS(n) << endl << endl;
//
//
//	
//	
//	system("pause");
//	return 0;
//}