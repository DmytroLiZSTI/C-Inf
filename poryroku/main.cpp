/// програма для окресления времени года из даты

#include <iostream>

/// Получение времени года из даты от пользователя
using namespace std;

int main(int argc, char const * arvg[])
{

    short day, month, year;
    /// short это тип данных для целых чисел малого диапазона
    /// переменные можна объявлять через запятую

    cout << "Podaj datę : dzień miesiąc rok - odzielone spacją";
    cin >> day >> month >> year;

    /// Весна од 21 марта(3) по 20 июня(6)
    /// Лето од 21 июня(6) по 22 сентября(9)
    /// Осень од 23 сентября(9) по 20 декабря(12)
    /// Зима од 21 декабря(12) по 20 марта(3)

    if ((month == 3 && day >= 21) || (month > 3 && month < 6) || (month == 6 && day <= 20))
        cout << "Wiosna";
    else if ((month == 6 && day >= 21) || (month > 6 && month < 9) || (month == 9 && day <= 22))
        cout << "Lato";
    else if ((month == 9 && day >= 23) || (month > 9 && month < 12) || (month == 12 && day <= 20))
        cout << "Jesień";
    else
        cout << "Zima";

    /// Выскостный год делится на 4, но не делится на 100, или делится на 400 без остатка
    /// % - оператор взятия остатка от деления

    if((year% 4 == 0) && (year % 100 == 0))
        cout << "Rok jest przestępny";
    else
        cout << "Rok nie jest przestępny";

    cout << "Wprowadż dane";
    string dane;
    cin >> dane;
    /// string это тип данных для строк текста например "Hello World" "1234"
    /// cin >> dane;  позволяет ввести строку текста с клавиатуры и сохранить её в переменную dane

    /// instrukcje iteracyjne это инструкции которые позволяют повторять выполнение блока кода несколько раз
    /// for - цикл с параметром

    /// for(int i = 0; i < 5; i++)   цикл выполнится 5 раз
    ///     cout << dane << endl;    endl - это символ перевода строки
    /// переменная i существует только внутри цикла for и не доступна вне его

    /// ilość małych liter w wprowadzonej danej "123#Marek" -> 1|2|3|#|M|a|r|e|k|
    /// indeksy znaków w stringu, у каждого знака есть свой индекс, начиная с 0
    ///  1 | 2 | 3 | # | M | a | r | e | k | 
    ///  0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |
    /// len(dane) = 9 длина строки это количество символов в строке
    /// len() - функция которая возвращает длину строки 

    int litery = 0; // zmienna do zliczania małych liter

    for(int i = 0; i < dane.length(); i++) // цикл выполнится столько раз сколько символов в строке
    {

        if(dane[i] >= 'a' && dane[i] <= 'z') // каждая буква имеет свой код в таблице ASCII
        /// проверка что символ с индексом i является маленькой буквой 
        /// '' - обозначение символа 1 символ
        /// " " - обозначение строки нескольких символов

        litery++; // увеличиваем счетчик маленьких букв на 1
            

    }

    cout << "Ilość małych liter w wprowadzonej danej: " << litery;

    return 0;
}