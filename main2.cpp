#include <iostream>

int bubbleSort(int* table, int size){
	bool isCorrect{false};
	int isNotSorted{0};
	while(!isCorrect){
	isNotSorted = 0;
	for(int i = 0; i < size-1; ++i){
		if(table[i] > table[i+1]){
			int temp = table[i];
			table[i] = table[i+1];
			table[i+1] = temp;
			isNotSorted++;
		}
		if(isNotSorted == 0 
		&& i == size-2){
			isCorrect = true;
		}
	}	
	}
	for(int i = 0; i < size; ++i){
		std::cout << table[i] << " ";
	}

	return 0;
}

int main() {
	int size = 25;
	//int size = 20;
	int arr[] = {14,1,20,18,15,9,12,4,1,12,19,6,7,20,2,11,3,13,5,16,8,10,4,17,2};
	//int arr[] = {14,1,18,15,9,12,4,19,6,7,20,2,11,3,13,5,16,8,10,17};
	bubbleSort(arr,size);
	return 0;
}
