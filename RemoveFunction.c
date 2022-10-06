#include "Header.h"

void RemoveFunction(Studentinform* p_temp, NODE** p_head, NODE** p_tail, NODE* p_p, int* p_Count) {
	p_p = *p_head;
	int n = *p_Count;

	if ((*p_head != NULL) && (*p_tail != NULL) && (p_p != NULL)) {
		while (p_p != NULL) {
			if (strcmp(p_temp->Name, p_p->student.Name) == 0) {
				if (p_p == *p_head) {
					if ((*p_head)->next != NULL) {
						*p_head = p_p->next;
						free(p_p);
						(*p_head)->prev = NULL;
						p_p = NULL;
					}
					else {
						free(p_p);
						p_p = *p_head = NULL;
					}
				}
				else if (p_p == *p_tail) {
					*p_tail = p_p->prev;
					free(p_p);
					(*p_tail)->next = NULL;
				}
				else {
					(p_p->next)->prev = p_p->prev;
					(p_p->prev)->next = p_p->next;
					free(p_p);
					p_p = NULL;
				}
				*p_Count = (*p_Count) - 1;
				break;
			}
			else {
				p_p = p_p->next;
			}
		}

		if (n == *p_Count) {
			printf_s("\n\n찾는 학생이 없습니다.\n\n");
			memset(p_temp, 0, sizeof(Studentinform));
		}
		else {
			printf_s("\n\n찾는 학생을 삭제했습니다.\n\n");
			memset(p_temp, 0, sizeof(Studentinform));
		}


	}
	else {
		printf_s("p_p, *p_head, *p_tail is NULL!!");
	}
}