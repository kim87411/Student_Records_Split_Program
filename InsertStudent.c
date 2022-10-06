#include "Header.h"

void InsertStudent(Studentinform* p_temp, int* p_Count) {
	printf_s("\n");
	*p_Count = (*p_Count) + 1;
	printf_s("%d번째 학생 이름 : ", *p_Count);
	if (scanf_s("%s", p_temp->Name, NameString) == 0) {
		rewind(stdin);
	}
	printf_s("국어 성적: ");
	if (scanf_s("%d", &(p_temp->kor)) == 0) {
		rewind(stdin);
	}
	printf_s("수학 성적: ");
	if (scanf_s("%d", &(p_temp->math)) == 0) {
		rewind(stdin);
	}
	printf_s("영어 성적: ");
	if (scanf_s("%d", &(p_temp->eng)) == 0) {
		rewind(stdin);
	}
	printf_s("역사 성적: ");
	if (scanf_s("%d", &(p_temp->history)) == 0) {
		rewind(stdin);
	}
	printf_s("사회 성적: ");
	if (scanf_s("%d", &(p_temp->social)) == 0) {
		rewind(stdin);
	}
	p_temp->sum = p_temp->kor + p_temp->math + p_temp->eng + p_temp->history + p_temp->social;
	p_temp->avg = (float)(p_temp->sum) / SubjectNum;
	printf_s("\n");
}