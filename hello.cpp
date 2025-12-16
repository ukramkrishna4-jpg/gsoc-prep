#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    map<int, int> freq;

    for (int x : numbers) {
        freq[x]++;
    }

    cout << "\nNumber Frequency (sorted):"<< endl;
    for (auto pair : freq) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
