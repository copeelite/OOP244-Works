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
namespace quizzer {
	const int maxQuestion = 60;
	const int maxAnswers = 10;
	const int maxTextOfQuestion = 1024;
	const int maxTextOfAnswer = 128;
	struct question
	{
		char a_or_c;
		char questionText[maxTextOfQuestion + 1];
	};

	struct answer
	{
		char correct_or_incorrect;
		char answerText[maxTextOfAnswer + 1];
	};
	struct quiz
	{
		question quizQuestion;
		answer quizAnswer[maxAnswers + 1] = {};
	};


	int LoadQuiz(const char* filename);
	int IsQuizValid();
	int HasMoreQuestions();
	void ShowNextQuestion();

	void ShowQuizResults();




}




#endif

