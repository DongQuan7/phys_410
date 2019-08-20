/* 
 * cf. M. Hjorth-Jensen, Computational Physics, University of Oslo (2015) 
 * http://www.mn.uio.no/fysikk/english/people/aca/mhjensen/ 
 * Ernest Yeung (I typed it up and made modifications)
 * ernestyalumni@gmail.com
 * MIT License
 * cf. Chapter 3 Numerical differentiation and interpolation
 * 3.1 Numerical Differentiation
 * 3.1.1 The second derivative of exp(x)
 */
using namespace std;
#include <iostream>

// ever so important function declarations
void func(int, int* );

// begin main function
int main(int argc, char* argv[])
{
  int a;
  int *b;
  a = 10;
  b = new int[10];
  for( int i = 0; i < 10; i++) {
    b[i] = i;
  }
  cout << " This is b, originally. \n";
  for (int i = 0; i<10; i++){
    cout << " b[i] for i respectively is : " << b[i] << " , " << i << " \n";
  }

  func(a,b);

  cout << " This is b, altered by func. \n";
  for(int i = 0; i < 10; i++) {
    cout << " b[i] for i respectively is : " << b[i] << " , " << i << " \n";
  }

  cout << " This is a, altered by func. " << a << " \n";
  
  return 0;
} // end of main function
// definition of the function func
void func(int x, int *y)
{
  x += 7;
  *y += 10;
  y[6] += 10;
  return;
} // end function func



