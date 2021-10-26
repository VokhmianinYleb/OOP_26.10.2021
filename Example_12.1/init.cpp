//init.cpp
#include "CMyClass.h"
// визначення статичного члена даних за межами класу
int CMyClass::d; // виділяється пам’ять
// явно заданий конструктор за замовчуванням
CMyClass::CMyClass(void)
{
	d = 0;
}
// деструктор
CMyClass::~CMyClass(void)
{
}
