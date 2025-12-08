#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char const * argv[]) {
    float x ;
    cout << "Podaj liczbe recz. x (-100, 100)";
    cin >> x ;

    float fx;

    if(x<0) {
        fx = x*x;
    } else if (x==0) {
        fx = 2;
     } else {
        fx = sqrt(2+x);
      }
    
    cout << "f(x) = " << fx << endl;

    int L;

    if(x>=0) {
        L = x;
    } else {
        L = -x;
    }

    int suma = 0;

    for(int i = 1; i <= L ; i++ ) {
        
        if (i%3 == 0) {
            cout << i << " " << endl;
            int ld = (i/10)%10;
            suma += ld;
        }
        cout << "Suma cyfr dziesiątek liczb podzielnych przez 3 to:" << suma << endl;
    }

    float y, yi, yil;

    yi = L/2.0;

    for(int i = 0; i < 100; i++){
        cout << "Pier("<<L<<") przyblizenie " << i << "= " << yi << endl;
        yil = 0.5 * (yi+(L/yi));
        yi = yil;
    }

    cout << "pier("<<L<<") przyblizenie 100" << "= " << yi << endl;

    return 0;
}