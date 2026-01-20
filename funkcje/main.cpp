#include <iostream>

using namespace std;

/// Функции пишым тут

/// Сначяло пишым тип данных, на пример инт
/// Потом название
/// потом сколько параметров

/*

<typ dannych> <nazwa> (<lista parametrow>){
<kod>
}

*/

int dodaj(int a, int b);

int dodaj (int a , int b)
{
    int wynik = a+b;
    return wynik;
}

int dodaj (double a , double b)
{
    int wynik = a+b;
    return wynik;
}

/// когда функция читает данные она выбирает ту функцыю которая будет ей лучше
/// 2 Функции могут быть с одинаковым именем но с разными типами данных для использования

void wypiszpowitanie(){ /// void Не возвращяет вартость (Без ретерн)
    cout << "Hejka" << endl;
}



int main(int argc, char const * argv[])
{

    /// Функции используються для групирирования кода который используеться много раз в коде
    /// Для того чтобы не писать тот-же самий код много раз
    /// Также используються для того чтобы сщитать что-то

    int a = 2;
    int b = 2;
    int c = dodaj(a,b);

    cout << c << endl;
    cout << dodaj(20,20) << endl;

    return 0;
}