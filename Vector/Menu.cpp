#include"Menu.h"
#include"Vector.h"

void Menu()
{
	cout << "=================MENU================\n";
	cout << " Xin moi ban chon chuc nang: " << endl;
	cout << "1: Tim cong thuc da thuc toi thieu cua ham bool" << endl;//khong lam duoc
	cout << "2: Tinh tong 2 vector: " << endl;
	cout << "3: Tinh tich 1 vector voi mot so" << endl;
	cout << "4: Tim dinh thuc cua ma tran" << endl;
	cout << "5: Tim nghich dao cua ma tran" << endl;
	cout << "6: Tinh tich cua hai ma tran" << endl;
	cout << "7: Tim hang cua ma tran" << endl;
	cout << "8: Tim nghiem he phuong trinh tuyen tinh" << endl;
	cout << "9: De thoat ra exit: " << endl;
}
int ChonMenu()
{
	int n = 0;
	cin >> n;//chuc nang can chon
	if (n > 0 || n < 10)//dieu kien kiem tra
	{
		return n;
	}
	else
		return ChonMenu();//de quy khi sai
}
void XuLyMenu()
{
	int chon = ChonMenu();//khoi tao tham so chon menu
	Vector Veca;
	Vector Vecb;
	Vector Vecc;
	int d;
		switch (chon)
		{
		case 1:
			break;
		case 2:

			Veca.nhap();

			cout << "Vector ban vua nhap la: ";

			Veca.xuat();

			Vecb.nhap();

			cout << "Vector ban vua nhap la: ";

			Vecb.xuat();
			cout << "Tong cua 2 vecto la: ";
			(Veca + Vecb) .xuat();
			break;
		case 3:
			Vecc.nhap();
			cout << "Vector ban vua nhap la: ";
			Vecc.xuat();
			cout << "Nhap vao so can nhan: ";
			cin >> d;
			cout << "\nKet qua nhan; ";
			(Vecc * d).xuat();
			Vecc.~Vector();
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			cout << "Thoat" << endl;
			exit(1);
			break;
		}
}
