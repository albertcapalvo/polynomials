//#ifndef POLYMIALS_H
//#define POLYMIALS_H

//#endif // POLYMIALS_H
#include <vector>
#include <iostream>



typedef double Real;
typedef int Int;
using namespace std;
typedef unsigned int cont;
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
friend Polynomial operator+(const double&, const Polynomial&);
friend Polynomial operator+(const Polynomial&, const double&);


friend Polynomial operator-(const Polynomial&, const Polynomial&);
friend Polynomial operator-(const double&, const Polynomial&);
friend Polynomial operator-(const Polynomial&, const double&);



friend Polynomial operator*(const Polynomial&, const Polynomial&);
friend Polynomial operator*(const double&, const Polynomial&);
friend Polynomial operator*(const Polynomial&, const double&);

void setcoefs(const vector<double>&);
double getcoef(const int&);
double eval(const double&);

Polynomial deriv();

//private:
//vector<double> comp;
};
