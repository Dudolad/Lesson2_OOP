#include <iostream>
#include "Medicine.h"
using namespace std;

int main()
{
    Medicine a("Aspiryn", "pills", 20.99);
    a.showInfo();
    cout << endl;

    cout << "--------------------\n";
    Medicine b = a;
    b.setTitle("Aspiryn Forte");
    b.showInfo();

    a.showInfo();
    cout << "--------------------\n";
    Medicine c("Nurofen", "syrope", 199.99);

    a = c;

    c.showInfo();
    a.showInfo();

    return 0;
}

