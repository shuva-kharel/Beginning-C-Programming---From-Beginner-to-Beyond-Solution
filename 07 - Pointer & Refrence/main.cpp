#include <iostream>
using namespace std;

void print(int array_name[], int array_size) {
	cout << "\n[ ";
	for (int i = 0; i < array_size; i++){
		cout << array_name[i] << " ";
	}
	cout << "]\n";
}

int* results(int *array1,int array1_size, int *array2, int array2_size) {
	int* new_array{ new int[array1_size * array2_size]};
	int* position{ new int{0}};
	for (size_t i = 0; i < array2_size; i++){
		for (size_t j = 0; j < array1_size; j++) {
			new_array[*position] = array2[i] * array1[j];
			*position = *position + 1;
		}
	}
	return new_array;
	delete[] new_array;
	new_array = nullptr;
	delete position;
	position = nullptr;
}

int main() {
	const int* array1_size{ new int{5} };
	const int* array2_size{ new int{3} };

	int* array1{ new int[*array1_size] {1,2,3,4,5} };
	int* array2{ new int[*array2_size] {10,20,30} };

	print(array1, *array1_size);
	print(array2, *array2_size);

	int* result = results(array1, *array1_size, array2, *array2_size);
	
	delete[] array1;
	array1 = nullptr;
	delete[] array2;
	array2 = nullptr;

	print(result, *array1_size * *array2_size);
	delete array1_size;
	array1_size = nullptr;
	delete array2_size;
	array2_size = nullptr;
	delete result;
	result = nullptr;

	return 0;
}