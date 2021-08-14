#include <iostream>

int bubbleSort(int* table, int size){
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			if(table[i] < table[j]){
			int temp = table[i];
			table[i] = table[j];
			table[j] = temp;
			}
		}
	}	
	for(int i = 0; i < size; ++i){
		std::cout << table[i] << " ";
	}

	return 0;
}

int main() {
	//int size = 20;
	int size = 25;
	//int arr[] = {14,1,18,15,9,12,4,19,6,7,20,2,11,3,13,5,16,8,10,17};
	int arr[] = {20,14,1,18,15,9,1,2,12,4,19,6,7,20,2,11,3,20,13,5,16,8,10,17,1};
	bubbleSort(arr,size);
	return 0;
}
