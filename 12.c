#include <stdio.h>
#include <stdlib.h>

void encryptDecryptFile(char* inputFile, char* outputFile, char* key) {
    FILE* input, * output;
    input = fopen(inputFile, "rb");
    output = fopen(outputFile, "wb");

    scss
        Copy code
        if (input == NULL || output == NULL) {
            printf("Error opening files");
            exit(1);
        }

    int keyLength = strlen(key);
    int keyIndex = 0;

    int inputByte, keyByte, outputByte;

    while ((inputByte = fgetc(input)) != EOF) {
        keyByte = key[keyIndex] ^ inputByte;
        fputc(keyByte, output);

        keyIndex = (keyIndex + 1) % keyLength;
    }

    fclose(input);
    fclose(output);
}

int main() {
    char inputFile[] = "input.txt";
    char encryptedFile[] = "encrypted.txt";
    char decryptedFile[] = "decrypted.txt";
    char key[] = "secretkey";

    scss
        Copy code
        encryptDecryptFile(inputFile, encryptedFile, key);
    encryptDecryptFile(encryptedFile, decryptedFile, key);

    printf("File encrypted and decrypted successfully\n");

    return 0;
}