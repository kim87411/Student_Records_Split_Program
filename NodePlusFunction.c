#include "Header.h"

void NodePlusFunction(NODE** p_head, NODE** p_tail, NODE* p_p, Studentinform p_temp, int* p_Count) {

	if (*p_head != NULL) {
		p_p = *p_tail;
		p_p->next = (NODE*)malloc(sizeof(NODE));
		if (p_p->next != NULL) {
			*p_tail = p_p->next;
			memcpy_s(&(*p_tail)->student, sizeof(Studentinform), &p_temp, sizeof(Studentinform));
			(*p_tail)->next = NULL;
			(*p_tail)->prev = p_p;
			memset(&p_temp, 0, sizeof(p_temp));
		}
		else {
			printf_s("*p_tail->next is NULL!!\n");
		}
	}
	else {
		*p_head = (NODE*)malloc(sizeof(NODE));
		*p_tail = *p_head;

		if (*p_tail != NULL) {
			memcpy_s(&(*p_tail)->student, sizeof(Studentinform), &p_temp, sizeof(Studentinform));
			(*p_tail)->next = NULL;
			(*p_tail)->prev = NULL;
			memset(&p_temp, 0, sizeof(p_temp));
		}
		else {
			printf_s("*p_tail is NULL!!\n");
		}
	}
}