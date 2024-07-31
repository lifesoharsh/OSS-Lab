#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of elements you want to enter in the array: ";
    std::cin >> n;
    char* arr = new char[n];

    std::cout << "Enter " << n << " characters: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int i = 0;
    int j = n - 1;
    while (i < j) {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    std::cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i];
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}

