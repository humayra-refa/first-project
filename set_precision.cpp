#include <iostream>
#include <iomanip>
using namespace std;

int main()   // ❗ You forgot main()
{
    double d = 23.45676;
    cout << fixed << setprecision(2) << d << endl;  // ❗ setprecision misspelled
    return 0;  // ❗ return o → should be 0
}
