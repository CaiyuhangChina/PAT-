#include <cstdio>
#include <algorithm>
using namespace std;
struct money {
	int a;
	int b;
	int c;
};
bool bigger(money a, money b) {
	if (a.a != b.a) { return a.a>b.a; }
	else if (b.a != b.b) { return a.b>b.b; }
	else  return a.c>b.c;
}
int main() {
	money a, b, c;
	scanf("%d.%d.%d", &a.a, &a.b, &a.c);
	scanf("%d.%d.%d", &b.a, &b.b, &b.c);
	if (bigger(a, b)) {
		std::swap(a, b);
		printf("-");
	}
	if (b.c<a.c)
	{
		b.c += 29;
		b.b -= 1;
	}
	c.c = b.c - a.c;
	if (b.b<a.b) {
		b.b += 17;
		b.a -= 1;
	}
	c.b = b.b - a.b;
	c.a = b.a - a.a;
	printf("%d.%d.%d", c.a, c.b, c.c);
}