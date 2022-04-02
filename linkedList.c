struct node {
	struct node *next;
	int value;
};

struct node head;
//struct node *current = &head;
void text(char s[]) {
	printf("%s\n", s);
}

void addList(int n) { /* simply add node to last */
	//text("add start");
	struct node *new, *chk;
	//text("try to create new");
	if ((new = malloc(sizeof(struct node))) == NULL)
		printf("short of memory\n");
	if ((chk = malloc(sizeof(struct node))) == NULL)
		printf("short of memory\n");
	//text("create new successfully");
	//printf("new is %p\n", new);
//	printf("current is %p\n", current);
	new->value = n;
	new->next = NULL;
	chk = &head;
	while ((chk->next) != NULL) {
		chk = chk->next;
	}
	chk->next = new;
	chk = new;
//	printf("chk is %p\n", chk);
//	printf("current is %p\n", current);
	
	//text("add");
//	printf("current is %d\n", current->value);
//	printf("head's next value is %d\n", (head.next)->value);
//	free(new);
//	printf("current is %d\n", current->value);
}

void deleteList() { // delete last element
	struct node *p;
	if ((p = malloc(sizeof(struct node))) == NULL)
		printf("short of memory\n");
	p = &head;
	if (p->next == NULL) return;
	while ( ( (p->next)->next ) != NULL) {
		p = p->next;
	}
	if (p == &head) return;
	p->next = NULL;
}

/*
void deleteList(int idx) { // head's next is 0 
	int cnt = 0;
	struct node *left, *mid;
	if ((left = malloc(sizeof(struct node))) == NULL)
		printf("short of memory\n");
	if ((mid = malloc(sizeof(struct node))) == NULL)
		printf("short of memory\n");
	left = &head;
	mid = left->next;
	if (mid == NULL) return;
	while (cnt < idx && ((mid->next) != NULL) ) {
		++cnt;
		printf("cnt is %d\n", cnt);
		mid = mid->next;
		left = left->next;
	}
		
	printf("%d is deleted\n", mid->value);
	left->next = mid->next;
//	current = left->next;
//	free(left);
//	free(mid);
}
*/


void printList() {
//	text("print start");
	if (head.next == NULL) return;
	struct node *p;
//	text("try to create p");
	if ((p = malloc(sizeof(struct node))) == NULL)
		printf("short of memory\n");
//	text("create p successfully");
	p = &head;
//	printf("p(head) = %p\n", p);
	printf("[");
/*	if (p->next == NULL) {
		printf("[none]\n");
		return;*/	
//	}

	while ( (p->next) != NULL) {
		p = p->next;
	//	printf("p is %p\n", p);
		printf("%d ", p->value);
	}
	printf("]\n");
//	text("print end");
//	free(p);
}
