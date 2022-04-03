struct tree {
	struct tree *left;
	struct tree *right;
	int value;
};

void preOrder(struct tree *p) {
	if (p == NULL) return;

	printf("%d\n", p->value);
	preOrder(p->left);
	preOrder(p->right);
}

void inOrder(struct tree *p) {
	if (p == NULL) return;

	inOrder(p->left);
	printf("%d\n", p->value);
	inOrder(p->right);
}

void postOrder(struct tree *p) {
	if (p == NULL) return;

	postOrder(p->left);
	postOrder(p->right);
	printf("%d\n", p->value);	
}


