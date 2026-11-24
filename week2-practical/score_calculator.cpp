#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    // =================================================
    // VARIABLE DECLARATIONs
    // =================================================


    string StudentName;   // Text - stores the student's name
    string course;   // Text - stores the course (BBIT/BCS)


    int score1, score2, score3;   // Integer - stores the scores for 3 subjects
    int totalScore;   // Integer - stores the total score

    double average;   // Double - stores the average score
    double percentage;   // Double - stores the percentage score


    // =================================================
    // CONSTANT DECLARATION
    // =================================================


    const int MAX_SCORE = 100;   // Maximum score for each test


    // =================================================
    // WELCOME BANNER
    // cout displays text on the screen
    // endl moves to a new line
    // =================================================

    cout << "=================================================" << endl;
    cout << "   STUDENT SCORE CALCULATOR" << endl;
    cout << "=================================================" << endl;
    cout << endl;


    // =================================================
    // QUESTION 1: STUDENT NAME
    // =================================================

    cout << "Enter student's name: ";
    getline(cin, StudentName);  // Reads the full line (including spaces)


    // =================================================
    // QUESTION 2: COURSE
    // =================================================

    cout << "Enter course (BBIT/BCS): ";
    getline(cin, course);  


    // =================================================
    // QUESTION 3: TEST SCORES
    // cin >> reads numbers and store them in int variables
    // =================================================

    cout << "Enter score for Test 1: ";
    cin >> score1;

    cout << "Enter score for Test 2: ";
    cin >> score2;

    cout << "Enter score for Test 3: ";
    cin >> score3;


    // =================================================
    // CALCULATIONS 1: TOTAL SCORE
    // The + operator adds the scores together
    // The = operator assigns the result to totalScore
    // =================================================

    totalScore = score1 + score2 + score3;


    // =================================================
    // CALCULATIONS 2: AVERAGE 
    // The / operator divides the total score by 3
    // We use 3.0 (double) to get decimal division.
    // If we used 3 (int), the result would be truncated.
    // =================================================

    average = totalScore / 3.0;


    // =================================================
    // CALCULATIONS 3: PERCENTAGE
    // Formula: (totalScore / (MAX_SCORE * 3)) * 100
    // maximumPossible = 3 tests * 100 points each = 300
    // =================================================

    percentage = (totalScore / (MAX_SCORE * 3.0)) * 100;


    // =================================================
    // DIPLAY REPORT CARD
    // fixed << setprecision(2) formarts decimals to 2 places
    // =================================================

    cout << endl;
    cout << "=================================================" << endl;
    cout << "   REPORT CARD" << endl;
    cout << "=================================================" << endl;
    cout << endl;


    cout << "Student : " << StudentName << endl;
    cout << "Course : " << course << endl;
    cout << endl;
    cout << "Test 1 Score : " << score1 << "/" << MAX_SCORE << endl;
    cout << "Test 2 Score : " << score2 << "/" << MAX_SCORE << endl;
    cout << "Test 3 Score : " << score3 << "/" << MAX_SCORE << endl;
    cout << endl;
    cout << "Total: " << totalScore << "/" << "300" << endl;
    cout << "Average: " << fixed << setprecision(2) << average << endl;
    cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
    cout << endl;

    // Determine Pass or Fail
    if (percentage >= 50) {
        cout << "Result: PASS" << endl;
    } else {
        cout << "Result: FAIL" << endl;
    }
    cout <<"=================================================" << endl;

    

    return 0;
}

    