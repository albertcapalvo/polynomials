#include <polynomials.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


Polynomial::Polynomial()
{
comp={0,0};

}

Polynomial::Polynomial(vector<double> inp)
{
comp=inp;

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

Polynomial operator+(const Polynomial &p1, const Polynomial &p2)
{
int m=max(p1.comp.size(),p2.comp.size()) ;
vector<double> p3(m);

for(int i=0;i<m; i++)
  {
p3[i]= p1.comp[i]+p2.comp[i];
 }

 return Polynomial(p3);
}
