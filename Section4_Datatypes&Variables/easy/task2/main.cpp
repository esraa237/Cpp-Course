/*Write a program that reads 2 students information about math exam
○ Read per student: name, id and grade
○ Then print them. See the picture
*/
#include <iostream>

using namespace std;

int main()
{
    string name1,name2;
    int id1,id2;
    double grade1,grade2;
    cout << "Enter The first student name : ";
    cin>>name1;
    cout<<"His Id: ";
    cin>>id1;
    cout<<"His exam grade: ";
    cin>>grade1;

    cout << "Enter The second student name : ";
    cin>>name2;
    cout<<"His Id: ";
    cin>>id2;
    cout<<"His exam grade : ";
    cin>>grade2;

    cout<<"\nStudents grades  in math \n";
    cout<<name1<<" (with id "<<id1<<" ) got grade: "<<grade1<<"\n";
    cout<<name2<<" (with id "<<id2<<" ) got grade: "<<grade2<<"\n";
    cout<<"Average grade is "<<(grade1+grade2)/2;
    return 0;
}
