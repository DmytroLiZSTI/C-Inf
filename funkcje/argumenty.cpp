#include <iostream>

using namespace std;

/// отправление аргументов в функции с помощью значений


void wypisz(string wiadomosc) {
    cout << " OO>" << wiadomosc << endl;
    wiadomosc = "ma tez kota";
}

/// Простые и безопастныею отсутствует aliasingu
/// Хорош для простых типов и малых обектов
/// kosztowne kopiowanie dla dużych obiektó (vector, array, list) -> dodatkowa alokacja pamięci
/// Нельзя вернуть ответ, только через return (zmiana wartości przekazanej do funkcji zmiennej nie wpływa na wartość zmiennej poza nią)

// przeazywanie argumentów przez referencję (T&)

void inkrementacja (int &x){
    x = x +1;
}

/// &x - tworzy referencje na zmienna przekazaną w argumencie czyli inna nazwa na tą zamą zmienną
/// С помощь этого знака можно влиять на переменные ВНЕ функции
/// Отсутствие копирование но,
/// возможность изменения значения в полученном аргументе
/// Можно использовать для возщвращения ответа вместо return
/// Не уверенны что переменная получинная от функции будет изменена

/// przekazywanie przez referencję do stałej

void print(const string &wiadomosc /*referencja na string*/){
    cout << wiadomosc << endl;
    /// wiadomosc = "KONIEC" Изменения не будет, так как переменная доступна только для прочтения
}

/// минимальное (нулевое) копирование 
/// гарантия того что не будет модификации переменной которую передали функции

/// przekazywanie przez wskażnik

void wyzerowanie (int *p /*wskażnik*/) {
    *p = 0;
}

/// dobra praktyka gdy operyjemy na strukturach dynamicznych i tablicah
///problem z nullptr = przekazanie pustego wskażnika
///bardzo zawansowane podejście

///wartość domyślne

int oblicz (int a, int b = 0 /*Значение по умолчанию, если ничего не получит*/){
    int suma;
    suma = a + b;
    return suma;
} 

/// uwaga na przeciązenia
/// to przeciążenie wyklucza wartość domyślną

// int oblicz (int a){
//     int suma;
//     suma = a + 20;
//     return suma;
// }



int main (int argc, char const * argv[])
{
    string slowo = "ala ma kota";
    wypisz(slowo);
    cout << slowo << endl;
    wypisz("nowa wiadomosc");


    int liczba = 15;

    inkrementacja(liczba);
    /// Тееперь пременная число стала на 1 больше во ВСЕМ коде, а не только в функции
    cout << liczba << endl;
    /// inkrementacja(15) - ошыбка, потомучто эта функцыя ожыдает именно переменную


    cout << oblicz(liczba, 20) << endl;
    cout << oblicz(liczba) << endl;


    return 0;
}
