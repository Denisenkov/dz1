﻿// dz1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "hht.h"
int main()
{/*
   mcom();
 //требуется привязать файл в функ.:void mcom;структура файла: 1 строка - колво комп. чисел;2 - в строчку через пробел реал. части числа z; 3- мним.  
 
 */
    comp a;
    cin >> a;
    cout << a << "\n";
    comp b(1, 0);

    cout << "a+b = " << a + b << "\n";
    cout << "a*b = " << a * b << "\n";
    cout << "a/b-b = " << a / b - b << "\n";

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.