#include"Vector.h"
Vector::Vector()
{
	//tao gia tri mac dinh
	n = NULL;
	vec = NULL;
}
void Vector::nhap()
{
	cout << "Nhap vao so luong phan tu:";
	cin >> n;
	vec = new double[n];// cap phat
	for (int i = 0; i < n; i++)// vong lap de nhap
		cin >> vec[i];
}
void Vector::xuat()
{
	for (int i = 0; i < n; i++)//vong lap de xuat
		cout <<vec[i]<< " ";
	cout << endl;
}
Vector::~Vector()
{
	this->n = 0;
	this->vec = NULL;
}
Vector Vector::operator+(const Vector &a)
{
	 if (this->n != a.n)//kiem tra vecto cung cap
	 { 
		 cout << "2 Vector khong cung cap, khong the cong duoc.";
		 return a;
	 } 
	 else
	 {
		 for (int i = 0; i < a.n; i++)// vong lap cong 2 vector
			 a.vec[i] += this->vec[i];
	 }
	return a;
}

Vector Vector::operator*(const double& k)
{
	Vector a = *this;//tao vecto a = con tro this
	for (int i = 0; i < a.n; i++)//vong lap nhan vector voi mot so
		a.vec[i] = this->vec[i] * k;
	return a;
}	