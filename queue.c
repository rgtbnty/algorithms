const int QUEUESIZE = 4;
int queue[4];
int front = 0;
int rear = 0;
int queueResult;

void queueInit() {
	front = 0;
	rear = 0;
}

void enqueue(int n) {
	if (front == ( (rear+1) % QUEUESIZE) )
		printf("queue is Full!\n");
	else {
		queue[rear] = n;
		++rear;
	}
}

int dequeue() {
	if (front == rear) 
		printf("queue is Empty!\n");
	else {
		queueResult = queue[front];
		++front;
		return queueResult;
	}
}
