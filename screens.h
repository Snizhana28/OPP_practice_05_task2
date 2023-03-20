#include "WorkerProvider.h"

class Screns
{
public :
	static void Home()
	{
		const int size = 3;
		Worker* workers = new Worker[size]
		{
			Worker("Madik Rostyslav", "Chief", 2012, 35000),
			Worker("Kovalchyk Vladyslav", "Programmer", 2015, 25000),
			Worker("Plahotniuk Darya", "HR manager", 2017, 10000)
		};

		for (size_t i = 0; i < size; i++) {
			cout << "All workers" << endl;
			cout << "Surname Name: " << workers[i].get_surname_name() << endl;
			cout << "Position: " << workers[i].get_position() << endl;
			cout << "Year of employment: " << workers[i].get_year_of_employment() << endl;
			cout << "Salary: " << workers[i].get_salary() << endl;
			cout << endl;
		}

		cout << "Output:"
			"\n1 - a list of employees whose work experience at this enterprise exceeds the specified number of years"
			"\n2 - a list of employees whose salary exceeds the specified"
			"\n3 - a list of employees who hold a given position" << endl;
		int num = 0;
		cout << "Enter a number : " << endl;
		cin >> num;

		switch (num)
		{
		case 1:
			WorkerProvider::Print_givenMin_experience(workers, size);
			break;
		case 2:
			WorkerProvider::Print_givenMin_salary(workers, size);
			break;
		case 3:
			WorkerProvider::Print_givenPosition(workers, size);
			break;
		default: cout << "Error";
			break;
		}
		delete[] workers;
	}
};
