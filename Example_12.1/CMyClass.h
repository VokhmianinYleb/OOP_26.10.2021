//CMyClass.h
// оголошення класу
class CMyClass
{
	static int d; // статичний член даних - тільки оголошення
public:
	CMyClass(void); // конструктор
	~CMyClass(void); // деструктор
	// методи доступу до статичного члена даних
	int Get(void) { return d; }
	void Set(int nd) { d = nd; }
};
