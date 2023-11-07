// C++ program to convert
// string into binary string
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// utility function
void strToBinary(string s)
{
    int n = s.length();


    for (int i = 0; i <= n; i++)
    {
        // convert each char to
        // ASCII value
        int val = int(s[i]);

        // Convert ASCII value to binary
        string bin = "";
        while (val > 0)
        {
            (val % 2)? bin.push_back('1') :
                       bin.push_back('0');
            val /= 2;
        }
        reverse(bin.begin(), bin.end());

        cout << bin << " ";
      }
}

// driver code
int main()
{

    cout << "C++ program to convert" << endl;
    cout << "string into binary string " << endl;
    cout << "---------------------------------------" << endl;
    cout << "a b c d e " << endl;
    cout << "---------------------------------------" << endl;

    string s = "abcde";
    strToBinary(s);
    cout << endl;
    cout << "---------------------------------------" << endl;
    return 0;
}
