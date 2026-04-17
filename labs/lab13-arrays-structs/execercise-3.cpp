#include <iostream>

struct Point {
    int x, y;
};

struct Rect {
    Point top_left;
    Point bottom_right;
};

// Function to check if rect1 is contained within rect2
bool isContained(const Rect& rect1, const Rect& rect2) {
    return (rect1.top_left.x >= rect2.top_left.x && 
            rect1.top_left.y <= rect2.top_left.y && 
            rect1.bottom_right.x <= rect2.bottom_right.x && 
            rect1.bottom_right.y >= rect2.bottom_right.y);
}

int main() {
    Rect rect1, rect2;

    // Input for first rectangle
    std::cout << "Enter the coordinates of the first rectangle (top_left x y, bottom_right x y): ";
    std::cin >> rect1.top_left.x >> rect1.top_left.y >> rect1.bottom_right.x >> rect1.bottom_right.y;

    // Input for second rectangle
    std::cout << "Enter the coordinates of the second rectangle (top_left x y, bottom_right x y): ";
    std::cin >> rect2.top_left.x >> rect2.top_left.y >> rect2.bottom_right.x >> rect2.bottom_right.y;

    // Check if one rectangle is contained within the other
    if (isContained(rect1, rect2)) {
        std::cout << "The first rectangle is contained within the second rectangle.\n";
    } else if (isContained(rect2, rect1)) {
        std::cout << "The second rectangle is contained within the first rectangle.\n";
    } else {
        std::cout << "Neither rectangle is fully contained within the other.\n";
    }

    return 0;
}

