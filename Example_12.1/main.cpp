//main.cpp
#include <iostream>
#include "CMyClass.h"
using namespace std;

int main() {
	// використання статичного члена класу
	CMyClass MC1; // об'єкт (екземпляр) класу 1
	CMyClass MC2; // об'єкт (екземпляр) класу 2
	MC2.Set(25);
	int t;
	t = MC1.Get(); // t = 25 - обидва об'єкти мають доступ до однієї і тієї ділянки пам'яті
	cout << t << endl;
	t = MC2.Get(); // t = 25 - обидва об'єкти мають доступ до однієї і тієї ділянки пам'яті
	cout << t << endl;
	system("pause");
	return 0;
}
