#include <vector>
#include <algorithm>
#include <iostream>


using namespace std;

// Driver Code
int main()
{

    // Declare the vector
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    vector<float> array = { 11.1, 12.2, 13.3, 14.4, 15.5, 16.6, 17.7, 18.8, 19.9 };

    cout << "usando  for (auto& it : arr)" << endl;
    // Traversing the vector using
    // values directly
    for (auto& it : arr) {

        // Print the values
        cout << it << ' ';
    }

    cout << ' ' << endl;


    cout << "usando  for (auto& ix : array)" << endl;

    for (auto& ix : array) {

        // Print the values
        cout << ix << ' ';
    }
    return 0;
}
