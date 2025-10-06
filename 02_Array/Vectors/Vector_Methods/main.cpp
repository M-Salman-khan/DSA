#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Creating a vector 'vec' of size 3 with all elements initialized to 0
    vector<int> vec(3, 0);

    // Creating a character vector 'str_vec' with 5 elements
    vector<char> str_vec = {'a', 'b', 'c', 'd', 'e'};

    // Output using direct indexing (normal approach)
    cout << "Output using normal approach\n";
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;

    // Output using for-each loop
    cout << "\nOutput using foreach approach\n";

    // Adding a new element at the end of the vector using push_back
    vec.push_back(25);

    // Displaying the size of the vector after adding an element
    cout << "Size of the vector before pop and after push: " << vec.size() << endl;

    // Traversing the vector using a for-each loop
    for (int i : vec) {
        cout << i << endl;
    }

    // Removing the last element from the vector using pop_back
    vec.pop_back();

    // Displaying the size after removing an element
    cout << "Size of the vector after pop: " << vec.size() << endl;

    // Displaying the current capacity of the vector (allocated memory size)
    cout << "Vector capacity is: " << vec.capacity() << endl;

    // Traversing the character vector using a for-each loop
    cout << "\nCharacter vector elements: " << endl;
    for (char val : str_vec) {
        cout << val << endl;
    }

    // Displaying the size of the character vector
    cout << "Size of the string vector is: " << str_vec.size() << endl;

    // Displaying the first and last elements of the character vector
    cout << "First element of the string vector: " << str_vec.front() << endl;
    cout << "Last element of the string vector: " << str_vec.back() << endl;

    return 0;
}
