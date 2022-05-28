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

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "File.h"

namespace sdds {
   FILE* fptr;
   bool openFile(const char filename[]) {
      fptr = fopen(filename, "r");
      return fptr != NULL;
   }
   int noOfRecords() {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1) {
         noOfRecs += (ch == '\n');
      }
      rewind(fptr);
      return noOfRecs;
   }
   void closeFile() {
      if (fptr) fclose(fptr);
   }
   bool read(char* name)
   {
       
           return  fscanf(fptr, "%[^,],", name);
   }

   bool read(int& number)
   {
       return fscanf(fptr, "%d,", &number);
   }

   bool read(char& grade)
   {
       return fscanf(fptr, "%c\n", &grade);
   }
}