#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
	for(int i=0; i<n; i++)
		os << a[i] << endl;
//delete[] a;
}


int main ()
{
// question 1
int n = 7;
int* p1 = &n;
 
// question 2

cout << "p1: " << p1 << " " << " n: " << n << endl ;

// question 3

int arr_i [7] {1, 2, 4, 8, 16, 32, 64};
int* ka = arr_i;

// question 4
cout << ka << endl;
print_array (cout, ka, 7);


// question 5
int* p3 = ka;

// question 6
p1 = ka;

// question 7
p3 = ka;

// question 8
cout << "p1"  << ' ' << p1 <<" it points to " << *p1 << endl;  // p1 points to first value in the array
print_array (cout, ka, 7);

// question 10

int ten_i [10] {1, 2, 4, 8, 16, 32, 64, 128, 512};
ka = ten_i;

// question 11

int ten2_i [10] {1, 2, 4, 8, 16, 32, 64, 128, 512};
ka = ten2_i;

// question 12

	for (int i = 0; i<10; i++)
		ka[i] = p1[i];
		
		
// question 13

vector<int> v_ten_i{1, 2, 4, 8, 16, 32, 64, 128, 512};
	p1 = &v_ten_i[0];
	
vector<int> v_ten_i2 {1, 2, 4, 8, 16, 32, 64, 128, 512};
	ka = &v_ten_i2[0];
	

	for (int i = 0; i < 10; ++i)
		ka[i] = p1[i];

return 0;
}
