#pragma once
#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct Node {
	Data data;
	struct Node* next;
	struct Node* prev;
}Node;

typedef struct DLlist
{
	Node* head;
	Node* tail;
	Node* cur;
	int numofdata;
}List;
void ListInit(List* plist); //초기화
void LInsert(List* plist, Data data);//입력받고 노드 만들기

int LFirst(List* plist, Data* pdata); //첫번째 노드의 데이터 조회
int LNext(List* plist, Data* pata);// 첫번째 이후 노드 조회
int LRemove(List* plist);//LNext랑 반대방향 노드 조회
int LCount(List* plist);
