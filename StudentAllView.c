#include "Header.h"

void StudentAllView(NODE** p_head, NODE* p_p) {

	int i = 1;
	p_p = *p_head;

	if (p_p != NULL) {

		printf_s("\n\n");
		printf_s("=============================================================\n");
		printf_s("  ����  �̸�  ����  ����  ����  ����  ��ȸ  �հ�     ���\n");
		printf_s("=============================================================\n");
		while (p_p != NULL) {
			printf_s("%4d %8s %3d %5d %5d %5d %5d %6d %11f\n", i++, p_p->student.Name, p_p->student.kor, p_p->student.math,
				p_p->student.eng, p_p->student.history, p_p->student.social, p_p->student.sum, p_p->student.avg);

			p_p = p_p->next;
		}
		printf_s("=============================================================\n");
		printf_s("\n\n");
	}
	else {
		printf_s("\n\n");
		printf_s("�Էµ� �л��� �����ϴ�.");
		printf_s("\n\n");
	}
}