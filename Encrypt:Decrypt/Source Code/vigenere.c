//  Vigenere Cipher

#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[10000];
    int code;

    printf("1. Encrypt\n2. Decrypt\n");
    scanf("%d", &code);

    printf("Enter Text:\n");
    scanf("%s", text);
    int textLen = strlen(text);

    if (code == 1)
    {
        char key[100];
        printf("Enter Key:\n");
        scanf("%s", key);
        int keyLen = strlen(key);

        for (int i = 0; i < textLen; i++)
        {
            printf("%c", ((text[i] - 'a') + (key[i % keyLen] - 'a')) % 26 + 'a');
        }
    }
    else if (code == 2)
    {
        int nKeys;
        printf("How many keys would you like to try?\n");
        scanf("%d", &nKeys);

        for (int i = 0; i < nKeys; i++)
        {
            char key[100];
            scanf("%s", key);
            int keyLen = strlen(key);

            printf("Key: %s - ", key);
            for (int j = 0; j < textLen; j++)
            {
                printf("%c", ((text[j] - 'a') - (key[j % keyLen] - 'a') + 26) % 26 + 'a');
            }
            printf("\n");
        }
    }
    return 1;
}