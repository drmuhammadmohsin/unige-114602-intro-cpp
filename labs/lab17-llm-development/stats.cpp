// function to calculate the average of a vector of integers
#include <iostream> 
#include <vector>
double calculateAverage(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        std::cerr << "Error: Cannot calculate average of an empty vector!\n";
        return 0.0; // or handle as appropriate
    }
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return static_cast<double>(sum) / numbers.size();
}

int main() {
    std::vector<int> data = {10, 20, 30, 40, 50};
    double average = calculateAverage(data);
    std::cout << "Average: " << average << "\n";
    return 0;
}

