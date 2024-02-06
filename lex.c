#include<stdio.h>

struct node{
	int content;
	struct node *children[];
} root, child, childBis, childChild;

struct node* lastchild(struct node *root){
	int counter = 0;
}

int main() {
	root.content = 9;
	child.content = 8;
	childBis.content = 7;
	childChild.content = 6;

	printf("%d\n", lastchild(&root)->content);
    return 0;
}
