#include <iostream>
#include <string>
using namespace std;

class Instructor
{
private:
    string firstName;
    string lastName;
    string officeNumber;
    string designation;
public:
    Instructor() {
        firstName = "";
        lastName = "";
        officeNumber = "";
        designation = "";
    }

    Instructor(string firstName, string lastName, string officeNumber, string designation)
	{
        this->firstName = firstName;
        this->lastName = lastName;
        this->officeNumber = officeNumber;
        this->designation = designation;
    }
    void set(string firstName, string lastName, string officeNumber, string designation) 
	{
        this->firstName = firstName;
        this->lastName = lastName;
        this->officeNumber = officeNumber;
        this->designation = designation;
    }
    void print() 
	{
        cout << "Instructor: " << firstName << " " << lastName << endl;
        cout << "Office Number: " << officeNumber << endl;
        cout << "Designation: " << designation << endl;
    }
};

class TextBook 
{
private:
    string title;
    string author;
    int bookId;	
public:
    TextBook() 
	{
        title = "";
        author = "";
        bookId = 0;
    }
    TextBook(string title, string author, int bookId) 
	{
        this->title = title;
        this->author = author;
        this->bookId = bookId;
    }
    void set(string title, string author, int bookId) 
	{
        this->title = title;
        this->author = author;
        this->bookId = bookId;
    }
    void print() 
	{
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Book ID: " << bookId << endl;
    }
};


class Course
{
private:
    Instructor instructor;
    TextBook textbook;	
public:
    Course() {}

    Course(Instructor instructor, TextBook textbook) 
	{
        this->instructor = instructor;
        this->textbook = textbook;
    }
    void print() 
	{
        cout << "Course Information" << endl;
        instructor.print();
        cout << endl;
        textbook.print();
        cout << endl;
    }
};

int main() 
{
    Course courses[3];

    // Create Instructor and TextBook objects for each course
    
    Instructor instructor1("Azan", "Afzal", "1741", "Professor");
    TextBook textbook1("Programming in C++", "Heheh", 12345);
    Course course1(instructor1, textbook1);

    Instructor instructor2("Azan", "Afzal", "768", "Associate Professor");
    TextBook textbook2("Starting out with c++", "Jawad Haider", 98765);
    Course course2(instructor2, textbook2);

    Instructor instructor3("Azan", "Afzal", "879", "Assistant Professor");
    TextBook textbook3("Introduction to IICT", "Sunduss Amir", 23451);
    Course course3(instructor3, textbook3);

    courses[0] = course1;
    courses[1] = course2;
    courses[2] = course3;
    
    for (int i = 0; i < 3; i++) 
	{
    cout << "Course " << i+1 << ":\n";
    courses[i].print();
    cout << endl;
    }
return 0;
}


