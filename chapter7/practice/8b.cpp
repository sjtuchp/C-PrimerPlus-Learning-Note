#include <iostream>

const int Seasons = 4;
const char * Snames [Seasons] =
		{"Spring", "Summer", "Fail", "Winter"};
struct season_info{
	double expenses[Seasons];
};

void fill(season_info *);
void show(season_info);

int main(){
	season_info expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}
void fill(season_info *pa){
	using namespace std;
	for (int i = 0; i < Seasons;i++){
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (pa->expenses)[i];
	}
}
void show(season_info da){
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i<Seasons;i++){
		cout << Snames[i] << ": $" << (da.expenses)[i] << endl;
		total += (da.expenses)[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
