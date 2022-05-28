/*
*****************************************************************************
Full Name  :FanghaoMeng
Student ID#:180210213
Email      :fmeng18@myseneca.ca
Section    :OOP244NAA

The classmate help me with the code
Full Name  : Yuchi Zheng
Student ID#: 025848151
Email      : yzheng103@myseneca.ca
Section    : NAA
Date       : 27th, May, 2022

Authenticity Declaration:
I have done  the coding with Yuchi Zheng's help, he helps me a lot with the load functions and deallocate memory function,
without his help, I cannot run this code successfully.
*****************************************************************************
*/
#ifndef SDDS_STUDENT_H_
#define SDDS_STUDENT_H_
namespace sdds {
    struct Student {
        char* m_name;
        int m_studentNumber;
        char m_grade;
    };
    
    void sort();
    bool load(Student* student);
    bool load(const char filename[]);
    void display(const Student& student);
    void display();
    void deallocateMemory();


}
#endif // !SDDS_FILE_H_