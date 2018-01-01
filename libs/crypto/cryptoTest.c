#include "cryptoTest.h"

void encryptTest()
{
    assert(
        strcmp(encrypt("abc"), "bcd") == 0 && "Expected abc -> bcd"
    );
    assert(
        strcmp(encrypt("xyz"), "yza") == 0 && "Expected xyz -> yza"
    );

    printf("encryptTest - Passsed\n");  
}

void decryptTest()
{
    assert(
        strcmp(decrypt("bcd"), "abc") == 0 && "Expected bcd -> abc"
    );
    assert(
        strcmp(decrypt("yza"), "xyz") == 0 && "Expected yza -> xyz"
    );

    printf("decryptTest - Passsed\n");
}

void rotateLetterTest()
{
    assert(rotateLetter(1, 'a') == 'b' &&  "expected a -> b, TEST CASE 1"); 
    assert(rotateLetter(-1, 'a') == 'z' && "expected a -> z, TEST CASE 2 ");
    assert(rotateLetter(1, 'z') == 'a' &&  "expected z -> a, TEST CASE 3");
    assert(rotateLetter(-1, 'z') == 'y' && "expected z -> b, TEST CASE 4");
    assert(rotateLetter(25, 'a') == 'z' && "expected a -> z, TEST CASE 5");
    
    printf("rotateLetterTest - Passsed\n");
}
