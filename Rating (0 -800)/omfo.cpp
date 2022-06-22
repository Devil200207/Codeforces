#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
class Student
{
    int roll_no, m1, m2, m3, t;
    string name;
    float p;

public:
    void get()
    {
        cout << "Enter roll no : ";
        cin >> roll_no;
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter marks of 3 subjects : ";
        cin >> m1 >> m2 >> m3;
        t = m1 + m2 + m3;
        p = t / 3;
    }
    void display()
    {
        cout << "\n" << roll_no << "\t\t" << name << "\t " << m1 << "\t\t" << m2 << "\t\t" << m3 << "\t\t" << t << "\t\t" << p;
    }
};
int main()
{
    Student s[10];
    cout << "Enter details of 10 students : " << endl;
    for (int i = 0; i < 10; i++)
    {
        s[i].get();
    }
    cout << "\nStudent data\n Roll number\tName\tSubject 1\tSubject 2\tSubject 3\tTotal\tPercentage\n";
    for (int i = 0; i < 10; i++)
    {
        s[i].display();
    }
    return 0;
}
