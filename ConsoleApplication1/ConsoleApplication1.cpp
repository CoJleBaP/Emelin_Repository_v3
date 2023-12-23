// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int VvestichisloA() {
    int nomer1;
	cout << "Enter the natural number A: ";
	cin >> nomer1;
	return nomer1;
}
int VvestichisloB() {
    int nomer2;
	cout << "Enter the natural number B: ";
	cin >> nomer2;
	return nomer2;
}
int ost(int x, int y) {
    return x % y;
}
int del(int y, int x) {
    int DEL = 0.1;
    DEL = x / y;
    return DEL;
}
int main()
{
	cout << "Enter 1 to enter the first number" << endl << "Enter 2 to enter the second number" << endl << "Enter 3 if you want to get the remainder from dividing A by B" << endl << "Enter 4 if you want to divide B into A" << endl << "Enter 0 to exit the program" << endl;
	int x = 0;
    int No1 = 0.1;
    int No2 = 0.1;
    do {
        cin >> x;
        if (x == 1) {
            No1 = VvestichisloA();
        }
        if (x == 2) {
            No2 = VvestichisloB();
        }
        switch (x)
        {
        case 1:
            continue;
        case 2:
            continue;
        case 3:
            cout << "remainder from dividing A by B: " << ost(No1, No1) << endl;
            continue;
        case 4:
            cout << "divide B into A: " << del(No1, No2) << endl;
            continue;
        case 0:
            return 0;
            break;
        default:
            cout << "Wrong choice" << endl;
            return 0;
        }
    } while (x < 5 or x>0);
	return 0;
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
