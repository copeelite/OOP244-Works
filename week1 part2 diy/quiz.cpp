/*
*****************************************************************************
						Assignment 1 - Workshop1Part1
Full Name  :FanghaoMeng
Student ID#:180210213
Email      :fmeng18@myseneca.ca
Section    :OOP244NAA

Authenticity Declaration:
I have done all the coding by myself and only copied the code that my professor provided
to complete my workshops and assignments.
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include <fstream>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<string>
#include "quiz.h"
#include "question.h"
#include <typeinfo>


//
//const int maxQuestion = 60;
//const int maxAnswers = 10;
//const int maxTextOfQuestion = 1024;
//const int maxTextOfAnswer = 128;
//
//struct question
//{
//	char  a_or_c;;
//	char questionText[maxTextOfQuestion + 1];
//};
//
//struct answer
//{
//	char testResult;
//	char answerText[maxTextOfAnswer + 1];
//};
//struct quiz
//{
//	question quizQuestion;
//	answer quizAnswer[maxAnswers + 1];
//};

using namespace std;
struct question;
struct answer;
struct quiz;

namespace quizzer {
	//global variable
	int num_of_question = 0;
	int num_of_showquestion = 0;
	int score = 0;
	int totalQuestions = 0;

	quiz ques[maxQuestion + 1] = {};



	int checkIfQuestion(char* value)
	{
		int i = 0;
		char test1[] = "{ma}";
		char test2[] = "{mc}";
		int count = 0;
		while (value[count] != '\0') {
			count++;
		}
		if (count > 1029)
		{
			return 0;
		}
		if (strncmp(test1, value, 3) || strncmp(test2, value, 3)) //0, 1, 2, 3
		{
			return 1;
		}
		return 0;
	}

	int checkIfAnswer(char* value) {
		int i = 0;
		char test1[] = "[ ]";
		char test2[] = "[X]";
		int count = 0;
		while (value[count] != '\0') {
			count++;
		}
		if (count > 129)
		{
			return 0;
		}
		if (strncmp(test1, value, 3) || strncmp(test2, value, 3))
		{
			return 1;
		}
		return 0;

	}




	int LoadQuiz(const char* filename) {
		int total_questions = 0;
		int i = 0, j = 0;
		char line_check[maxTextOfQuestion + 1];
		FILE* ptr;
		ptr = fopen(filename, "r");
		if (ptr == NULL) { return 1; }
		//check the line for identifying if valid
		while (fscanf(ptr, "%[^\n] ", line_check) != EOF) {
			//cout << line_check << endl;
			//cout << checkIfQuestion(line_check) << endl;
			if (checkIfQuestion(line_check))
			{
				ques[total_questions].quizQuestion.a_or_c = line_check[2];
				for (i = 0; i < 1029 && line_check[i + 5] != '\0'; i++)
				{
					ques[total_questions].quizQuestion.questionText[i] = line_check[i + 5];
				}
				total_questions++;
				//refresh for another question
				j = 0;
			}
			else if (checkIfAnswer(line_check))
			{
				ques[total_questions - 1].quizAnswer[j].correct_or_incorrect = line_check[1];
				for (i = 0; i < (maxTextOfAnswer + 1); i++) {
					if (line_check[i + 4]) {
						ques[total_questions - 1].quizAnswer[j].answerText[i] = line_check[i + 4];
					}
				}
				j++;

			}

			totalQuestions = total_questions;



		}if (ptr) fclose(ptr);
		return 0;
	}
	int IsQuizValid() {
		int correct = 0;
		int total_questions = totalQuestions;
		int i = 0;
		if (total_questions < 5)
		{
			return 0;
		}
		for (i = 0; i < 61; i++)
		{	//we use this loop to find the questionTitle 
			if (ques[i].quizQuestion.a_or_c == 'a' || ques[i].quizQuestion.a_or_c == 'c')
			{
				if (ques[i].quizQuestion.a_or_c == 'c')
				{
					for (int j = 0; j < 10; j++)
					{
						if (ques[i].quizAnswer[j].correct_or_incorrect == 'X')
						{
							correct++;
						}
					}
					if (correct == 1)
					{
						cout << "Question " << i + 1 << " -> OK" << endl;
					}
					else { cout << "Question " << i + 1 << " -> ERROR" << endl; }
				}
				else
				{
					for (int j = 0; j < 10; j++)
					{
						if (ques[i].quizAnswer[j].correct_or_incorrect == 'X')
						{
							correct++;
						}

					}
					if (correct >= 1)
					{
						cout << "Question " << i + 1 << " -> OK" << endl;
					}
					else { cout << "Question " << i + 1 << " -> ERROR" << endl; }
				}
			}
			else
			{
				return 0;
			}
			//identify it's a or c
			//for
				// use this to find the answer
				//in this loop you have to identify it's [ ] or [x]
		}
		return 1;
	}
	int HasMoreQuestions() {
		return 1;
	}
	void ShowNextQuestion() {
		int j = 0;
		int i = 0;
		cout << ques[i].quizAnswer[j].answerText[i] << endl;

	}

	void ShowQuizResults() {
		cout << "hello";
	}


}