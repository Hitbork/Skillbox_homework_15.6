#include <iostream>
#include <vector>

int main() {
    // Greetings
    std::cout << "\nMax summary in a row\n\n";


    // Creating var for vector
    int n;

    std::cout << "Input size of vector:\n";
    std::cin >> n;

    std::vector<float> vec(n);

    std::cout << "\n";

    std::cout << "Input " << n << " numbers:\n";
    for (int i = 0; i < vec.size(); i++) {
        std::cin >> vec[i];
    }

    std::cout << "\n";

    float maxsummary = vec[0] + vec[1];
    int indexOfStart = 0, indexOfEnd = 1;


}
