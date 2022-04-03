struct dll {
	struct dll *next;
	struct dll *prev;
	int value;
};

struct dll headDll;
struct dll *crtDll;

void initDll() {
	headDll.next = &headDll;
	headDll.prev = &headDll;
	crtDll = &headDll;
}


void addDll(int n) { // add element next crtDll's pointing
	struct dll *new;
	new = malloc(sizeof(struct dll));
	new->value = n;

	new->prev = crtDll;
	new->next = crtDll->next;
	(crtDll->next)->prev = new;
	crtDll->next = new;
}

void deleteDll() { // delete element crtDll's pointing, and then crtDll points previous thing
	if (crtDll == &headDll) return;
	
	(crtDll->prev)->next = crtDll->next;
	(crtDll->next)->prev = crtDll->prev;
	crtDll = (crtDll)->prev;
	// if (crtDll == p) not destroy header!
}

void movePoint(int c) { // go ahead as int c
	for (int i = 0; i < c; ++i) {
		crtDll = (crtDll->next);
	}
}

void printDll() {
	struct dll *q;
	printf("[");
	q = &headDll;
	while( (q->next) != &headDll) {
		q = q->next;
		if (q == crtDll) {
		 printf("**%d**<-point ", q->value);	
		}
		else {
			printf("%d ", q->value);
		}
	}
	printf("]\n");
}
