#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Read numbers from user
vector<int> readNumbers(int n) {
    vector<int> nums(n);
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    return nums;
}

// Calculate average
double calculateAverage(const vector<int>& nums) {
    int sum = 0;
    for (int x : nums) {
        sum += x;
    }
    return (double)sum / nums.size();
}

// Display results
void displayResults(const vector<int>& nums, double avg) {
    cout << "\nSorted numbers: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << "\nMin = " << nums.front();
    cout << "\nMax = " << nums.back();
    cout << "\nAverage = " << avg << endl;
}

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    vector<int> numbers = readNumbers(n);
    sort(numbers.begin(), numbers.end());

    double avg = calculateAverage(numbers);
    displayResults(numbers, avg);

    return 0;
}
