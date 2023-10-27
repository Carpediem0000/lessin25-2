#include "Adapter.h"

int Adapter::counter = 123;
int main()
{
    /*cout << "PI: " << MyMath::PI() << endl;
    cout << "+: " << MyMath::add(1, 1) << endl;
    cout << "-: " << MyMath::sub(4, 1) << endl;
    cout << "*: " << MyMath::mult(4, 2) << endl;
    cout << "/: " << MyMath::div(4, 2) << endl;
    cout << "Rand: " << MyMath::random(1, 10) << endl;
    cout << "Abs: " << MyMath::abs(-17) << endl;
    cout << "ceil: " << MyMath::round(17.9) << endl;
    cout << "floor: " << MyMath::floor(17.9) << endl;
    cout << "min: " << MyMath::min(4, 2) << endl;
    cout << "max: " << MyMath::max(4, 2) << endl;
    cout << "pow: " << MyMath::pow(2, 3) << endl;*/

    Adapter a("USB", 100, 100);
    Adapter b("USB3.0", 200, 200);
    Adapter c("PSI", 1234, 54623);
    a.showInfo();
    cout << "===================\n";
    b.showInfo();
    cout << "===================\n";
    c.showInfo();

}