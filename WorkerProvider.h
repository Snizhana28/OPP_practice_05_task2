#include "Worker.h"

class WorkerProvider
{
public :

	static void Print(Worker* obj)
	{
		cout << "Surname Name: " << obj->get_surname_name() << endl;
		cout << "Position: " << obj->get_position() << endl;
		cout << "Year of employment: " << obj->get_year_of_employment() << endl;
		cout << "Salary: " << obj->get_salary() << endl;
	}

	static void Print_givenMin_experience(Worker* obj, int size)
	{
		int current_year;
		cout << "Enter a current year : ";
		cin >> current_year;
		int min_experience;
		cout << "Enter a min experience : ";
		cin >> min_experience;
		cout << endl << "Workers with experience more than " << min_experience << " years:" << endl << endl;
		for (size_t i = 0; i < size; ++i)
		{
			int experience = current_year - obj[i].get_year_of_employment();
			if (experience >= min_experience) {
				cout << "All workers" << endl;
				cout << "Surname Name: " << obj[i].get_surname_name() << endl;
				cout << "Position: " << obj[i].get_position() << endl;
				cout << "Year of employment: " << obj[i].get_year_of_employment() << endl;
				cout << "Salary: " << obj[i].get_salary() << endl << endl;
				cout << " (" << experience << " years)" << endl;
			}
		}
	}

	static void Print_givenMin_salary(Worker* obj, int size)
	{
		int min_salary;
		cout << "Enter a min salary : ";
		cin >> min_salary;
		cout << endl << "Workers with experience more than " << min_salary << " salary:" << endl << endl;
		for (size_t i = 0; i < size; ++i)
		{
			if (obj[i].get_salary() >= min_salary)
			{
				cout << "All workers" << endl;
				cout << "Surname Name: " << obj[i].get_surname_name() << endl;
				cout << "Position: " << obj[i].get_position() << endl;
				cout << "Year of employment: " << obj[i].get_year_of_employment() << endl;
				cout << "Salary: " << obj[i].get_salary() << endl << endl;
			}
			cout << endl;
		}
	}

	static void Print_givenPosition(Worker* obj, int size)
	{
		string givenPosition;
		cout << "Enter given position: ";
		getline(cin, givenPosition);
		for (int i = 0; i < size; i++)
		{
			if (obj[i].get_position() == givenPosition)
			{
				cout << "All workers" << endl;
				cout << "Surname Name: " << obj[i].get_surname_name() << endl;
				cout << "Position: " << obj[i].get_position() << endl;
				cout << "Year of employment: " << obj[i].get_year_of_employment() << endl;
				cout << "Salary: " << obj[i].get_salary() << endl << endl;
			}
			cout << endl;
		}
	}
};
