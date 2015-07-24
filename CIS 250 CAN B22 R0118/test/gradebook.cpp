// Fig. 3.12: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
#include <string>
#include "gradebook.h" // include definition of class GradeBook
using namespace std;
// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name )
{
setCourseName( name ); // call set function to initialize courseName
setInstructorName( name );
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( string name ) {
courseName = name; // store the course name in the object
} // end function setCourseName
// function to get the course name
string GradeBook::getCourseName() {
return courseName; // return object's courseName
} // end function getCourseName

void GradeBook::setInstructorName( string name ) {
instructorName = name;
}
string GradeBook::getInstructorName() {
return instructorName;
}

// display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
// call getCourseName to get the courseName
cout << "Welcome to the grade book for " << getCourseName() << "!" << endl;

cout << "This course is presented by: " <<  getInstructorName() << "!" << endl;

} // end function displayMessage

int main (void) {
//GradeBook.setCourseName();
GradeBook gb("test");
string cname,iname;
cout << "Course name: ";
cin >> cname;
cout << "Instructor name: ";
cin >> iname;
gb.setCourseName(cname);
gb.setInstructorName(iname);
gb.displayMessage();
return 0;
}
