#include "Header.h"

int NameCheck(Studentinform* p_temp, NODE** p_head, NODE* p_p, int* p_Count) {
	p_p = *p_head;
	if (p_p != NULL) {
		while (p_p != NULL) {
			if (strcmp(p_temp->Name, p_p->student.Name) == 0) {
				*p_Count = (*p_Count) - 1;
				return(0);
			}
			p_p = p_p->next;
		}
	}
	return(1);
}