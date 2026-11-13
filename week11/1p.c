#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int count = 0;

    printf("영문 문장을 입력하시오 : ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }
    str[strcspn(str, "\n")] = '\0';

    for (char* p = str; *p != '\0'; p++) {
        if (*p >= 'a' && *p <= 'z') {
            *p = *p - 'a' + 'A';
        }
        if (*p != ' ') {
            count++;
        }
    }

    printf("대문자 : %s\n", str);
    printf("글자 수 (공백 제외) : %d\n", count);

    return 0;
}
