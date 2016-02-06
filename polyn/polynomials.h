//#ifndef POLYMIALS_H
//#define POLYMIALS_H

//#endif // POLYMIALS_H
#include <vector>
#include <iostream>


typedef double Real;
typedef int Int;
using namespace std;

class Polynomial
{
public:
vector<double> comp;
Polynomial();
Polynomial(vector<double>);
~Polynomial();
friend ostream& operator<<(ostream&, const Polynomial&);
friend Polynomial operator+(const Polynomial&, const Polynomial&);


//private:
//vector<double> comp;
};
