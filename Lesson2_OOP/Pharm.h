#pragma once
#include "Array_Template.h"
#include "Medicine.h"

class Pharm
{
	char* m_name;
	
	int m_size_medicines;
	Medicine* m_arr;
public:
	Pharm();
	Pharm(const char* name);
	~Pharm();

	void showInfo()const;
};

