struct bst {
	struct bst *left;
	struct bst *right;
	int value;
};

struct bst *broot = NULL;


struct bst*  addbst(int n) {
	struct bst **p, *new;
	p = &broot; // (*broot)'s pointing thing is jsut broot(*broot is pointer)

	while (*p != NULL) {
		if (n == ((*p)->value)) return NULL;
		else if (n < ((*p)->value)) p = &(*p)->left;
		else p = &(*p)->right;
	}

	new = malloc(sizeof(struct bst));

	new->left = NULL;
	new->right = NULL;
	new->value = n;
	*p = new;
}

struct bst* deletemin(struct bst **p) {
	struct bst *x;
	while ((*p)->left != NULL)
		p = &(*p)->left;
	x = *p;
	*p = (*p)->right;
	return x;
}

void delete(int n) {
	struct bst **p, *x;
	p = &broot;

	while (*p != NULL) {
		if (n == ((*p)->value)) {
			x = *p;
			if (x->left == NULL && (x->right) == NULL) /* leaf(has no child) */
				*p = NULL;
			else if ( (x->left) == NULL)
				*p = x->right;
			else if ( (x->right) == NULL)
				*p = x->left;
			else {
				*p = deletemin(&x->right);
				(*p)->right = x->right;
				(*p)->left = x->left;
			}
			free(x);
			return;
		}
		else if (n < ((*p)->value)) p = &(*p)->left;
		else p = &(*p)->right;
	}
	return;
}

struct bst* searchbst(int n) {
	struct bst *p;
	p = broot;
	while (p != NULL) {
		if (n == (p->value)) return p;
		else if (n < (p->value) ) p = (p->left);
		else p = (p->right);
	}
	return NULL;
}

