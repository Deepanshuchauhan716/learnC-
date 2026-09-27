#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int id;
    string name;
    int age;
    string course;
    float marks;
    float fee;
    bool feePaid;

public:
    Student(int id, string name, int age, string course, float marks, float fee)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->course = course;
        this->marks = marks;
        this->fee = fee;
        this->feePaid = false;
    }

    void display()
    {
        cout << "  ID       : " << id << endl;
        cout << "  Name     : " << name << endl;
        cout << "  Age      : " << age << endl;
        cout << "  Course   : " << course << endl;
        cout << "  Marks    : " << marks << endl;
        cout << "  Fee      : " << fee << endl;
        cout << "  Fee Paid : " << (feePaid ? "YES" : "NO") << endl;
    }

    int getId() { return id; }
    void setMarks(float m) { marks = m; }
    void setCourse(string c) { course = c; }
    void Payfee() { feePaid = true; }
};

class Teacher
{
private:
    int id;
    string name;
    string subject;
    float salary;

public:
    Teacher(int id, string name, string subject, float salary)
    {
        this->id = id;
        this->name = name;
        this->subject = subject;
        this->salary = salary;
    }

    void display()
    {
        cout << "  ID      : " << id << endl;
        cout << "  Name    : " << name << endl;
        cout << "  Subject : " << subject << endl;
        cout << "  Salary  : " << salary << endl;
    }
};

class Course
{
private:
    int id;
    string name;
    int duration;
    float fee;

public:
    Course(int id, string name, int duration, float fee)
    {
        this->id = id;
        this->name = name;
        this->duration = duration;
        this->fee = fee;
    }

    void display()
    {
        cout << "  ID       : " << id << endl;
        cout << "  Name     : " << name << endl;
        cout << "  Duration : " << duration << " years" << endl;
        cout << "  Fee      : " << fee << endl;
    }
};

class StudentManager
{
    Student *Students[100];
    int StudentCount;

    Teacher *Teachers[100];
    int Teachercount;

    Course *Courses[100];
    int CoursesCount;

public:
    StudentManager()
    {
        StudentCount = 0;
        Teachercount = 0;
        CoursesCount = 0;
    }

    // ==================== STUDENT ====================
    void addStudent()
    {
        int id, age;
        string name, course;
        float marks, fee;

        cout << "\n----- Add New Student -----\n";
        cout << "Enter ID     : ";
        cin >> id;
        cout << "Enter Name   : ";
        cin >> name;
        cout << "Enter Age    : ";
        cin >> age;
        cout << "Enter Course : ";
        cin >> course;
        cout << "Enter Marks  : ";
        cin >> marks;
        cout << "Enter Fee    : ";
        cin >> fee;

        Student *s = new Student(id, name, age, course, marks, fee);
        Students[StudentCount] = s;
        StudentCount++;

        cout << "\n[OK] Student added successfully!\n";
    }

    void displayStudent()
    {
        cout << "\n----- All Students -----\n";
        if (StudentCount == 0)
        {
            cout << "  No students found.\n";
            return;
        }
        for (int i = 0; i < StudentCount; i++)
        {
            cout << "\n  Student " << (i + 1) << ":\n";
            Students[i]->display();
            cout << "  ------------------------\n";
        }
    }

    void SearchStudent()
    {
        int SearchId;
        cout << "\n----- Search Student -----\n";
        cout << "Enter ID : ";
        cin >> SearchId;

        for (int i = 0; i < StudentCount; i++)
        {
            if (Students[i]->getId() == SearchId)
            {
                cout << "\n  Found!\n";
                Students[i]->display();
                return;
            }
        }
        cout << "\n  [X] Student not found.\n";
    }

    void updateStudent()
    {
        int SearchId;
        cout << "\n----- Update Student -----\n";
        cout << "Enter ID : ";
        cin >> SearchId;

        for (int i = 0; i < StudentCount; i++)
        {
            if (Students[i]->getId() == SearchId)
            {
                float newMarks;
                string newCourse;

                cout << "Enter new Course : ";
                cin >> newCourse;
                cout << "Enter new Marks  : ";
                cin >> newMarks;

                Students[i]->setCourse(newCourse);
                Students[i]->setMarks(newMarks);

                cout << "\n[OK] Student updated successfully!\n";
                return;
            }
        }
        cout << "\n[X] Student not found.\n";
    }

