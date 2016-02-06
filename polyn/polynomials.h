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
Polynomial(const Polynomial&);
~Polynomial();
friend ostream& operator<<(ostream&, const Polynomial&);
friend Polynomial operator+(const Polynomial&, const Polynomial&);
friend Polynomial operator-(const Polynomial&, const Polynomial&);
friend Polynomial operator*(const Polynomial&, const Polynomial&);

void setcoefs(const vector<double>&);
double getcoef(const int&);
double eval(const double&);

//private:
//vector<double> comp;
};
