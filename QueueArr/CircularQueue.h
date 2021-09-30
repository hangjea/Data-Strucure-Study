#ifndef __C_QUEUE_H__
#define __C_QUEUE_H__

#define TRUE	1
#define FALSE	0

#define QUE_LEN	100
typedef int Data;

typedef struct _cQueue
{
	int front; //시작과 애가 이동하면서 앞에꺼 빼냄
	int rear; //끝부분
	Data queArr[QUE_LEN]; //int 형 배열
} CQueue;

typedef CQueue Queue;

void QueueInit(Queue * pq);
int QIsEmpty(Queue * pq);

void Enqueue(Queue * pq, Data data);
Data Dequeue(Queue * pq);
Data QPeek(Queue * pq);

#endif
