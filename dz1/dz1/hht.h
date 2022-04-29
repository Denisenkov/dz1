#ifndef HHT_H
#define HHT_H
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


struct complex {
	double r;
	double m;
	complex sumc(complex);
	complex proc(complex);
	complex chac(complex);
	complex umnc(double);
	double modc();
	void cinc();
	void coutc();
};
void mcom();
class comp {
	double r;
	double m;
public:
	comp(double a, double b) :r(a), m(b) {
		cout << "constr\n";
	}
	comp() {
		r = 0;
		m = 0;
		cout << "constr\n";
	}
	comp(const comp& d) {
		r = d.r;
		m = d.m;
		cout << "copy\n";
	}
	~comp() {
		cout << "destr\n";
	}
	comp operator+(const comp  a) {
		return comp(r + a.r, m + a.m);
	}
	comp operator-(const comp  a) {
		return comp(r - a.r, m - a.m);
	}
	comp operator*(const comp  a) {
		return comp(r * a.r - m * a.m, r * a.m + m * a.r);
	}
	comp operator*(double a) {
		return comp(r * a, m * a);
	}
	comp operator/(double a) {
		return comp(r / a, m / a);
	}
	comp operator/(const comp a) {
		double d;
		d = a.r * a.r + a.m * a.m;
		return comp((r * a.r + m * a.m) / d, (-r * a.m + m * a.r) / d);
	}


	friend std::istream& operator>>(std::istream& in, comp& a) {

		cout << "vvedite real i im chasti chisla z\n";
		in >> a.r;
		in >> a.m;
		return in;
	}
	friend std::ostream& operator<<(std::ostream& out, const comp& a) {
		cout << a.r << setw(6);
		if (a.m >= 0) cout << "+" << a.m << "i\n";
		if (a.m < 0) cout << a.m << "i\n";
		return out;
	}
};
#endif
