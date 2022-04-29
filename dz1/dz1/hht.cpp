#include "hht.h"
complex complex::sumc(complex a) {
	complex z;
	z.r = r + a.r;
	z.m = m + a.m;
	return z;
}
complex complex::proc(complex a) {
	complex z;
	z.r = r * a.r - m * a.m;
	z.m = r * a.m + m * a.r;
	return z;
}
complex complex::chac(complex a) {
	complex z;
	a.m = -a.m;
	z = this->proc(a);
	z.r = z.r / (a.r * a.r + a.m * a.m);
	z.m = z.m / (a.r * a.r + a.m * a.m);
	return z;
}
complex complex::umnc(double a) {
	complex z;
	z.r = r * a;
	z.m = m * a;
	return z;
}
double complex::modc() {
	double z;
	z = sqrt(r * r + m * m);
	return z;
}
void complex::cinc() {
	cout << "vvedite real i im chasti chisla z\n";
	cin >> r;
	cin >> m;
}
void complex::coutc() {
	cout << r << setw(6);
	if (m >= 0) cout << "+" << m << "i\n" << setw(6);
	if (m < 0) cout << m << "i\n" << setw(6);
}
void mcom() {
	ifstream f("C:\\Users\\mirea\\source\\repos\\t.txt");
	int n, j = 0;
	double s = -1;
	f >> n;
	complex* a = new complex[n];
	double* b = new double[n];
	for (int i = 0; i < n; i++) f >> a[i].r;
	for (int i = 0; i < n; i++) f >> a[i].m;
	for (int i = 0; i < n; i++) {
		b[i] = a[i].modc();
		if (b[i] > s) { s = b[i]; j = i; }
	}
	a[j].coutc();
	delete[] a;
	delete[] b;
}
