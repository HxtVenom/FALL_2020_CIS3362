//  Shift Cipher Decrypter

#include <stdio.h>
#include <string.h>

int main(void){
    
    //  SCAN IN TEXT
    char cipher[1000];
    scanf("%s", cipher);
    
    //  GET SIZE
    int size = strlen(cipher);
    int code;
    
    //  GET DESIRED OPERATION
    printf("1: Encrypt\n2: Decrypt\n");
    scanf("%d", &code);
    
    //  ENCRYPTION
    if(code == 1){
        
        //  GET SHIFT
        printf("Enter desired shift: \n\n");
        int shift;
        scanf("%d", &shift);
        
        printf("Encrypted Text: ");
        //  ENCRYPT AND PRINT ECNRYPTED TEXT
        for(int i = 0; i < size; i++)
            printf("%c", (cipher[i] - 'a' + shift) % 26 + 'a');
        printf("\n\n");
    }
    //  DECRYPTION
    else if(code == 2){
        //  LOOP THROUGH ALL POSSIBLE SHIFTS 1-26
        for(int i = 1; i < 26; i++){
            
            //  Print Shift #
            printf("Shift %d:   ", i);
            
            //  Print decrypted text
            for(int j = 0; j < size; j++){
                printf("%c", (cipher[j] - 'a' - i + 26) % 26 + 'a');
            }
            printf("\n\n");
        }
    }
    
    printf("Exiting\n");
    return 0;
}
