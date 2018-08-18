#include <iostream>
#include <cstring>
template <typename T>
T maxn( T [], int);
template <> 
char* maxn<char*>(char*[], int);
int main(){
	using namespace std;
	int arr1[6] = {5,4,6,8,1,2};
	double arr2[4] = {5.5,4.4,6.6,8.8};
	char *arr3[6] = {"abc","abcd","ab","5b1w561","f1a31","1234567"};
	cout << maxn(arr1,6)<<endl;
	cout << maxn(arr2,4) <<endl;
	cout << maxn(arr3,6) << endl;
}
template <typename T>
T maxn(T *arr, int len){
	T result = *arr;
	for (int i=1;i<len;++i)
		if (arr[i]>result)
			result = arr[i];
	return result;
}
template <> char* maxn<char* >( char *arr[], int len){
	int result = 0;
	for (int i=1;i<len;++i)
		if (strlen(arr[i])>strlen(arr[result]))
			result = i;
	return arr[result];	
}
