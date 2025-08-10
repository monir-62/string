#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main() {
    char str[200];
    int i,vowel=0,cons=0;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowel++;
            else
                cons++;
        }
    }
    printf("Vowels = %d\nConsonants = %d\n", vowel, cons);
    return 0;
}
