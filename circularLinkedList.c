struct cll {
	struct cll *next;
	int value;
};

struct cll *header;


void addCll(int n) {
	struct cll *new, *p;
	new = malloc(sizeof(struct cll));
//	printf("new is %p\n", new);
//	printf("add start\n");
	p = header;
//	printf("p = header\n");
	if (header == NULL) {
//		printf("start to add first element\n");
		new->value = n;
//		printf("value added\n");
		new->next = new;
//		printf("new->next is new\n");
		header = new;
//		printf("complete adding\n");
//		printf("0: %p\n", header);
//		printf("1: %p\n", new);
	}
	else {
//		printf("second or more element start to add\n");
		do {
//			printf("header: %p\n", header);
//			printf("p     : %p\n", p);
			p = p->next;
		} while (header != p->next);
//		printf("adding element\n");
//		printf("header: %p\n", header);
//		printf("p     : %p\n", p);
	
		new->value = n;
		new->next = header;
		p->next = new;
/*		printf("results are below\n");
		printf("header: %p\n", header);
		printf("h next: %p\n", header->next);
		printf("p     : %p\n", p);
		printf("new   : %p\n", new);
		printf("n next: %p\n", new->next); */
	}
//	if (header.next == p->next) // add element
}

void deleteCll() {
	struct cll *p, *q;
	if (header == NULL) return; // when no element
//	p = malloc(sizeof(struct cll));
	p = header;
//	printf("p      : %p\n", p);
//	printf("p->next: %p\n", p->next);
	if (p == (p->next)) {
		header = NULL; // when 1 element
		p = NULL;
//		printf("header: %p\n", header);
//		printf("p     : %p\n", p);
	//	printf("header->next: %p\n", header->next);
		return;
	}
	// when 2 or more element
	q = header;
	p = p->next;
/*	do {
		p = p->next;
		q = q->next;
	} while (p->next != header);*/
	while (p->next != header) {
		p = p->next;
		q = q->next;
	}
	if ( p->next == header) {
		q->next = header;
	}
}

void printCll() {
	struct cll *p;
	if (header == NULL) return;
	p = header;
	printf("[");
/*	do {
		printf("%d ", p->value);
		p = p->next;
	} while ( (p->next) != (header) ); */
	while ( (p->next) != header) {
		printf("%d ", p->value);
		p = p->next;
	}
	printf("%d", p->value);
	printf("]\n");
}
