#include <iostream>
const int MAX = 10;
int main(){
	using namespace std;
	double donation[MAX];
	int count = 0, big_count = 0;
	double sum = 0.0;
	while ( count < MAX && cin >> donation[count] )
		sum += donation[count++];
	for (int i = 0; i<count; ++i)
		if (donation[i] > sum / count) big_count += 1;
	cout << "The average of these " << count << " double is "
		 << sum / count << " where "
		 << big_count << " doubles are greater than the average. ";
	return 0;
}
