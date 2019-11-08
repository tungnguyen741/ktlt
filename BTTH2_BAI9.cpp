       #include <iostream>
using namespace std;

const int MAX=20;
void nhap( int a[], int n)
{
	for(int i=0;i<n ;i++)
	{
		cout<<"Nhap vao phan tu a[" <<i<< "] : ";
		cin >>a[i];
	}
}
void xuat(int a[], int n)
{
	for(int i=0;i<n;i++)
		cout <<a[i] <<" ";
}
int min(int a[], int n)
{
	if(n==1)
		return a[0];
	else if(a[n-1]< min(a,n-1))
		return a[n-1];
	else
		return min(a,n-1);
}
int main()
{
	int a[MAX];
	int n;
	do{
		cout<<"Nhap so luong phan tu cho mang 1 chieu: ";
		cin >>n;
		if( n <=0)
			cout<<"Nhap sai!Nhap lai voi n > 0"<<endl;
	}while(n <=0);
	nhap(a,n);
	cout <<"Mang 1 chieu hien tai: ";
	xuat(a,n);
	cout<<"\nSo nho nhat trong mang la: " <<min(a,n) <<endl;

	return 0;
	system("pause");

}