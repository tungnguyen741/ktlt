////Bài 7: Viết hàm đệ qui tính tổng các chữ số chẵn/lẻ của một số nguyên không âm.
//#include <iostream>
//using namespace std;
//
////ham de qui tinh tong so chan
//int TongChan( int n )
//{
//	if(n == 0)
//		return 0;
//	else 
//		if(n%10% 2== 0)
//			return n % 10 + TongChan(n/10);
//		else 
//			return TongChan(n/10);
//	
//}
//
////ham de qui tinh tong so le
//int TongLe( int n )
//{
//	if(n == 0)
//		return 0;
//	else 
//		if(n%10 % 2!= 0)
//			return n % 10 + TongChan(n/10);
//		else 
//			return TongChan(n/10);
//	
//}
//
//int main()
//{
//	int n,m;
//
//	do{
//		cout <<"Nhap vao n: ";  cin >> n;
//		if(n <= 0 && n % 2 !=0)
//			cout <<"Nhap sai. Vui long nhap lai! \n";
//	}while(n <= 0 && n % 2 !=0 );
//
//
//	do{
//		cout <<"Nhap vao m: ";  cin >> m;
//		if(m <= 0 && m % 2 !=0)
//			cout <<"Nhap sai. Vui long nhap lai! \n";
//	}while(m <= 0 && m % 2 !=0 );
//
//	cout << TongChan(n) << endl;
//
//	cout << TongLe(m) << endl;
//	system("pause");
//	return 0;
//}