#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(void)
{
    FILE *fp;
    char s[INT_MAX];
    int sum_mod = 0; /* 真田さんのアイデアでunsigned long long型を使用せずにできそう */
    int sum_ideal_mod = ((0 + INT_MAX) * (INT_MAX + 1) / 2) % INTMAX;
    fp = fopen("q1.txt", "r");
    while (fgets(s, INT_MAX - 1, fp) != NULL) {
      s[strlen(s) - 1] = '\0';
      sum_mod += atoi( s );
      sum_mod = sum_mod % INT_MAX;
    }
    fclose(fp);
    ans = abs(sum_ideal_mod - sum_mod);
    if (ans == 0) { ans = INT_MAX; }
    printf("ans=%d\n", ans);
    return 0;
}
