#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    
   // int len2;
    

    /*len = _printf("Let's try to printf a simple sentence.\n");*/
    
    //len2 = printf("Let's try to printf a simple sentence.\n");

    /*_printf("Length:[%i, %i]\n", -5000, 2000);
    printf("Length:[%i, %i]\n", -5000, 2000);*/

    int res1, res2, a, b;
res1 = _printf("%c\n", 's');
res2 = printf("%c\n", 's');
printf("r1: %d, r2: %d\n", res1, res2);
res1 = _printf("string %c string2\n", 'f');
res2 = printf("string %c string2\n", 'f');
printf("r1: %d, r2: %d\n", res1, res2);
res1 = _printf("string %c string2\n", 48);
res2 = printf("string %c string2\n", 48);
printf("r1: %d, r2: %d\n", res1, res2);
res1 = _printf("letras %s letras\n", "letras");
res2 = printf("letras %s letras\n", "letras");
printf("r1: %d, r2: %d\n", res1, res2);
res1 = _printf("letras %%\n");
res2 = printf("letras %%\n");
printf("r1: %d, r2: %d\n", res1, res2);
res1 = _printf("cs%ccs%scscscsc\n", 't', "test");
res2 = printf("cs%ccs%scscscsc\n", 't', "test");
printf("r1: %d, r2: %d\n", res1, res2);
res1 = _printf("%c\n", '\0');
res2 = printf("%c\n", '\0');
printf("r1: %d, r2: %d\n", res1, res2);
res1 = _printf("%!\n");
res2 = printf("%%!\n");
printf("r1: %d, r2: %d\n", res1, res2);
res2 = printf("letras %s letras\n", (char *) 0);
res1 = _printf("letras %s letras\n", (char *) 0);
printf("r1: %d, r2: %d\n", res1, res2);
a = _printf("%K\n");
b = printf("%%K\n");
printf("r1: %d, r2: %i \n", a,b);

a = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
b = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
printf("r1: %d, r2: %i \n", a,b);

    return (0);
}
