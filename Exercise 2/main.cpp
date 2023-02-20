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


// Find two numbers which giving requested summary
void find_two_number_giving_requested_summary(std::vector<float> &vec, float arrayOfNumbersGivingSummary[], float &summary) {
    for (int i = 0; i < vec.size()-1; i++) {
        for (int j = i+1; j < vec.size(); j++) {
            if (vec[i] + vec[j] == summary) {
                arrayOfNumbersGivingSummary[0] = vec[i];
                arrayOfNumbersGivingSummary[1] = vec[j];
                break;
            }
        }
    }
}


int main() {
    // Greetings
    std::cout << "\nFind two number which give us required summary\n\n";


    // Creating vector and filling it
    std::vector<float> vec;

    fill_vector(vec);


    // Creating var for summary and requesting it
    float summary;

    std::cout << "Input requested summary:\n";
    std::cin >> summary;

    std::cout << "\n";

    // Creating var for result
    float arrayOfNumbersGivingSummary[2];


    // Finding result
    find_two_number_giving_requested_summary(vec, arrayOfNumbersGivingSummary, summary);


    // Outputting result
    std::cout << "\nResult: ";
    for (int i = 0; i < 2; i++) {
        std::cout << arrayOfNumbersGivingSummary[i] << " ";
    }
    std::cout << "\n";
}
