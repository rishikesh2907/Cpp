#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    float x = 455;

    // Using reference
    float &y = x;
    y = 500.6753;  // Modify y
    cout <<fixed<<setprecision(2)<<"x (via reference): " << x << endl;  // x is also updated

    // Without reference
    float z = x;
    z = 600;  // Modify z
    cout << "x (no reference): " << x << endl;  // x remains unchanged
    cout << "z: " << z << endl;  // z is independent

    return 0;
}
