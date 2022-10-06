#include "Header.h"

void SaveFunction(FILE** p_Save, NODE** p_head, NODE* p_p) {
	fopen_s(p_Save, "C:\\Users\\kms41\\Desktop\\save_file\\save_file.bin", "wb");
	if (remove("C:\\Users\\kms41\\Desktop\\save_file\\save_file.bin") == 0) {
		if (*p_Save != NULL) {
			p_p = *p_head;
			while (p_p != NULL) {
				fwrite(&(p_p->student), sizeof(Studentinform), 1, *p_Save);
				p_p = p_p->next;
			}
			fclose(*p_Save);
		}
		else {
			printf_s("\n");
		}
	}
	else {
		if (*p_Save != NULL) {
			p_p = *p_head;
			while (p_p != NULL) {
				fwrite(&(p_p->student), sizeof(Studentinform), 1, *p_Save);
				p_p = p_p->next;
			}
			fclose(*p_Save);
		}
		else {
			printf_s("\n");
		}
	}
}