#include <cstdio>

int sum(int a, int b) {
	return a+b;
}
int dif(int a, int b) {
	return a-b;
}

int impartit(int a, int b) {
	return a/b;
}

int modulo(int n) {
	if(a < 0) {
		return a * (-1);
	}
	return a;
}

int sort_vect(int n, int *p) {
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(p[i] < p[j]) {
				int aux = p[i];
				p[i] = p[j];
				p[j] = aux;
			}
		}
	}
}

int main()
{
 int x;
 scanf("%d ",&x);
 x = x * 3;
 printf("%d\n", x);
 int a = sum (4,5);
 printf("%d\n", a);
 int b = dif(10, 3);
 printf("%d\n", b);
 int c = impartit(15, 3);
 printf("%d\n", c);
 return 0;
}
