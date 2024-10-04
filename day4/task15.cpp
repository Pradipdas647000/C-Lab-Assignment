#include <iostream>
#include <vector>

using namespace std;

class StudentMarksCalculator {
private:
    vector<float> section1Marks;
    vector<float> section2Marks;

public:
    void inputMarks() {
        cout << "Enter marks for Section 1 (5 students):" << endl;
        for (int i = 0; i < 5; i++) {
            float marks;
            cin >> marks;
            section1Marks.push_back(marks);
        }

        cout << "Enter marks for Section 2 (5 students):" << endl;
        for (int i = 0; i < 5; i++) {
            float marks;
            cin >> marks;
            section2Marks.push_back(marks);
        }
    }

    float calculateAverage(const vector<float>& marks) {
        float sum = 0;
        for (float mark : marks) {
            sum += mark;
        }
        return sum / marks.size();
    }

    void displayResults() {
        float avg1 = calculateAverage(section1Marks);
        float avg2 = calculateAverage(section2Marks);
        float overallAvg = (avg1 + avg2) / 2;

        cout << "Average marks for Section 1: " << avg1 << endl;
        cout << "Average marks for Section 2: " << avg2 << endl;
        cout << "Overall average marks: " << overallAvg << endl;
    }
};

int main() {
    StudentMarksCalculator calculator;
    calculator.inputMarks();
    calculator.displayResults();
    return 0;
}