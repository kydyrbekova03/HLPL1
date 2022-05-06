#include "std_lib_facilities.h"

int ga[10] ={1,2,4,8,16,32,64,128,256,512};//chapter 18, drill 1 global array

void f(int arr[], int n)//chapter 18 drill 2 a function
{
	int la[10]; //chapter 18 drill 3a a local array
	for (int i = 0;i < 10;i++) //chapter 18 drill 3(b)
		la[i] = ga[i];
	
	for (int i = 0;i < 10;i++) //chapter 18 drill 3(c); print the array 'la'
		cout<<la[i]<<" ";

	int* p = new int[n];//chapter 18 3(d) define a pointer
	
	for (int i = 0;i < 10;i++)//chapter 18 drill 3(e)
		p[i] = arr[i];
	cout << endl;
	for (int i = 0;i < 10;i++)//chapter 18, drill 3(f); print free-store array
		cout << p[i] << " ";
	cout << endl;
	delete[] p;//chapter 18, drill 3(g); deallocation of free-store array
}
int main()
{
	f(ga, 10);//chapter 18 drill 4(a); 
	int aa[10] = {1,2,6,24,120,720,5040,40320,362880,3628800};//chapter 18 drill 4(b) define an array aa
	f(aa, 10);//chapter 18 drill 4(c) call function f() 

	
	return 0;
}
