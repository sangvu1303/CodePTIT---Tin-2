// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[53];
//     int lines[26][2], count = 0;
//     scanf("%s", str);

//     // create lines
//     for (int i = 0; i < 26; i++) {
//         lines[i][0] = -1;
//         lines[i][1] = -1;
//     }
//     for (int i = 0; i < 52; i += 2) {
//         int j = str[i] - 'A';
//         if (lines[j][0] == -1) {
//             lines[j][0] = i / 2;
//         } else {
//             lines[j][1] = i / 2;
//         }
//     }

//     // count intersections
//     for (int i = 0; i < 26; i++) {
//         if (lines[i][0] != -1 && lines[i][1] != -1) {
//             int n = lines[i][1] - lines[i][0];
//             if (n > 1) {
//                 count += n * (n - 1) / 2;
//             }
//         }
//     }

//     printf("%d", count);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define max(i, j) ((i > j) ? i : j)

int main() {
	char s[200];
	gets(s);

	int res = 0;

	for (int i = 0; i < strlen(s) - 1; i++) {
		int p = 0;
		for (int j = i + 1; j < strlen(s); j++) {
			if (s[i] == s[j]) {
				p = j;
			}
		}

		if (p == 0 || p == i + 1) continue;

		int cnt[200] = { 0 };

		for (int j = i + 1; j < p; j++) {
			cnt[s[j]]++;
		}

		for (int j = 'A'; j <= 'Z'; j++) {
			if (cnt[j] == 1) res++;
		}
	}

	printf("%d", res / 2);

	printf("\n");

	return 0;
}