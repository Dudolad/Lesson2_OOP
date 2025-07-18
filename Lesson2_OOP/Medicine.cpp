#include "Medicine.h"

Medicine::Medicine()
{
	m_title = new char[10] {"Undefined"};
	m_type = new char[10] {"Undefined"};
	m_price = 0;
}

Medicine::Medicine(const char* title, const char* type, float price)
{
	int size_title = strlen(title) + 1;
	m_title = new char[size_title];
	strcpy_s(m_title, size_title, title);

	int size_type = strlen(type) + 1;
	m_type = new char[size_type];
	strcpy_s(m_type, size_type, type);

	m_price = price;
}

Medicine::Medicine(const Medicine& obj)
{
	// Medicine b = a; => this = obj
	int size_title = strlen(obj.m_title) + 1;
	this->m_title = new char[size_title];
	strcpy_s(this->m_title, size_title, obj.m_title);

	int size_type = strlen(obj.m_type) + 1;
	this->m_type = new char[size_type];
	strcpy_s(this->m_type, size_type, obj.m_type);

	this->m_price = obj.m_price;

}

Medicine& Medicine::operator=(const Medicine& obj)
{
	int size_title = strlen(obj.m_title) + 1;
	this->m_title = new char[size_title];
	strcpy_s(this->m_title, size_title, obj.m_title);

	int size_type = strlen(obj.m_type) + 1;
	this->m_type = new char[size_type];
	strcpy_s(this->m_type, size_type, obj.m_type);

	this->m_price = obj.m_price;

	return *this;
}

Medicine::~Medicine()
{
	delete[] m_title;
	delete[] m_type;
}

void Medicine::setTitle(const char* title)
{
	if (strlen(title) > 3) {
		delete[] m_title;


		int size_title = strlen(title) + 1;
		m_title = new char[size_title];
		strcpy_s(m_title, size_title, title);
	}
}

void Medicine::setType(const char* type)
{
	if (strlen(type) > 3) {
		delete[] m_type;

		int size_type = strlen(type) + 1;
		m_type = new char[size_type];
		strcpy_s(m_type, size_type, type);
	}
}

void Medicine::setPrice(float price)
{
	if (price > 0) {
		m_price = price;
	}
}

const char* Medicine::getTitle() const
{
	return m_title;
}

const char* Medicine::getType() const
{
	return m_type;
}

float Medicine::getPrice() const
{
	return m_price;
}

void Medicine::showInfo() const
{
	cout << "Title: " << m_title << endl;
	cout << "Type: " << m_type << endl;
	cout << "Price: " << m_price << "UAH" << endl;
}
