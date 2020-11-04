// muhammad zaki najib
// 20051397067
// tugas 3

#include<iostream>  

using namespace std;  
int main()  
{  
	int n,i,j;
	
	cout << "SEGITIGA ANGKA" << endl;
	cout <<  "\n";
 	cout << " Masukkan tinggi segitiga : ";cin >> n;
	cout << "\n";
 
for(i=1; i<=n;i++)
 {
 for(j=1; j<=i;j++)
 {
 cout << j;  
  }  
  cout <<" \n";  
 }  
 
 for (i=n-1;i>=1;i--)  
 {   
  for(j=1;j<=i;j++)  
  {  
   cout<<j;
  }  
    cout << "\n";
 }
 
 return 0;
}

