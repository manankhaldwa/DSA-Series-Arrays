// Question 2 = Find the smallest and largest number in array and print its index number.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    int n = sizeof(nums) / sizeof(nums[0]);

    int smallest = nums[0];
    int largest = nums[0];
    int smallestIndex = 0;
    int largestIndex = 0;

    for (int i = 1; i < n; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i;
        } 
        else if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i;
        }
    }

    cout << "Smallest number: " << smallest << " at index " << smallestIndex << endl;
    cout << "Largest number: " << largest << " at index " << largestIndex << endl;

    return 0;
}