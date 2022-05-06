#include "std_lib_facilities.h"
// chapter 18 drill 1 a global vector
vector<int> gv ={1,2,4,8,16,32,64,128,256,512};

void f(vector <int> v)//chapter 18 drill 2 create a function
{
	vector <int> lv;//chapter 18 drill 3(a)
	for (int i = 0;i < v.size();i++)// chapter 18 drill 3(b)
		lv.push_back(gv[i]);
	for (int i = 0;i < lv.size();i++)//chapter 18 drill 3(c)
		cout<<lv[i]<<" ";
	cout << endl;

	vector <int> lv2; // chapter 18 drill 3(d) define a vector and copy
	for (int i = 0;i < v.size();i++)
		lv2.push_back( v[i]);
	for (int i = 0;i < lv2.size();i++)//chapter 18 drill 3(e) print out elements of vector
		cout << lv2[i] << " ";
	cout << endl;
}
int main()
{
	f(gv);//chapter 18 drill 4(a) call a function
	vector <int> vv = {1,2,6,24,120,720,5040,40320,362880,3628800};//chapter 18 drill 4(b) define a vector 
	f(vv);// chapter 18 drill 4(c) call a function with argument vv

	
	return 0;
}
