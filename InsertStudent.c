#include "Header.h"

void InsertStudent(Studentinform* p_temp, int* p_Count) {
	printf_s("\n");
	*p_Count = (*p_Count) + 1;
	printf_s("%d��° �л� �̸� : ", *p_Count);
	if (scanf_s("%s", p_temp->Name, NameString) == 0) {
		rewind(stdin);
	}
	printf_s("���� ����: ");
	if (scanf_s("%d", &(p_temp->kor)) == 0) {
		rewind(stdin);
	}
	printf_s("���� ����: ");
	if (scanf_s("%d", &(p_temp->math)) == 0) {
		rewind(stdin);
	}
	printf_s("���� ����: ");
	if (scanf_s("%d", &(p_temp->eng)) == 0) {
		rewind(stdin);
	}
	printf_s("���� ����: ");
	if (scanf_s("%d", &(p_temp->history)) == 0) {
		rewind(stdin);
	}
	printf_s("��ȸ ����: ");
	if (scanf_s("%d", &(p_temp->social)) == 0) {
		rewind(stdin);
	}
	p_temp->sum = p_temp->kor + p_temp->math + p_temp->eng + p_temp->history + p_temp->social;
	p_temp->avg = (float)(p_temp->sum) / SubjectNum;
	printf_s("\n");
}