#include "Header.h"

void NodeDeleteFunction(NODE** p_head, NODE** p_tail, NODE* p_p) {
	if ((*p_head != NULL) && (*p_tail != NULL)) {
		while (*p_head != NULL) {
			p_p = *p_head;
			*p_head = p_p->next;
			free(p_p);
		}
	}
	else {
		*p_head = *p_tail = p_p = NULL;
	}
}