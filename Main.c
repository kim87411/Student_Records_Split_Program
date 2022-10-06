#include "Header.h"


int main(void) {

	FILE* Load = NULL;
	FILE* Save = NULL;

	NODE* head = NULL;
	NODE* tail = NULL;
	NODE* p = NULL;

	int Count = 0;
	int SelectNum = 0;

	Studentinform temp;

	memset(&temp, 0, sizeof(temp));
	LoadFunction(&Load, &head, &tail, p, temp, &Count);

	while (1) {
		printf_s("================\n");
		printf_s("      ��  ��    \n");
		printf_s("================\n");
		printf_s(" 1. �л������Է�\n");
		printf_s(" 2. �Է»���Ȯ��\n");
		printf_s(" 3. �л�����ã��\n");
		printf_s(" 4. Ư���л�����\n");
		printf_s(" 5. �л���������\n");
		printf_s(" 6. ���α׷�����\n");
		printf_s("================\n");
		printf_s(" ��ȣ����: ");
		if (scanf_s("%d", &SelectNum) == 0) {
			rewind(stdin);
		}
		switch (SelectNum) {
		case 1://�л������Է�
			InsertStudent(&temp, &Count);
			if (NameCheck(&temp, &head, p, &Count) == 1) {
				NodePlusFunction(&head, &tail, p, temp, &Count);
			}
			else {
				printf_s("\n�Էµ� �л��� �����մϴ�.\n");
				memset(&temp, 0, sizeof(temp));
			}
			break;

		case 2://�Է»���Ȯ��
			if (head != NULL) {
				StudentAllView(&head, p);
			}
			else {
				printf_s("\n\n");
				printf_s("�Էµ� �л��� �����ϴ�.");
				printf_s("\n\n");
			}
			break;

		case 3://�л�����ã��

			if (head != NULL) {
				printf_s("\nã�� �л��̸� �Է� :");
				scanf_s("%s", temp.Name, NameString);
				if (NameCheck(&temp, &head, p, &Count) == 0) {
					StudentView(&temp, &head, p);
				}
				else {
					printf_s("\nã�� �л��� �������� �ʽ��ϴ�.\n");
				}
			}
			else {
				printf_s("\n\n");
				printf_s("�Էµ� �л��� �����ϴ�.");
				printf_s("\n\n");
			}

			break;

		case 4://Ư���л�����
			if (head != NULL) {
				printf_s("\n������ �л��� �̸�: ");
				scanf_s("%s", temp.Name, NameString);
				RemoveFunction(&temp, &head, &tail, p, &Count);
			}
			else {
				printf_s("\n\n");
				printf_s("�Էµ� �л��� �����ϴ�.");
				printf_s("\n\n");
			}

			break;

		case 5://�л���������
			if (head != NULL) {
				SaveFunction(&Save, &head, p);
			}
			else {
				printf_s("\n\n");
				printf_s("�Էµ� �л��� �����ϴ�.");
				printf_s("\n\n");
			}
			break;

		case 6://���α׷�����
			SaveFunction(&Save, &head, p);
			NodeDeleteFunction(&head, &tail, p);
			break;

		default:
			printf_s("\n\n");
			printf_s("�߸� �����̽��ϴ�.");
			printf_s("\n\n");
		}
		if (SelectNum == 6) {
			break;
		}
	}
	return(0);
}