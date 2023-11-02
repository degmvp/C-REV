// C++ program to illustrate the updation
// in vector without using iterator
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// Function to update the value in vector int
void updateVector(vector<int> arr)
{

    cout << "Vector Before Update: ";
    for (auto& it : arr) {
        cout << it << ' ';
    }

    // Traverse using the reference to value
    // and multiply each value by 2
    for (auto& it : arr) {
        it *= 2;
    }

    cout << "\nVector After Update: ";
    // Print vector elements
    for (auto& it : arr) {
        cout << it << ' ';
    }
        cout << " " << endl;
}


// Function to update the value in vector float
void updateVfloat(vector<float> arr)
{

    cout << "Vector Before Update: ";
    for (auto& it : arr) {
        cout << it << ' ';
    }

    // Traverse using the reference to value
    // and multiply each value by 2
    for (auto& it : arr) {
        it *= 2;
    }

    cout << "\nVector After Update: ";
    // Print vector elements
    for (auto& it : arr) {
        cout << it << ' ';
    }
        cout << " " << endl;
}



// Driver Code
int main()
{

    // Declare the vector
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    vector<float> ary = { 1.1, 2.3, 3.3, 4.4, 5.3, 6.6, 7.7, 8.8, 9.9 };
    // Function Call
    updateVector(arr);

    // Function Call
    updateVfloat(ary);
    return 0;
}
