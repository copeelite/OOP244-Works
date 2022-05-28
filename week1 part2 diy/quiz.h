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

#ifndef _244_QUESTION_H // replace with relevant names
#define _244_QUESTION_H
#include <cstdio>
namespace quizzer {
	const int maxQuestion = 60;
	const int maxAnswers = 10;
	const int maxTextOfQuestion = 1024;
	const int maxTextOfAnswer = 128;
	struct Answer
	{
		char m_correct;   // X is correct space is false
		char m_answerText[maxTextOfAnswer];
	};
	//IPC 144 fardad   (playlist for 2181)
	struct Question
	{
		char m_type;
		char m_questionText[maxTextOfQuestion];
		Answer m_quizAnswer[maxAnswers] = {};
	};

	struct Quiz
	{
		Question quizQuestion;

	};

	int readAnswer(Answer* aptr, FILE* fptr);
	int readQuestion(Question* aptr, FILE* fptr);

	



}




#endif

