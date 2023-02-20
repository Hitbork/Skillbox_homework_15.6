#include <iostream>
#include <vector>
#include <cmath>

// Function to fill vector
void fill_vector(std::vector<float> &vec) {
    // Creating var for size of vector and requesting it
    int n;

    std::cout << "Input size of vector:\n";
    std::cin >> n;

    // Resize of vector
    vec.resize(n);

    std::cout << "\n";

    // Request numbers for array
    std::cout << "Input " << n << " numbers:\n";
    for (int i = 0; i < vec.size(); i++) {
        std::cin >> vec[i];
    }

    std::cout << "\n";
}


// Function to sort array by modules
void sort_by_modules_of_numbers(std::vector<float> &vec) {
    int i = 0;
    while (true) {
        if (vec[i] > 0) {
            break;
        } else {
            bool didSwap = false;
            for (int j = vec.size()-1; j > i; j--) {
                if (abs(vec[i]) > abs(vec[j])) {
                    float temp = vec[i];
                    for (int k = 0; k < j; k++) {
                        vec[k] = vec[k+1];
                    }
                    vec[j] = temp;
                    didSwap = true;
                    break;
                }
            }
            if (!didSwap)
                i++;
        }
    }
}

int main() {
    // Greetings
    std::cout << "\nSort array by modules of numbers\n\n";


    // Creating var for array of numbers
    std::vector<float> numbers;

    fill_vector(numbers);


    // Sorting the array
    sort_by_modules_of_numbers(numbers);


    // Output vector
    std::cout << "\nResult: ";
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";
}
