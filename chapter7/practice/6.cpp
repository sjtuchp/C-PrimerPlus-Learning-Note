#include <iostream>
const int MAX_ARR = 10;
int Fill_array(double *, int len);
void Show_array(double *, int len);
void Reverse_array(double *, int len);
int main(){
	using std::cout; 
	double *arr =new double [MAX_ARR];
	int len = Fill_array(arr, MAX_ARR);
	cout << len << " numbers.\n";
	Show_array(arr, len);
	Reverse_array(arr,len);
	Show_array(arr, len); 
	return 0;
}
int Fill_array(double *arr, int len){
	using std::cin;
	int count = 0;
	double num;
	while (count < len && cin >> num)
		arr[count++] = num;
	return count;
}
void Show_array(double *arr, int len){
	using std::cout;
	using std::endl;
	for (int i=0;i< len ;++i){
		cout << i+1 << " : " << arr[i] << endl;
	}
}
void Reverse_array(double *arr, int len){
	for (int i=0;i < len-1;i++,len--){
		double temp = arr[i];
		arr[i] = arr[len-1];
		arr[len-1] = temp;
	}
}
