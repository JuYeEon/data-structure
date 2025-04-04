#include <stdio.h>
#include <stdlib.h>

struct list {
	int n;
	int index;
	struct list *p;
};

typedef struct list sl;

int main(int argc, char *argv[]) {
	sl a, b;
	a.n = 10;
	b.n = 20;

	a.p = &b;

	printf("%d %d\n", a.n, b.n);
	printf("%d ", (*a.p).n);
	printf("%d\n", a.p->n); // a.p->n == (*a.p).n
	return 0;
}
