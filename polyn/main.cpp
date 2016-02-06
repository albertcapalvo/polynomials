#include <iostream>
#include <polynomials.h>
#include <math.h>
#include <vector>

//using std::cout; using std::cin; using std::endl; using std::vector;

using namespace std;


int main()
{

Polynomial a ({0,1,0,1,0}) ;
Polynomial b ;
Polynomial c (a);

b.setcoefs({1,1,1,1});

cout<<b.getcoef(0)<<endl;
cout<<b<<endl;
cout<< b.eval(2)<<endl;




cout<<endl;

return 0;

}
