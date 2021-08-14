#include <iostream>

void print(int* table, int size){
	for(int i = 0; i < size; ++i){
		std::cout << table[i] << " ";
	} std::cout << "\n";
}

int bubbleSort(int* table, int size){
	bool isCorrect{false};
	int max{table[0]};
	int noMore{1};
	while(!isCorrect){
		max = table[0];
		for(int i = 0; i < (size-noMore); ++i){
			if(table[i] > table[i+1]){
			int temp = table[i];
			table[i] = table[i+1];
			table[i+1] = temp;
			}

			if(table[i+1] > max){
				max = table[i+1];
			}

		}	

		if((table[size-noMore]) == max){
			noMore++;
			if(noMore == size){
				isCorrect=true;
			}
		}
	}
	print(table,size);

	return 0;
}

int main() {
	int size = 25;
	int arr[] = {1,15,9,15,12,4,19,6,7,2,18,15,11,3,13,5,16,13,8,10,17,20,8,14,3};
	//int arr[] = {1,9,4,6,7,2,3,5,8,10};
	print(arr,size);
	bubbleSort(arr,size);
	return 0;
}
