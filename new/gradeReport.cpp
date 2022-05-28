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
/* ------------------------------------------------------
Workshop 2 part 1
Module: N/A
Filename: gradeReport.cpp 
  in submission this file will be replaced with main_prof.cpp
  that loads "simpsons.csv" instead
Version 1
Revision History
-----------------------------------------------------------
Date       Reason
-----------------------------------------------------------*/
#include <iostream>
#include "Student.h"
using namespace std;
using namespace sdds;
int main() {
   if (load("students.csv")) 
{
      display();
   }
   deallocateMemory();


    return 0;
}