// muhammad zaki najib
// 20051397067
// tugas 3

#include<iostream>
using namespace std;
int main()
{
	int a=0,b,c,jumlah=0,i,n;
	
	cout << " PROGRAM MENGHITUNG DERET " << endl;
	cout << "\n";
	cout << " Masukan bilangan awal     : "; cin >> a;
	cout << " Masukan beda              : "; cin >> b;
	cout << " Masukan jumlah deret ke-n : "; cin >> n;
	cout << "\n";
	cout << " Deret ke-" << n << " : ";
	cout << a << ",";
	jumlah=jumlah+a;
	
	for(i=0;i<n-1;i++)
	{
		c=a+b;
		a=c;
		cout<<c<<",";
		jumlah=jumlah+c;	
	}
	cout << "\n";
	cout << " Jumlah deret ke-" << n << " : ";
	cout << jumlah <<endl;
	cout << "=========================================" <<endl;
	return 0;
}
