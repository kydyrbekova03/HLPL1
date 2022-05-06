#include "std_lib_facilities.h"

template<typename T> //drill 1

  struct S
  {
  private: 
    T val; 
    
  public:
    S()
    {
      val = 1;
    }
    
    S(T v2)
    {
     val = v2;
    }
  
   T get();
   /*{ return val; }*/
  
  const T get() const;
  void operator=(const T&); //get outside

  /*
  void set(T v3) //chapter 19 drill 9
  {
    val == v3;
  }
  */
};

template<typename T>
T S<T>::get() //chapter 19 drill 6
{
  return val;
}

template<typename T>
const T S<T> :: get() const //chapter 19 drill 11
{
  return val; 
}

template<typename T> // 19 chapter 10 drill
void S<T>::operator = (const T& v3)
{
   val = v3;
}

template<typename T> 
void read_val(T& v) //19 chapter 12 drill
{
  cin >> v;
}


int main()
{

S<int> intK(7);
S<char> charK('A');
S<double> doubleK(7.7);
S<string> stringK("Kani");
S<vector<int>> vecK({10, 20, 30});

/* cout << intK.val << endl;
cout << charK.val << endl;
cout << intK.val << endl;
cout << charK.val << endl;
cout << intK.val << ' ';

for(int i : vecK.val)
cout << i << endl;*/ //old one

cout << intK.get() << endl;
cout << charK.get() << endl;
cout << doubleK.get() << endl;
cout << stringK.get() << endl;

for(int i : vecK.get())
cout << i << ' ';

int intN; //19, drill 13
read_val(intN);
S<int> int1K(intN);

double dblK;
read_val(dblK);
S<double> double1(dblK);

char char1;
read_val(char1);
S<char> charNK(char1);

cout << int1K.get() << endl;
cout << double1.get() << endl;
cout << charNK.get() << endl;

return 0;
}
