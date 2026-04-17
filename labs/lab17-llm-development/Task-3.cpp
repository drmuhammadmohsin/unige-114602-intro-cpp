// Function that takes a vector of doubles
// and returns the mean, min, and max
//logic is not correct, you need to calculate the sum of the numbers to get the mean, and also need to initialize min and max properly before comparing them with the numbers in the vector. Here is the corrected code: yes 
//correct the logic to calculate the mean, min, and max of the numbers in the vector. You can use the following code:

#include <iostream>
#include <vector>
#include <limits>
using namespace std;
void calculateStats(const vector<double>& numbers, double& mean, double& minVal, double& maxVal) {
    if (numbers.empty()) {
        mean = 0;
        minVal = 0;
        maxVal = 0;
        return;
    }
    
    double sum = 0;
    minVal = numeric_limits<double>::max();
    maxVal = numeric_limits<double>::lowest();
    
    for (double num : numbers) {
        sum += num;
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;
    }
    
    mean = sum / numbers.size();
}
