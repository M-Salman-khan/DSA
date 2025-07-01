#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// Function to perform Bubble Sort
vector<int> bubbleSort(vector<int> arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) { // Loop over all passes
        bool isSwap = false; // Check if any swap happens
        
        for (int j = 0; j < n - i - 1; j++) { // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // Swap if not in order
                isSwap = true;
            }
        }
        
        if (!isSwap) return arr; // If no swap, array is already sorted
    }
    
    return arr; // Return sorted array
}

int main() {
    vector<int> arr = {3, -2, -1, 5, 0};
    vector<int> returnArr = bubbleSort(arr);
    
    for (int i = 0; i < returnArr.size(); i++) { // Print sorted array
        cout << returnArr[i] << " ";
    }
    
    return 0;
}
