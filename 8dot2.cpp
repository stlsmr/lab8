#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"RU");
    char a, b;
    cout << "Напишите программу, которая позволяет пользователю ввести в консоли\n"
            "латинскую букву нижнего регистра, переводит её в верхний регистр и результат\n"
            "выводит в консоль.\n";
    cout << "Введите латинскую букву нижнего регистра: ";
    cin >> a;
    b = toupper(a); //функция заменяет буквы нижнего региста на буквы верхнего регистра
    cout << "Ваша буква верхнего регистра - " << b;
    return 0;
}