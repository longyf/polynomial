#ifndef Polynomial_h
#define Polynomial_h
#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
T poly1(T coff[], int length, const T &x) {
	if (coff==nullptr||length<=0)
		throw invalid_argument("Pay attention to the input array");

	if (length==1) return coff[0];

	T sum=coff[0];
	T y=1;
	for (int i=1; i!=length; ++i) {
		y*=x;
		sum+=(coff[i]*y);
	}

	return sum;
}

template <class T>
T poly2(T coff[], int length, const T &x) {
    if (coff==nullptr||length<=0)
        throw invalid_argument("Pay attention to the input array");

	T sum=coff[length-1];
	for (int i=length-2; i!=-1; --i) {
		sum=(x*sum+coff[i]);
	}

	return sum;
}	
#endif
