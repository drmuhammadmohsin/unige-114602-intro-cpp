#include <iostream>
using namespace std;

int findMin(const int* p, int size) {
    int min = *p;
    for (int i = 1; i < size; i++) {
        if (*(p + i) < min) {
            min = *(p + i);
        }
    }
    return min;
}

int findMax(const int* p, int size) {
    int max = *p;
    for (int i = 1; i < size; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }
    return max;
}

double computeAvg(const int* p, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(p + i);
    }
    return (double)sum / size;
}

int main() {
    int grades[6] = {72, 85, 90, 61, 78, 95};

    cout << "Min: " << findMin(grades, 6) << endl;
    cout << "Max: " << findMax(grades, 6) << endl;
    cout << "Average: " << computeAvg(grades, 6) << endl;

    return 0;
}