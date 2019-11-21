//Bài 4. Viết chương trình dùng cấp phát động, cho phép:
//- Nhập vào 1 mảng 1 chiều lưu trữ số nguyên tối đa 30 phần tử.
//- Dùng con trỏ và ký pháp độ dời để xuất ra các phần tử nào là số lẻ trong mảng.
//- Trả về địa chỉ của giá trị phần tử lớn nhất trong mảng (giả sử các giá trị trong mảng không
//trùng nhau)

#include <iostream>
using namespace std;

#define MAXn 30

int main()
{
	//cap phat mang
		int *p = new int [MAXn];
	int n;
	cout << "Nhap vao so luong phan tu: "; cin >> n;
	// nhap mang
		for(int i = 0; i < n ; i++)
		{
			cout << "Nhap vao a[" << i << "]=" ;
			cin >> *(p+i);
		}


	// xuat mang le
	cout << "Cac phan tu le trong mang la: " ;
		for(int i = 0; i < n; i++)
		{
			
			if( *(p+i) % 2 !=0)
				cout << *(p+i) <<" ";
			cout << endl <<"vi tri la " << (p + i) << " " ;
			
		}
		cout << endl;

	//xuat mang
	int	vtmax = 0;
	int max = p[0];
		for(int i = 0; i < n; i++)
		{
			if( max < *(p+i) )
			{
				max = *(p+i);
				vtmax = i;
			
			}
				cout << "vi tri lon " << vtmax << endl;
			
		}
		cout << "dia chi cua gia tri lon nhat: " << (p + vtmax) << endl;
	


	//huy cap fat
		delete []p;

	system("pause");
	return 0;
}