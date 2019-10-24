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
