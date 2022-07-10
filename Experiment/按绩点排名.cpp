#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
private:
	int i, j, k, n;
	int classroom, subject, number;
	double GPA, sum, ave[10];
	char name[50], credit[10], score[10];
public:
	void inputdata();
	void calculate();
	void rank();
	void outputdata();
};

void Student::inputdata()
{
	cin >> classroom;
	for (i = 1;i <= classroom;i++)
	{
		cin >> subject;
		for (j = 0;j < subject;j++)
			cin >> credit[j];
		cin >> number;
		for (k = 0;k < number;k++)
		{
			cin >> name[k];
			for (j = 0;j < subject;j++)
				cin >> score[j];
		}
	}
	cout << endl;
}

void Student::calculate()
{
	for (j = 0, sum = 0;j < subject;j++)
	{
		if (score[j] >= 60)
		{
			GPA = (score[j] - 50) / 10 * credit[j];
			sum = sum + GPA;
		}
	}
	ave[j] = sum / 10;
}

void Student::rank()
{
	for (j = 0;j < subject;j++)
	{
		for (n = j + 1;n < subject;n++)
		{
			int temp;
			temp = ave[j];
			ave[j] = ave[n];
			ave[n] = temp;
		}
	}
}

void Student::outputdata()
{
	for (i = 1;i <= classroom;i++)
	{
		cout << "class " << i << ":" << endl;
		for (k = 0;k < number;k++)
			cout << setiosflags(ios::left) << setw(10) << name[k] << ave[k] << endl;
	}
}

int main()
{
	Student s;
	s.inputdata();
	s.calculate();
	s.rank();
	s.outputdata();
	return 0;
}
