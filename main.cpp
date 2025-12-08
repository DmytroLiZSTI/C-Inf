#include <iostream>

#include <math.h>

using namespace std;

int main () 
{
    
    int x ;

    cin >> x;

    if(x == 0) {
        x = 2;
    } else if (x > 0)
    {
        x = x *x;
    } else {
        x = sqrt(2+x);
    }

    cout << x;

    int L = 25;
    int licz = ;

    for( int a=0; a>=25; a++) {
        if(a%3==0) {
            licz += 1;
        }
    }

    cout << licz;

    return 0;
}