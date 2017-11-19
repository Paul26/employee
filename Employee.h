#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <string>
#include <iostream>

using namespace std;

#include "Date.h"
#include "Address.h"

class Employee
{
	private:
		Date empDate;  
		Address* empAddress;  
		string name;


	public:
		Employee(string a_name, int a_year, int a_month, int a_day) 
			: name(a_name), empDate(a_year, a_month, a_day), empAddress(NULL) {}  

		~Employee()
		{
			if (empAddress != NULL)
			{
				delete empAddress;
			}
		}

		void setAddress(string a_street, string a_city)
		{
			if (empAddress != NULL)
			{
				delete empAddress;
			}
			empAddress = new Address(a_street, a_city);
		}

		void display()
		{
			cout << "Employee: " << name << endl;
			empDate.display();
			empAddress->display();
		}
		
		friend ostream& operator<<(ostream& out, Employee& me)
		{
			out << me.name << " " << me.empDate << " " << *me.empAddress << endl;
			return out;
		}
};

#endif 
