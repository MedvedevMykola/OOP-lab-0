#include "stdafx.h"
#include "my_lab_0.h"
using namespace std;

struct m_setw
{
	m_setw(int i) : width(i) {}
	int width;
};

ostream& operator<< (ostream& stream, const m_setw& man1)
{
	stream.width(man1.width);
	return stream;
}

ostream& dolar(ostream& stream)
{
	stream << "$";
	return stream;
}

struct m_setfill
{
	m_setfill(char i) : func(i) {}
	char func;
};

ostream & operator<<(ostream & stream, const m_setfill& n)
{
	stream.fill(n.func);
	return stream;
}

void m_func()
{
	cout << "Example of my function setw,setfill, own dolar" << endl;
	cout << m_setw(10) << 100 << endl;
	cout << m_setfill('z') << m_setw(10) << 100 << endl;
	cout << dolar << 10 << endl;
}
