#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

struct Exam {
    string name;
    string subject;
    int examNumber;
    float score;
};


int sign(int x) {
    return (x > 0) - (x < 0);
}

int main() {
    int number = -5;

    // Absolute value using abs()
    int absoluteValue = abs(number);

    // Sign of the number using custom sign() function
    int signValue = sign(number);

    cout << "Original number: " << number << endl;
    cout << "Absolute value: " << absoluteValue << endl;
    cout << "Sign of the number: " << signValue << endl;
    cout << "-----------------------------------------------" << endl;
       // Create an instance of the Exam struct
    Exam examInst;

    // Assign values to the members of the struct
    examInst.name = "Degmar";
    examInst.subject = "Math Exam";
    examInst.examNumber = 1;
    examInst.score = 9.3;
    cout << "Exam Name   : " <<   examInst.name << endl;
    cout << "Exam subject: " <<   examInst.subject << endl;
    cout << "Exam Number : " << examInst.examNumber << endl;
    cout << "Exam Score  : " << examInst.score << endl;
    cout << "-----------------------------------------------" << endl;
    examInst.name = "Degmar";
    examInst.subject = "English Exam";
    examInst.examNumber = 2;
    examInst.score = 10.0;
    cout << "Exam Name   : " <<   examInst.name << endl;
    cout << "Exam subject: " <<   examInst.subject << endl;
    cout << "Exam Number : " << examInst.examNumber << endl;
    cout << "Exam Score  : " << examInst.score << endl;
    cout << "-----------------------------------------------" << endl;
    examInst.name = "Degmar";
    examInst.subject = "C++ Exam";
    examInst.examNumber = 3;
    examInst.score = 8.5;
    cout << "Exam Name   : " <<   examInst.name << endl;
    cout << "Exam subject: " <<   examInst.subject << endl;
    cout << "Exam Number : " << examInst.examNumber << endl;
    cout << "Exam Score  : " << examInst.score << endl;
    cout << "-----------------------------------------------" << endl;

    vector<float> numbers = {9.3,10.0,8.5};
    float result = std::accumulate(numbers.begin(), numbers.end(), 0.0);
    cout << "Sum: " << result << endl;

    return 0;
}

