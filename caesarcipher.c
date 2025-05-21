#include <stdio.h>
#include <ctype.h>

int main(){
    char sent[256];
    unsigned int key;

    printf("Sentence: ");
    scanf("%256[^\n]", sent);
    getchar();

    printf("Key: ");
    scanf("%u", &key);

    for(int i = 0; sent[i] != '\0'; i++){
        char ch = sent[i];
        if(isalpha(ch)){
            char base = isupper(ch) ? 'A' : 'a';
            sent[i] = base + (ch - base + key)%26;
        }
        printf("%c", sent[i]);
    }
    printf("\n");
    getchar();

    return 0;
}

//Cifra de Cesar