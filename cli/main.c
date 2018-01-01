#include <stdio.h>
#include "chap1/io.h"

int main() 
{
    char *str = "this is a test\n";
    char ch[] = {'t', 'h', 'i', 'e'};
    occurancesOf2(ch, str, 4);
	
    return 0;
}
