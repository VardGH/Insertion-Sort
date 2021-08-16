#include <iostream>
#include <vector>
#include <ctime>

void insertion_sort(std::vector<int>& arr)
{
	for (int i = 1; i < arr.size(); ++i) {
		for (int j = i; j > 0; --j) {
			if (arr[j - 1] > arr[j]) {
				std::swap(arr[j - 1], arr[j]);
			}
		}
	}

}

void print(std::vector<int>& arr)
{
	for (auto elem : arr) {
		std::cout << elem << " ";
	}
	std::cout << "\n";
}

int main()
{
	std::vector<int> myvector(20);

	srand(time(NULL));

	for (auto& elem : myvector) {
		elem = rand() % 50 - 10;
	}

	std::cout << "Unsorted Vector: ";
	print(myvector);

	insertion_sort(myvector);

	std::cout << "\nInsertion Sort: ";
	print(myvector);

	return 0;
}

