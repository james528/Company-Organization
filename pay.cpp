#include <iostream>
#include <vector>
#include <string>
#include <fstream> 
#include "person.h"

using namespace std;

int main()
{
	const int n = 20;
	vector<Person> employees;
	vector<string> companyNames;
	Person pi;
	string input = "input.txt",
		intel = "Intel.txt",
		boeing = "Boeing.txt",
		douglas = "Douglas.txt",
		healthTech = "HeathTech.txt",
		raytheon = "Raytheon.txt";

	ifstream infile;
	ofstream outfile;

	companyNames.push_back("Douglas");
	companyNames.push_back("Boeing");
	companyNames.push_back("Intel");
	companyNames.push_back("HealthTech");
	companyNames.push_back("Raytheon");

	infile.open(input);
	string line, first, last, comp;
	int id;
	float pay, work;
	while (!infile.eof())
	{
		infile >> first >> last >> id >> comp >> pay >> work;
		pi.setFirstName(first);
		pi.setLastName(last);
		pi.setEmployeeId(id);
		pi.setCompanyName(comp);
		pi.setPayRate(pay);
		pi.setHoursWorked(work);

		employees.push_back(pi);

		if (infile.eof())
			break;
	}

	infile.close();

	string f, l, c;
	int d;
	float p;
	for (int j = 0; j < companyNames.size(); j++)
	{
		if (companyNames[j] == "Intel")
		{
			outfile.open(intel);
			for (int j = 0; j < employees.size(); j++)
			{
				if (employees.at(j).getCompanyName() == "Intel")
				{
					f = employees.at(j).fullName();
					outfile << f << " ";
					d = employees.at(j).getEmployeeId();
					outfile << d << " ";
					c = employees.at(j).getCompanyName();
					outfile << c << " ";
					p = employees.at(j).totalPay();
					outfile << p << endl;
				}
			}

			outfile.close();
		}

		else if (companyNames[j]== "Boeing")
		{
			outfile.open(boeing);

			for (int j = 0; j < employees.size(); j++)
			{
				if (employees.at(j).getCompanyName() == "Boeing")
				{
					f = employees.at(j).fullName();
					outfile << f << " ";
					d = employees.at(j).getEmployeeId();
					outfile << d << " ";
					c = employees.at(j).getCompanyName();
					outfile << c << " ";
					p = employees.at(j).totalPay();
					outfile << p << endl;
				}
			}


			outfile.close();
		}

		else if (companyNames[j] == "Raytheon")
		{
			outfile.open(raytheon);

			for (int j = 0; j < employees.size(); j++)
			{
				if (employees.at(j).getCompanyName() == "Raytheon")
				{
					f = employees.at(j).fullName();
					outfile << f << " ";
					d = employees.at(j).getEmployeeId();
					outfile << d << " ";
					c = employees.at(j).getCompanyName();
					outfile << c << " ";
					p = employees.at(j).totalPay();
					outfile << p << endl;
				}
			}


			outfile.close();
		}

		else if (companyNames[j] == "HealthTech")
		{
			outfile.open(healthTech);

			for (int j = 0; j < employees.size(); j++)
			{
				if (employees.at(j).getCompanyName() == "HealthTech")
				{
					f = employees.at(j).fullName();
					outfile << f << " ";
					d = employees.at(j).getEmployeeId();
					outfile << d << " ";
					c = employees.at(j).getCompanyName();
					outfile << c << " ";
					p = employees.at(j).totalPay();
					outfile << p << endl;
				}
			}


			outfile.close();
		}

		else if (companyNames[j] == "Douglas")
		{
			outfile.open(douglas);

			for (int j = 0; j < employees.size(); j++)
			{
				if (employees.at(j).getCompanyName() == "Douglas")
				{
					f = employees.at(j).fullName();
					outfile << f << " ";
					d = employees.at(j).getEmployeeId();
					outfile << d << " ";
					c = employees.at(j).getCompanyName();
					outfile << c << " ";
					p = employees.at(j).totalPay();
					outfile << p << endl;
				}
			}

			outfile.close();
		}
	}

	system("pause");
	return 0;
}