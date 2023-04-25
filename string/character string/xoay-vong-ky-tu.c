#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>

#define max(i, j) ((i > j) ? i : j)
#define min(i, j) ((i < j) ? i : j)

char gen[200][200];
int mark[200] = { 0 };
int len = 0;

void generator(char s[]) {
	int i = 0;
	len = strlen(s);
	strcpy(gen[i++], s);
	while (i < len) {
		char c = s[0];
		for (int j = 0; j <= len - 2; j++) {
			s[j] = s[j + 1];
		}
		s[len - 1] = c;
		strcpy(gen[i++], s);
	}
}

bool isCheck(char s[]) {
	for (int i = 0; i < len; i++) {
		if (strcmp(s, gen[i]) == 0) {
			mark[i]++;
			return true;
		}
	}
	return false;
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	char s[200];
	gets(s);
	generator(s);
	t--;
	mark[0] = 1;
	int cnt = 0;
	while (t--) {
		gets(s);
		if (!isCheck(s)) cnt++;
	}

	if (cnt) printf("-1");	
	else {
		int result = INT_MAX;
		for (int i = 0; i < len; i++) {
			if (mark[i]) {
				int res = 0;
				for (int j = 0; j < i; j++) {
					res += mark[j] * (i - j);
				}
				for (int j = i + 1; j < len; j++) {
					res += mark[j] * (len - (j - i));
				}
				result = min(res, result);
			}
		}
		printf("%d", result);
		printf("\n");
	}
	return 0;
}