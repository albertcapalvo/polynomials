#include <polynomials.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


Polynomial::Polynomial(){
comp={0,0};
}

Polynomial::Polynomial(vector<double> inp){
comp=inp;
}




Polynomial::Polynomial(const Polynomial &inp){
comp=inp.comp;
}




Polynomial::~Polynomial(){
}


ostream& operator<<(ostream &os, const Polynomial &p){
 for(int i=0;i<p.comp.size(); i++)
 {
  if (p.comp[i]>0.0000000001)
     {

      os<< p.comp[i]<<"x^"<<i ;

      if (i<p.comp.size()-1)
      {
          os<<" + ";
      }
     }
 }
 return os;
}

void Polynomial::setcoefs(const vector<double>& a)
{
comp=a;
}

double Polynomial::getcoef(const int& a)
{
return comp[a];
}


double Polynomial::eval(const double& a)
{
    double res;
    for(int i=0;i<comp.size(); i++)
    {
        res=res+comp[1]*pow(a,i);
     }
return res;
}


Polynomial operator+(const Polynomial &p1, const Polynomial &p2)
{
int m=max(p1.comp.size(),p2.comp.size()) ;
// improvement to do: split the for into 2, one for the indexes in common
// and another for the expansion
vector<double> p3(m);
for(int i=0;i<m; i++)
  {
p3[i]= p1.comp[i]+p2.comp[i];
 }
 return Polynomial(p3);
}







Polynomial operator-(const Polynomial &p1, const Polynomial &p2)
{
int m=max(p1.comp.size(),p2.comp.size()) ;
// improvement to do: split the for into 2, one for the indexes in common
// and another for the expansion
vector<double> p3(m);
for(int i=0;i<m; i++)
  {
p3[i]= p1.comp[i]-p2.comp[i];
 }
 return Polynomial(p3);
}




Polynomial operator*(const Polynomial &p1, const Polynomial &p2)
{
int m=max(p1.comp.size(),p2.comp.size()) ;
// improvement to do: split the for into 2, one for the indexes in common
// and another for the expansion
vector<double> p3(m);
for(int i=0;i<m; i++)
  {
p3[i]= p1.comp[i]*p2.comp[i];
 }
 return Polynomial(p3);
}
