#include <iostream>

template <typename T>
T max5(T *);
int main(){
	using std :: cout;
	using std :: endl;
	int arr1[] = {1,2,3,4,5};
	double arr2[] = {1.0,2.2,3.3,5.5,2};
	cout << max5(arr1) << endl;
	cout << max5(arr2) << endl;
}
template <typename T>
T max5 (T *arr){
	T result = *arr;
	for (int i=1;i<5;i++)
		if (arr[i]>result)
			result = arr[i];
	return result;
}
