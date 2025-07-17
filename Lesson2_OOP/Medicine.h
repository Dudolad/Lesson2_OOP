#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Medicine
{
private:
	char* m_title;
	char* m_type;
	float m_price;
public:
	Medicine();
	Medicine(const char* title, const char* type, float price);
	~Medicine();

	void setTitle(const char* title);
	void setType(const char* type);
	void setPrice(float price);

	const char* getTitle()const;
	const char* getType()const;
	float getPrice()const;

	void showInfo()const;
};

