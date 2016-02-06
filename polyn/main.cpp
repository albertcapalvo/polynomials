#include <iostream>
#include <polynomials.h>
#include <math.h>
#include <vector>

//using std::cout; using std::cin; using std::endl; using std::vector;

using namespace std;


int main()
{

Polynomial a ({2,1,0,1,0}) ;
Polynomial b ;
Polynomial c (a);

cout<<a<<endl;
cout<<a.deriv()<<endl;

cout<<endl;
cout<<endl;
cout<<endl;


cout<<a<<endl;
b.setcoefs({1,1,1,1});

cout<<b.getcoef(0)<<endl;
cout<<b<<endl;
cout<< b.eval(2)<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

cout<<b<<endl;
cout<<b*3<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

cout<<b<<endl;
cout<<b+3<<endl;


cout<<endl;

return 0;

}
