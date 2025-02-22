#include <iostream>
#define perimetr ((a) + (b) + (c)) //1
#define PI 3.14
#define circle (2 * PI * (r)) //2
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите 3 стороны треугольника" << endl;
	double a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "Введите радиус круга" << endl;
	double r;
	cin >> r;
	cout << "Периметр треугольника: " << a + b + c << endl;
	cout << "Длина окружности: " << 2 * PI * r;
}
