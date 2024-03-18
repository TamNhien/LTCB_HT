#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double pi = 3.14159;
    double r;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> r;

    double chuvi = 2 * pi * r;
    double dientich = pi * pow(r, 2);

    cout << "Chu vi cua hinh tron la: " << chuvi << endl;
    cout << "Dien tich cua hinh tron la: " << dientich << endl;

    return 0;
}
