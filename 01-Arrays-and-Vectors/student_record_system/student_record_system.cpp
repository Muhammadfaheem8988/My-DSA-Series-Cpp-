/* * Task: Student Record Management System
 * Focus: Array of Objects, GPA filtering, and search logic
 * Author: Muhammad Faheem
 */

#include <iostream>
#include <string>

using namespace std;

// Global control for GPA tracking
int studentlesgpa3[10] = {0};
int studentmoregpa3[10] = {0};
int moregpa_control = 0;
int lessgpa_control = 0;

class Student {
private:
    string name;
    int day, month, year, rollno;

public:
    float gpa;

    Student() : rollno(0), gpa(0.0) {} // Constructor to initialize

    int getRoll() { return rollno; }

    void display() {
        cout << "\n----------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollno << endl;
        cout << "GPA: " << gpa << endl;
        cout << "D-O-B: " << day << "-" << month << "-" << year << endl;
    }

    void getdata() {
        cout << "Enter Roll no: "; cin >> rollno;
        cout << "Enter Name: "; cin.ignore(); getline(cin, name);
        cout << "Enter D-O-B (Day Month Year): "; cin >> day >> month >> year;
        cout << "Enter GPA: "; cin >> gpa;
    }

    void checkGpa() {
        if (gpa < 3.0 && gpa > 0) {
            studentlesgpa3[lessgpa_control++] = rollno;
        } else if (gpa >= 3.0) {
            studentmoregpa3[moregpa_control++] = rollno;
        }
    }

    int calculateAge() {
        return 2026 - year; // Updated to current year
    }
};

int main() {
    int no_of_students;
    cout << "Enter the number of Students: "; cin >> no_of_students;
    
    Student students[no_of_students];
    int choice, next;

    system("color 2"); // Green text for that "classic terminal" feel

    do {
    menu:
        cout << "\n========== Student Menu ==========" << endl;
        cout << "1. Enter student data" << endl;
        cout << "2. View all records" << endl;
        cout << "3. Search by Roll No" << endl;
        cout << "4. Calculate Age of Student" << endl;
        cout << "5. List GPA < 3.0" << endl;
        cout << "6. List GPA >= 3.0" << endl;
        cout << "7. Exit" << endl;
        cout << "Choice: "; cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < no_of_students; i++) {
                    students[i].getdata();
                    if (i < no_of_students - 1) {
                        int a; cout << "Enter another? (1.Yes/2.No): "; cin >> a;
                        if (a == 2) break;
                    }
                }
                break;

            case 2:
                for (int i = 0; i < no_of_students; i++) {
                    if (students[i].getRoll() == 0) break;
                    students[i].display();
                }
                break;

            case 3: {
                int searchID; bool found = false;
                cout << "Enter Roll No: "; cin >> searchID;
                for (int i = 0; i < no_of_students; i++) {
                    if (students[i].getRoll() == searchID) {
                        students[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "No Student Found." << endl;
                break;
            }

            case 4: {
                int searchID; bool found = false;
                cout << "Enter Roll No for Age Check: "; cin >> searchID;
                for (int i = 0; i < no_of_students; i++) {
                    if (students[i].getRoll() == searchID) {
                        cout << "Age: " << students[i].calculateAge() << " years" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "No Student Found." << endl;
                break;
            }

            case 5:
                lessgpa_control = 0; // Reset for fresh check
                cout << "\n--- Students with GPA < 3.0 ---" << endl;
                for (int i = 0; i < no_of_students; i++) {
                    students[i].checkGpa(); 
                    if (students[i].gpa < 3.0 && students[i].getRoll() != 0) students[i].display();
                }
                break;

            case 6:
                moregpa_control = 0;
                cout << "\n--- Students with GPA >= 3.0 ---" << endl;
                for (int i = 0; i < no_of_students; i++) {
                    if (students[i].gpa >= 3.0 && students[i].getRoll() != 0) students[i].display();
                }
                break;

            case 7: return 0;
            default: cout << "Invalid choice!"; goto menu;
        }

        cout << "\nWanna operate more? (1.Yes/2.No): "; cin >> next;
    } while (next == 1);

    return 0;
}