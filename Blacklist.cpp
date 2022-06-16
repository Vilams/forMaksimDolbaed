// Задание на структуры
#include <iostream>
#include <string>
using namespace std;

struct Rabotnik{
	string first_Name,second_name , doljnost;
	int zarplata, date;
};

int main() {
	Rabotnik people[10] = 
	{
		{"Vlad", "Vladov","creativnai derector", 100, 1917},
		{"111", "b22", "b2", 1023, 1939},
		{"C", "ccc", "c3", 4340, 1941},
		{"D", "ddd", "d4", 3550, 1945},
		{"E", "eee", "e5", 54500, 1984},
		{"F", "fff", "f6", 4500, 1991},
		{"G", "ggg", "g7", 664500, 2007},
		{"H", "hhh", "h8", 450, 2012},
		{"I", "iii", "i9", 450, 2018},
		{"J", "jjj", "j10",45, 2020},
	};

	int o30 = 0;
	float summ = 0;

	for (int i = 0; i < 10; i++){
		if (2022 - people[i].date > 30){
			cout << people[i].second_name << endl;
			o30++;
		}
		summ += people[i].zarplata;
	}	
	cout << "Older 30: " << o30 << endl;
	cout << "Middle pay: " << summ / 10 << endl;
}