////Bài 8: Viết hàm đệ qui chuyển một số nguyên dương từ hệ thập phân sang nhị phân
//#include <iostream>
//using namespace std;
//
////ham đệ qui chuyển một số nguyên dương từ hệ thập phân sang nhị phân
//
//int TPsNP( int n )
//{
//	if(n == 0)
//		return 0;
//	else
//		return n % 2 +TPsNP(n/2)*10;	
//}
//
//int main()
//{
//	int n;
//
//	do{
//		cout << "Nhap vao n: ";  cin >> n;
//		if(n < 0)
//			cout << "Nhap sai. Vui long nhap lai! \n";
//	}while(n < 0);
//
//	cout << TPsNP(n) << endl;
//	system("pause");
//	return 0;
//}