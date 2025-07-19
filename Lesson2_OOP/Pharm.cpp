#include "Pharm.h"

Pharm::Pharm()
{
	m_name = new char[10] {"Undefined"};

	m_size_medicines = 0;
	m_arr = nullptr;

}

Pharm::Pharm(const char* name)
{
	int size_name = strlen(name) + 1;
	m_name = new char[size_name];
	strcpy_s(m_name, size_name, name);

	m_size_medicines = 3;
	m_arr = new Medicine[3];

	m_arr[0] = Medicine("Aspiryn", "pills", 20.50);
	m_arr[1] = Medicine("Nurofen", "syrope", 200.55);
	m_arr[2] = Medicine("Doctor Mom", "syrope", 150.90);
}

Pharm::~Pharm()
{
	delete[] m_name;
	if (m_size_medicines > 0) delete[] m_arr;
}

void Pharm::showInfo() const
{
	cout << "\tPharm: " << m_name << endl;
	cout << "\tAmount of med: " << m_size_medicines << endl;
	for (size_t i = 0; i < m_size_medicines; i++)
	{
		m_arr[i].showInfo();
		cout << endl;
	}

}

void Pharm::addMedicine(Medicine obj)
{
	addItemBack(m_arr, m_size_medicines, obj);
}

void Pharm::sort_by_price()
{
	sort_if<Medicine>(m_arr, m_size_medicines, [](Medicine left, Medicine right) {
		return left.getPrice() < right.getPrice();
	});
}
