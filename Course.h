#ifndef COURSE_H
#define COURSE_H

#include <ostream>
#include <string>
#include <vector>

class Course {
  public:
    std::string department;
    int number;
    std::string title;
    int units;
    bool completed;
    std::vector <Course*> prereq;
    Course() : department("SITH"), 
               number(42), 
               title("The Tragedy of Darth Plagueis the Wise"), 
               units(9000), 
               completed(0), 
               prereq(0) {}
    Course(std::string d, int n, std::string t, int u, bool c) :
               department(d), 
               number(n), 
               title(t), 
               units(u), 
               completed(c), 
               prereq(0) {}
    void Add_Prereq(Course* p) {
        prereq.push_back(p);
    }
    friend std::ostream & operator<<(std::ostream& out, const Course rhs) {
        out << rhs.department;
        if (rhs.number < 100) {
            out << 0;
        }
        out << rhs.number << std::endl;
        out << rhs.title << '(' << rhs.units << ')';
        return out;        
    }
};

#endif

