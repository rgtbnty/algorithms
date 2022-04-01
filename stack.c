int top = -1;
const int STACKSIZE = 3;
int stack[3];

void stackInit() {
	top = -1;
}

void push(int n) {
	if (top >= (STACKSIZE - 1))
		printf("stack is Full!\n");
	else {
		++top;
		stack[top] = n;
	}
}

int pop() {
	if (top <= -1) 
		printf("stack is Empty!\n");
	else {
		int rsl;
		rsl = stack[top];
		--top;
		return rsl;
	}
}


