#pragma once
#include<stdio.h>
#include<string.h>
#include<malloc.h>

#define NameString 30
#define SubjectNum 5.0f

typedef struct studentinform {

	char Name[NameString];
	int kor;
	int math;
	int eng;
	int history;
	int social;
	int sum;
	float avg;

}Studentinform;


typedef struct node {

	struct node* next;
	struct node* prev;
	Studentinform student;

}NODE;

void LoadFunction(FILE** p_Load, NODE** p_head, NODE** p_tail, NODE* p_p, Studentinform p_temp, int* p_Count);

void InsertStudent(Studentinform* p_temp, int* p_Count);

int NameCheck(Studentinform* p_temp, NODE** p_head, NODE* p_p, int* p_Count);

void StudentAllView(NODE** p_head, NODE* p_p);

void StudentView(Studentinform* p_temp, NODE** p_head, NODE* p_p);

void NodePlusFunction(NODE** p_head, NODE** p_tail, NODE* p_p, Studentinform p_temp, int* p_Count);

void SaveFunction(FILE** p_Save, NODE** p_head, NODE* p_p);

void RemoveFunction(Studentinform* p_temp, NODE** p_head, NODE** p_tail, NODE* p_p, int* p_Count);

void NodeDeleteFunction(NODE** p_head, NODE** p_tail, NODE* p_p);