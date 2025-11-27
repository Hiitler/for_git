#include <iostream>
#include <vector>       
#include <limits>   
int findSecondLargest(const std::vector<int>& arr) {
    int largest = std::numeric_limits<int>::min();
    int secondLargest = std::numeric_limits<int>::min();

    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }

    return (secondLargest == std::numeric_limits<int>::min()) ? -1 : secondLargest;
}
int main() {
    std::vector<int> numbers = {12, 35, 1, 10, 34, 1};
    int result = findSecondLargest(numbers);
    if (result != -1) {
        std::cout << "The second largest number is: " << result << std::endl;
    } else {
        std::cout << "There is no second largest number." << std::endl;
    }
    return 0;
}