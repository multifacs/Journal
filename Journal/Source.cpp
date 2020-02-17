#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	string name;
	int group;
	int grade[10];
};

void fillStud(int n, Student *&mas)
{
	mas = new Student[n];

	for (int i = 0; i < n; i++)
	{
		cin >> mas[i].name >> mas[i].group;
	}
}

int main()
{
	string subject[5] = { "Math", "IT", "Eng", "Phys", "PE" };
	int groups[5] = { 1, 2, 3, 4, 5 };

	Student* mass;
	int n;
	
	cin >> n;
	fillStud(n, mass);
	cout << mass[1].name;

}