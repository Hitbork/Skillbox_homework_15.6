#include <iostream>
#include <vector>

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


// Function to find max summary in a row
void find_max_summary_in_a_row(std::vector<float> &vec, int array[]) {
    // In the start of function our max summary as summary of 2 first numbers
    float maxSummary = vec[0] + vec[1];
    array[0] = 0; array[1] = 1;


    // Going throw vector to find out max summary in a row
    for (int i = 0; i < vec.size()-1; i++) {
        for (int j = i+1; j < vec.size(); j++) {
            float currentSummary = 0;
            for (int k = i; k <= j; k++) {
                currentSummary += vec[k];
            }
            if (currentSummary > maxSummary) {
                maxSummary = currentSummary;
                array[0] = i;
                array[1] = j;
            }
        }
    }
}



int main() {
    // Greetings
    std::cout << "\nMax summary in a row\n\n";


    // Creating var for array of numbers and filling array
    std::vector<float> vec;

    fill_vector(vec);


    // Creating var for indexes of max summary in a row
    int arrayOfIndexes[2];


    // Finding max summary
    find_max_summary_in_a_row(vec, arrayOfIndexes);


    // Outputting result
    std::cout << "Result: ";
    for (int i = 0; i < 2; i++) {
        std::cout << arrayOfIndexes[i] << " ";
    }
    std::cout << "\n";
}
