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
		printf_s("      선  택    \n");
		printf_s("================\n");
		printf_s(" 1. 학생성적입력\n");
		printf_s(" 2. 입력사항확인\n");
		printf_s(" 3. 학생성적찾기\n");
		printf_s(" 4. 특정학생삭제\n");
		printf_s(" 5. 학생성적저장\n");
		printf_s(" 6. 프로그램종료\n");
		printf_s("================\n");
		printf_s(" 번호선택: ");
		if (scanf_s("%d", &SelectNum) == 0) {
			rewind(stdin);
		}
		switch (SelectNum) {
		case 1://학생성적입력
			InsertStudent(&temp, &Count);
			if (NameCheck(&temp, &head, p, &Count) == 1) {
				NodePlusFunction(&head, &tail, p, temp, &Count);
			}
			else {
				printf_s("\n입력된 학생이 존재합니다.\n");
				memset(&temp, 0, sizeof(temp));
			}
			break;

		case 2://입력사항확인
			if (head != NULL) {
				StudentAllView(&head, p);
			}
			else {
				printf_s("\n\n");
				printf_s("입력된 학생이 없습니다.");
				printf_s("\n\n");
			}
			break;

		case 3://학생성적찾기

			if (head != NULL) {
				printf_s("\n찾을 학생이름 입력 :");
				scanf_s("%s", temp.Name, NameString);
				if (NameCheck(&temp, &head, p, &Count) == 0) {
					StudentView(&temp, &head, p);
				}
				else {
					printf_s("\n찾는 학생은 존재하지 않습니다.\n");
				}
			}
			else {
				printf_s("\n\n");
				printf_s("입력된 학생이 없습니다.");
				printf_s("\n\n");
			}

			break;

		case 4://특정학생삭제
			if (head != NULL) {
				printf_s("\n삭제할 학생의 이름: ");
				scanf_s("%s", temp.Name, NameString);
				RemoveFunction(&temp, &head, &tail, p, &Count);
			}
			else {
				printf_s("\n\n");
				printf_s("입력된 학생이 없습니다.");
				printf_s("\n\n");
			}

			break;

		case 5://학생성적저장
			if (head != NULL) {
				SaveFunction(&Save, &head, p);
			}
			else {
				printf_s("\n\n");
				printf_s("입력된 학생이 없습니다.");
				printf_s("\n\n");
			}
			break;

		case 6://프로그램종료
			SaveFunction(&Save, &head, p);
			NodeDeleteFunction(&head, &tail, p);
			break;

		default:
			printf_s("\n\n");
			printf_s("잘못 누르셨습니다.");
			printf_s("\n\n");
		}
		if (SelectNum == 6) {
			break;
		}
	}
	return(0);
}