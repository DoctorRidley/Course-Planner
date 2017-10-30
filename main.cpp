#include <iostream>
#include "Course.h"

int main() {
    Course CS_10("CS", 10, "Intro to C++ Programming I", 4, 0);
    Course CS_11("CS", 11, "Intro to Discrete Structures", 4, 0);
    CS_11.Add_Preerq(&CS_10);
    Course CS_12("CS", 12, "Intro to C++ Programming II", 4, 0);
    CS_12.Add_Prereq(&CS_10);
    Course CS_14("CS", 14, "Introduction to Data Structures and Algorithms", 4, 0);
    CS_14.Add_Prereq(&CS_12);
    Course CS_61("CS", 61, "Machine Oranization and Assembly Language", 4, 0);
    CS_61.Add_Prereq(&CS_10);
    Course CS_100("CS", 100, "Software Construction", 4, 0);
    CS_100.Add_Prereq(&CS_14);
    Course CS_111("CS", 111, "Discrete Structures", 4, 0);
    std::cout << *CS_100.prereq.at(0) << std:: endl;
    return 0;
}

