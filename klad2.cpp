#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x, y;
    int n, v, l;
    x = y = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> v >> l;
        double s = l / sqrt(2);
        
        if (v == 1)
            y += l;
            
        if (v == 2){
            x += s;
            y += s;
        }
            
        if (v == 3)
            x += l;
            
        if (v == 4){
            x += s;
            y -= s;
        }    
            
        if (v == 5)
            y -= l;
            
        if (v == 6){
            x -= s;
            y -= s;
        }
            
        if (v == 7)
            x -= l;
            
        if (v == 8){
            x -= s;
            y += s;
        }
        
        cout.precision(3);
        cout << fixed << x << ' ' << y << endl;
            
    return 0;
}