    void deleteStudent()
    {
        int Searchid;
        cout << "\n----- Delete Student -----\n";
        cout << "Enter ID : ";
        cin >> Searchid;

        for (int i = 0; i < StudentCount; i++)
        {
            if (Students[i]->getId() == Searchid)
            {
                delete Students[i];

                for (int j = i; j < StudentCount - 1; j++)
                {
                    Students[j] = Students[j + 1];
                }
                StudentCount--;

                cout << "\n[OK] Student deleted successfully!\n";
                return;
            }
        }
        cout << "\n[X] Student not found.\n";
    }

    void feePayment()
    {
        int SearchId;
        cout << "\n----- Fee Payment -----\n";
        cout << "Enter ID : ";
        cin >> SearchId;

        for (int i = 0; i < StudentCount; i++)
        {
            if (Students[i]->getId() == SearchId)
            {
                Students[i]->Payfee();
                cout << "\n[OK] Payment successful!\n";
                return;
            }
        }
        cout << "\n[X] Student not found.\n";
    }

    // ==================== TEACHER ====================
    void addTeacher()
    {
        int id;
        string name, subject;
        float salary;

        cout << "\n----- Add New Teacher -----\n";
        cout << "Enter ID      : ";
        cin >> id;
        cout << "Enter Name    : ";
        cin >> name;
        cout << "Enter Subject : ";
        cin >> subject;
        cout << "Enter Salary  : ";
        cin >> salary;

        Teacher *t = new Teacher(id, name, subject, salary);
        Teachers[Teachercount] = t;
        Teachercount++;

        cout << "\n[OK] Teacher added successfully!\n";
    }

    void displayTeacher()
    {
        cout << "\n----- All Teachers -----\n";
        if (Teachercount == 0)
        {
            cout << "  No teachers found.\n";
            return;
        }
        for (int i = 0; i < Teachercount; i++)
        {
            cout << "\n  Teacher " << (i + 1) << ":\n";
            Teachers[i]->display();
            cout << "  ------------------------\n";
        }
    }

    // ==================== COURSE ====================
    void addCourse()
    {
        int id, duration;
        string name;
        float fee;

        cout << "\n----- Add New Course -----\n";
        cout << "Enter Course ID   : ";
        cin >> id;
        cout << "Enter Course Name : ";
        cin >> name;
        cout << "Enter Duration    : ";
        cin >> duration;
        cout << "Enter Fee         : ";
        cin >> fee;

        Course *c = new Course(id, name, duration, fee);
        Courses[CoursesCount] = c;
        CoursesCount++;

        cout << "\n[OK] Course added successfully!\n";
    }

    void displayCourse()
    {
        cout << "\n----- All Courses -----\n";
        if (CoursesCount == 0)
        {
            cout << "  No courses found.\n";
            return;
        }
        for (int i = 0; i < CoursesCount; i++)
        {
            cout << "\n  Course " << (i + 1) << ":\n";
            Courses[i]->display();
            cout << "  ------------------------\n";
        }
    }
};

// ==================== MAIN ====================
int main()
{
    StudentManager sm;
    int choice;

    do
    {
        cout << "\n=========================================\n";
        cout << "     STUDENT MANAGEMENT SYSTEM\n";
        cout << "=========================================\n";
        cout << "  1.  Add New Student\n";
        cout << "  2.  Display All Students\n";
        cout << "  3.  Search Student\n";
        cout << "  4.  Update Student\n";
        cout << "  5.  Delete Student\n";
        cout << "  6.  Pay Fee\n";
        cout << "  7.  Add Teacher\n";
        cout << "  8.  Display All Teachers\n";
        cout << "  9.  Add Course\n";
        cout << "  10. Display All Courses\n";
        cout << "  0.  Exit\n";
        cout << "=========================================\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "\nGoodbye!\n";
            break;
        case 1:
            sm.addStudent();
            break;
        case 2:
            sm.displayStudent();
            break;
        case 3:
            sm.SearchStudent();
            break;
        case 4:
            sm.updateStudent();
            break;
        case 5:
            sm.deleteStudent();
            break;
        case 6:
            sm.feePayment();
            break;
        case 7:
            sm.addTeacher();
            break;
        case 8:
            sm.displayTeacher();
            break;
        case 9:
            sm.addCourse();
            break;
        case 10:
            sm.displayCourse();
            break;
        default:
            cout << "\n[X] Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}