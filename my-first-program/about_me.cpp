#include <iostream>

using namespace std;

int main(){
    
        //==================================================
        // VARIABLE DECLARATIONS
        // These are "storage boxes" where we keep user answers
        //==================================================

    string name;     // stores users name
    string course;       // stores users course
    string hobby;        // stores users hobby
    string reason;       // stores users reason
    string expectations; // stores users expectations
    string definition;   // stores users definition

    

    //==================================================
    // Question 1: NAME
    //==================================================

    cout << "======================================================" << endl;
    cout << "WELCOME TO YOUR FIRST PROGRAM!" << endl;
    cout << "======================================================" << endl;

    cout << endl;

    cout << "1. What is your name? ";
    getline(cin, name); // read the full line (including spaces)

    

    //==================================================
    // Question 2: COURSE (BBIT OR BCS)
    //==================================================

    cout << "2. What course are you doing? (BBIT/BCS) ";
    getline(cin, course);

    

    //==================================================
    // Question 3: HOBBY
    //==================================================

    cout << "3. What is your hobby? ";
    getline(cin, hobby);

    

    //==================================================
    // Question 4: REASON FOR CHOOSING COURSE
    //==================================================

    cout << "4. Why did you choose this course? ";
    getline(cin, reason);

    

    //==================================================
    // Question 5: EXPECTATIONS
    //==================================================

    cout << "5. What do you expect to learn from programming? ";
    getline(cin, expectations);

    

    //==================================================
    // Question 6: DEFINITION OF PROGRAMMING
    //==================================================

    cout << "6. In your own word, what is programming? ";
    getline(cin, definition);

    

    //==================================================
    // DISPLAY THE SUMMARY
    //==================================================

    cout << endl;
    cout << "======================================================" << endl;
    cout << "YOUR PROFILE SUMMARY" << endl;
    cout << "======================================================" << endl;
    cout << endl;

    cout << "Name: " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Reason for choosing course: " << reason << endl;
    cout << "Expectations from programming: " << expectations << endl;
    cout << "Definition of programming: " << definition << endl;
    cout << endl;

    cout << "======================================================" << endl;
    cout << "Thank you for completing this!" << endl;
    cout << "======================================================" << endl;
    
    return 0;
}
