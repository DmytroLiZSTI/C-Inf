#include <iostream>

#include <string> /// to_string

using namespace std;

int main (int argc, char const * argv[])

{

    cout << "Podaj liczbe w syst. dziesięntnym: " << endl;

    int liczbaDzies;

    cin >> liczbaDzies;

    cout << "Podaj system na który chcesz: " << endl;

    int syst;

    cin >> syst;

    string wynik = "";

    while (liczbaDzies > 0)
    {
        int r = liczbaDzies % syst;
        liczbaDzies = liczbaDzies / syst;
        wynik = to_string(r)+wynik;
    }

    cout << wynik << endl;
    

return 0;



}