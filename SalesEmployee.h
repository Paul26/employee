#ifndef _SALESEMPLOYEE_H_
#define _SALESEMPLOYEE_H_

#include <iostream>

using namespace std;

#include "SalariedEmployee.h"

class SalesEmployee : public SalariedEmployee
{
	private:
		double commission;
		double sales;

	public:
		SalesEmployee(string a_name, int a_year, int a_month, int a_day, double a_salary, double a_commission, double a_sales)
			: SalariedEmployee(a_name, a_year, a_month, a_day, a_salary), commission(a_commission), sales(a_sales) {}

		void display()
		{
			SalariedEmployee::display();
		}
		
		friend ostream& operator<<(ostream& out, SalesEmployee& me)
		{
			out << (SalariedEmployee &)me << " Commission: " << me.commission << " Sales: " << me.sales << endl;
			return out;
		}
};

#endif 

