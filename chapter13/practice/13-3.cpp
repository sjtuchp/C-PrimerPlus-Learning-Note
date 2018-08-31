#include <iostream>
#include "13-3dma.h"
const int DMAS = 4;

int main(){
	using std::cin;
	using std::cout;
	using std::endl;
	
	abcDMA * p_DMA[DMAS];
	char temp[40];
	int temprating;
	char tempcolor[40];
	char tempstyle[40];
	char kind;
	for (int i =0; i< DMAS; i++){
		cout << "Enter the label: ";
		cin.getline(temp,40);
		cout << "Enter 1 for baseDMA, 2 for lacksDMA or 3 for hasDMA: ";
		while (cin >> kind && (kind !='1' && kind != '2' && kind !='3'))
			cout << "Enter either 1 or 2 or 3: ";
		while (cin.get()!='\n');
		if (kind == '1'){
			cout << "Enter the rating: ";
			cin >> temprating;	
			while (cin.get()!='\n')
				continue;
			p_DMA[i] = new baseDMA(temp, temprating);
		}
		else if (kind == '2'){
			cout << "Enter the color: ";
			cin.getline(tempcolor,40);
			p_DMA[i] = new lacksDMA(tempcolor, temp);
		}else{
			cout << "Enter the style: ";
			cin.getline(tempstyle,40);
			p_DMA[i] = new hasDMA(tempstyle,temp);			
		}

	}
	cout << endl;
	for (int i =0; i < DMAS; i++){
		p_DMA[i]->View();
		cout << endl;
	}
	for (int i =0; i< DMAS; i++){
		delete p_DMA[i];
	}
	cout << "Done.\n";
	return 0;
}
