#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	if (n < 0) {
		n = -n;
		printf("-");
	}

	while (n > 0){
		printf("%d", n%10);
		n /= 10;
	}

	printf("\n");
	return 0;
}
