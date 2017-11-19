#ifndef _SALARIEDEMPLOYEE_H_
#define _SALARIEDEMPLOYEE_H_

#include <string>
#include <iostream>

using namespace std;

#include "Employee.h"

class SalariedEmployee : public Employee
{
	private:
		double salary;

	public:
		SalariedEmployee(string a_name, int a_year, int a_month, int a_day, double a_salary) 
			: Employee(a_name, a_year, a_month, a_day), salary(a_salary) {}

		void display()
		{
			Employee::display();
		}

		friend ostream& operator<<(ostream& out, SalariedEmployee& me)
		{
			out << (Employee &)me << " Salary: " << me.salary << endl;
			return out;
		}
};

#endif

