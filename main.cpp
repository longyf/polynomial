#include <iostream>
#include "Polynomial.h"
using namespace std;

int main() {
/*	const int length1=3;
	double a[length1]={1,0.5,0.8};
	double x1=2;
	cout<<poly1(a, length1, x1)<<endl;
	cout<<poly2(a, length1, x1)<<endl;*/

	const int length2=1;
	double b[length2]={2};
	double x2=1;
	cout<<poly1(b, length2, x2)<<endl;
	cout<<poly2(b, length2, x2)<<endl;

/*	const int length3=2;
	double *c=nullptr;
	double x3=1;
	cout<<poly1(c, length3, x3)<<endl;
	cout<<poly2(c, length3, x3)<<endl;*/

	return 0;
}
