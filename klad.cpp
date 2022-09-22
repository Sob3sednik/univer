#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    long long n, z, dir;
    long long  x = 0, y = 0, ne = 0, se = 0;
    double dx, dy;
 
    cin >> n;
    while(n--) {
        cin >> dir >> z;
        switch (dir) {
        case 1: y+=z; break;
        case 2: ne+=z; break;
        case 3: x+=z; break;
        case 4: se+=z; break;
        case 5: y-=z; break;
        case 6: ne-=z; break;
        case 7: x-=z; break;
        case 8: se-=z; break;
 
        }
    }
    dx = x + (ne + se)*M_SQRT1_2;
    dy = y + (ne - se)*M_SQRT1_2;
    cout << fixed << setprecision(3) << dx << " " << dy;
    return 0;
}
