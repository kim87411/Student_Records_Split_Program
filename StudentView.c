#include "Header.h"

void StudentView(Studentinform* p_temp, NODE** p_head, NODE* p_p) {
	p_p = *p_head;
	if (p_p != NULL) {
		while (p_p != NULL) {
			if (strcmp(p_temp->Name, p_p->student.Name) == 0) {
				printf_s("=============================================================\n");
				printf_s("  이름  국어  수학  영어  역사  사회  합계     평균\n");
				printf_s("=============================================================\n");
				printf_s("%8s %3d %5d %5d %5d %5d %6d %11f\n", p_p->student.Name, p_p->student.kor, p_p->student.math,
					p_p->student.eng, p_p->student.history, p_p->student.social, p_p->student.sum, p_p->student.avg);
				printf_s("=====================================================\n");
				memset(p_temp, 0, sizeof(Studentinform));
				break;
			}
			else {
				p_p = p_p->next;
			}
		}
		memset(p_temp, 0, sizeof(Studentinform));
	}
	else {
		printf_s("*p_head is NULL!!");
	}
}