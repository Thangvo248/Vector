adasdasd#include<iostream>
using namespace std;
class Vector
{	
private:
	double* vec;
	int n;
public:

	Vector();//tao vecto
	void nhap();// dung de nhap vector
	void xuat();// dung de xuat vector
	~Vector();//ham huy
	Vector operator+(const Vector &a);//toan tu cong
	Vector operator*(const double& a);//toan tu nhan voi mot so
};
