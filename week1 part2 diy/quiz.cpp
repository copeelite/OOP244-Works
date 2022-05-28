#include <cstdio>
#include "quiz.h"
#define  _CRT_NONSTDC_NO_WARNINGS
using  namespace std;
namespace quizzer {
	/*
	[ ] principal
	*/
	int readAnswer(Answer* aptr, FILE* fptr) {
		int ok = 0;
		return fscanf(fptr, "[%c] %[^\n]\n", &aptr->m_correct, aptr->m_answerText);
		if (fscanf(fptr, "[%c] %[^\n]\n", &aptr->m_correct, aptr->m_answerText) == 2) {
			
			ok = 1;
		}
		return ok;
	}
	/*
	
{mc} A C program can have only one function.
[ ] True
[X] False
	*/
	int readQuestion(Question* qptr, FILE* fptr){
		int ok = 0;
		fscanf(fptr, "{m%c} %[^\n]\n", &qptr->m_type, qptr->m_questionText);
		for (int i = 0; i < maxTextOfAnswer; i++) {
			if (readAnswer(&qptr->m_quizAnswer[i], fptr))
			{
				return ok;
			};
			ok = 1;

		}
	}

}