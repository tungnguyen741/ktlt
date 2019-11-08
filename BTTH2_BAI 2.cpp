//bai 2
#include<iostream>
#include<time.h>
using namespace std;


int main()
{
	//a
		int a[30];
	//b
		int n;
		cout << "Nhap vao so n: " ;  cin >> n ; 
		int b[30];
		srand((int)time(0)); 
		for(int i=0 ; i<n; i++)
			b[i]=rand()%10 ;
			
	//c
		int *p = b;
	//d

	


		for(int i = 0 ; i < n; i++)
			cout << *(p+i) << endl;

	//e
		cout <<"\n\nKy phap do dai: \n";
		for(int i = 0 ; i < n; i++)
			cout << p[i] << endl;

		
		
	

	system("pause");
	return 0;
}