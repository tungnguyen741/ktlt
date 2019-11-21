////BAI TAP THUC HANH 3
////Bài 3. Viết chương trình dùng cấp phát động để cho phép 2 con trỏ lưu trữ giá trị của 2 số
////nguyên. Sau đó dựa trên địa chỉ mà con trỏ trỏ đến để tìm ước chung lớn nhất của 2 giá trị số
////nguyên này bằng thuật giải Euclid
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int *a, *b;
//	a = new int;
//	b = new int;
//	cout << "Nhap vao a: "; 
//	cin >> *a;
//	cout << "Nhap vao b: "; 
//	cin >> *b;
//	while(*b!=0)
//	{
//		int *c;
//		c= new int;
//		*c = *a % *b;
//		*a = *b;
//		*b = *c;
//		delete c;
//	}
//	cout <<"UCLN cua a va b la: " << *a << endl;
//	delete a;
//	delete b;
//
//	system("pause");
//	return 0;
//}