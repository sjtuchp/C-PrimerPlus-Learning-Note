#include <iostream>

int sum(int (*ar2)[4], int size);
const int MAX = 3;
int main(){
	using namespace std;
	int data[MAX][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6}};
	cout << sum(data, MAX);
	return 0;
}
int sum(int ar2[][4], int size){
	int total = 0;
	for (int i = 0; i<size;i++)
		for (int j = 0; j<4;j++)
			total += ar2[i][j]; // *(*(ar2+i)+j)
	return total;
}
