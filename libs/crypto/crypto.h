#ifndef CRYPTO_H_
#define CRYPTO_H_

#define RUN_UNIT_TESTS 1

char * encrypt(char * text);
char * decrypt(char * text);
char rotateLetter(int offset, char letter);

#endif