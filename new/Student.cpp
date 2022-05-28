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
without his help, I cannot run this code successfully, my code have strcpy problem, and don't know why it is not working for me.
*****************************************************************************
*/
#define _CRT_SECURE_NO_WARINGS 


#include <iostream>
#include <cstring>

#include "Student.h"
#include "File.h"

using namespace std;
namespace sdds{
    

    int noOfStudents;
    Student* students;
  
    // get helped by Yuchi
    bool load(Student* student)
    { //& ±ðÃû
       // * ´æµØÖ·
        char tempName[128] = { 0 };
        bool success = false;

        if (read(tempName))
        {
            student->m_name = new char[strlen(tempName) + 1];    // char* m_name;//dynamic size
            strcpy(student->m_name, tempName);

            if (read(student->m_studentNumber) && read(student->m_grade))
            {
                success = true;
            }
        }
        return success;
    }
    // get helped by Yuchi

    bool load(const char filename[])
    {
        int count = 0;
        bool success = false;

        if (openFile(filename))
        {
            noOfStudents = noOfRecords();
            students = new Student[noOfStudents];

            for (int i = 0; i < noOfStudents; i++)
            {
                if (load(&students[i]))
                {
                    count++;
                }
            }

            if (noOfStudents != count)
            {
                cout << "Error: incorrect number of records read; the data is possibly corrupted." << endl;

            }
            else
            {
                success = true;
            }
            closeFile();
        }
        
        return success; 
    }
    void display(const Student& student)
    {
        cout  << student.m_name << ", " << student.m_studentNumber << ": " << student.m_grade;
    }
    void display()
    {
        sort();
        for (int i = 0; i < noOfStudents; i++)
        {
            cout << i + 1 << ": ";
                display(students[i]);
        }
    }
    // get helped by Yuchi

    void deallocateMemory()
    {
        for (int i = 0; i < noOfStudents; i++)
        {
            delete[] students[i].m_name;
        }
        delete[] students;
        students = nullptr;

    }


    void sort() {
        int i, j;
        Student temp;
        for (i = noOfStudents - 1; i > 0; i--) {
            for (j = 0; j < i; j++) {
                if (students[j].m_grade > students[j + 1].m_grade) {
                    temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }
    }


}


//Below the YuChi help me, but I still don't know why in my code strcpy not working.
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>   
//#include <cstring>
//
//#include "File.h"
//#include "Student.h"
//
//using namespace std;
//namespace sdds
//{
//    int noOfStudents;
//    Student* students;
//
//    bool load(Student& student)
//    {
//        char tempName[128] = { 0 };
//        bool success = false;
//
//        if (read(tempName))
//        {
//            student.m_name = new char[strlen(tempName) + 1];   
//            strcpy(student.m_name, tempName);
//
//            if (read(student.m_studentNumber) && read(student.m_grade))
//            {
//                success = true;
//            }
//        }
//        return success;
//    }
//
//    bool load(const char filename[])      
//    {
//        int count = 0;
//        bool success = false;
//
//        if (openFile(filename))
//        {
//            noOfStudents = noOfRecords();
//            students = new Student[noOfStudents];
//
//            for (int i = 0; i < noOfStudents; i++)
//            {
//                if (load(students[i]))
//                {
//                    count++;
//                }
//            }
//
//            if (noOfStudents != count)
//            {
//                cout << "Error: incorrect number of records read; the data is possibly corrupted." << endl;
//            }
//            else
//            {
//                success = true;
//            }
//            closeFile();      
//        }
//
//        return success;
//    }
//    void display(const Student& student)
//    {
//        cout << student.m_name << ", " << student.m_studentNumber;
//        cout << ": " << student.m_grade << endl;
//    }
//
//    void display()
//    {
//        sort();
//        for (int i = 0; i < noOfStudents; i++)
//        {
//            cout << i + 1 << ": ";
//            display(students[i]);
//        }
//    }
//
//    void deallocateMemory()
//    {
//        for (int i = 0; i < noOfStudents; i++)
//        {
//            delete[] students[i].m_name;
//        }
//
//        delete[] students;
//        students = nullptr; 
//    }
//
//    void sort()
//    {
//        int i, j;
//        Student temp;
//
//        for (i = noOfStudents - 1; i > 0; i--)
//        {
//            for (j = 0; j < i; j++)
//            {
//                if (students[j].m_grade > students[j + 1].m_grade)
//                {
//                    temp = students[j];
//                    students[j] = students[j + 1];
//                    students[j + 1] = temp;
//                }
//            }
//        }
//    }


//}


