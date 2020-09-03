//  Affine Cipher

#include <stdio.h>
#include <string.h>

//  VALID a FOR DECRYPTION
int valid[] = {1, 3, 5, 7, 9, 11, 15, 17, 19, 21, 23, 25};

int main(void){
    
    //  Get Code for Operation 1: Encryption 2: Decryption
    int code;
    scanf("%d", &code);

    //  Get Text
    char text[1000];
    scanf("%s", text);

    //  Get size of word
    int size = strlen(text);
    
    //ENCRYPTION
    if (code == 1){
        
        //  Get Desired Encryption Keys
        printf("Enter Key: (a b)");
        int a, b;
        scanf("%d %d", &a, &b);
        
        //  Print Cipher Text
        for (int i = 0; i < size; i++){
            printf("%c", ((a * (text[i] - 'a')) + b) % 26 + 'a');
        }
    }
    //  DECRYPTION
    else if (code == 2){
        
        //  Loop Through all possible a decryption keys
        for (int i = 0; i < 12; i++){
            
            //Loop through all b possibilities (0 - 26)
            for (int j = 0; j <= 26; j++){
                
                //  Print Current a and b for decryption
                printf("a: %d b: %d - ", valid[i], j);
                
                //  Loop through Cipher Text
                for (int k = 0; k < size; k++){
                    
                    //  Print Plain Text
                    printf("%c", ((valid[i] * (text[k] - 'a')) + j) % 26 + 'a');
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}
