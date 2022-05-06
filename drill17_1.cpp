//drill 17 part 1
#include "std_lib_facilities.h"

//question 4
void print_array10(ostream& os, int* a)
{
	for(int i=0; i<10; i++)
		os << a[i] << endl;
delete[] a;  //question 9
	
}
//question 6
void print_array11(ostream& os, int* a)
{
	for(int i=0; i<11; i++)
		os << a[i] << endl;

delete[] a; //question 9
}

//question 7
void print_array(ostream& os, int* a, int n)
{
	for(int i=0; i<n; i++)
		os << a[i] << endl;
delete[] a;  //question 9
}


void printVector(vector<int*> v)
{

for (int i = 0; i < v.size(); ++i)
		cout << *v[i] << endl;
//delete v[i];


}

vector<int*> allocateVector(int n)
{
	vector<int*> temp;
	int counter = 100;
	for (int i = 0; i < n; ++i)
		temp.push_back(new int{counter++});
	
	return temp;
}


int main()
{
//question 1
int* val = new int[10];

        // Question 2
	for(int i=0; i<10; i++)
	cout << val[i] << endl;
	
	// Question 3
	delete[] val;
	
	// Question 4
	//print_array10(cout, ten_i);
	
	
	// Question 5
	int* val2_i = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	print_array10(cout, val2_i);
	//delete[] val2_i
	
	
	// Question 6
	int* num_i = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
	print_array11(cout, num_i);
	//delete[] num_i;
	
	// Question 8
	int* var_i = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
	print_array(cout, var_i, 20);
	//delete[] var_i ;
	
	// Question 10
	cout << "with Vector 10" << endl;
	vector<int*> v_val2_i = allocateVector(10);
	printVector(v_val2_i);
	
	cout << "with Vector 11" << endl;
	vector<int*> v_num_i = allocateVector(11);
	printVector(v_num_i);
	
	cout << "with Vector 20" << endl;
	vector<int*> v_var_i = allocateVector(20);
	printVector(v_var_i);
	
	

return 0;
}
