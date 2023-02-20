#include <iostream>
#include <vector>

// Bubble sorting
void bubble_sorting(std::vector<float> &vec) {
    for (int i = vec.size()-1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (vec[j] > vec[j+1])
                std::swap(vec[j], vec[j+1]);
        }
    }
}

int main() {
    // Greetings
    std::cout << "\nOutputting 5th number\n\n";


    // Creating var for array of numbers
    std::vector<float> vec;


    // Creating cycle
    bool isEndedCycle = false;
    while (!isEndedCycle) {
        float temp = -3;
        bool isEndedInput = false;
        std::cout << "Input numbers:\n";
        while (!isEndedInput) {
            std::cin >> temp;
            isEndedInput = (temp == -1) || (temp == -2);

            isEndedCycle = temp == -2;
            if (!isEndedInput)
                vec.push_back(temp);
        }

        std::cout << "\n";

        if (!isEndedCycle) {
            bubble_sorting(vec);
            if (vec.size() > 5) {
                std::cout << "5th element is " << vec[4] << "\n\n";
            } else {
                std::cout << "There is no 5h element\n\n";
            }
        }
    }
}
