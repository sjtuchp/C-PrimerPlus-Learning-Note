#include <iostream>
using namespace std;

const int MAX = 10; 

int init_array(double *);
void display(double *, int len);
double average(double *, int len);
int main(){
	double arr[MAX];
	int len = init_array(arr);
	display(arr, len);
	cout << average(arr,len)<<endl;
	return 0;
}
int init_array(double *arr){
	int count = 0;
	double score;
	while (count < 10 && cin >> score ){
		if (score<0) break;
		arr[count++] = score;
	}
	return count;
}
void display(double *arr, int len){
	for (int i = 0;i<len;i++) cout<< arr[i]<< " ";
	cout << endl;
}
double average(double *arr, int len){
	double ans = 0;
	for (int i = 0; i < len ; i++ ) ans+=arr[i];
	return ans/len; 
}
