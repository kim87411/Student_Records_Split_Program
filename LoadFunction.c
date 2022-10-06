#include "Header.h"

void LoadFunction(FILE** p_Load, NODE** p_head, NODE** p_tail, NODE* p_p, Studentinform p_temp, int* p_Count) {
	fopen_s(p_Load, "C:\\Users\\kms41\\Desktop\\save_file\\save_file.bin", "rb");
	if (*p_Load != NULL) {
		while (fread(&p_temp, sizeof(Studentinform), 1, *p_Load) == 1) {
			if (*p_head != NULL) {
				p_p = *p_tail;
				p_p->next = (NODE*)malloc(sizeof(NODE));
				if (p_p->next != NULL) {
					*p_tail = p_p->next;
					memcpy_s(&(*p_tail)->student, sizeof(Studentinform), &p_temp, sizeof(Studentinform));
					(*p_tail)->next = NULL;
					(*p_tail)->prev = p_p;
					*p_Count = (*p_Count) + 1;
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
					*p_Count = (*p_Count) + 1;
					memset(&p_temp, 0, sizeof(p_temp));
				}
				else {
					printf_s("*p_tail is NULL!!\n");
				}
			}
		}
		fclose(*p_Load);
		printf_s("\n");
	}
	else {
		printf_s("\n");
	}
}