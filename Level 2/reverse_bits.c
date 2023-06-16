unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res = 0; 
    while(i > 0)
    {
        res = res * 2 + (octet % 2);
        octet = octet / 2;
     i--;
    }
    return(res);
}
/*
#include <stdio.h>
int main(void)
{
    unsigned char x = 0b10101010;
    unsigned char y = reverse_bits(x);
    
    printf("x in binary: %d\n", (x >> 7) & 1);
    
    printf("y in binary: %d\n", (y >> 7) & 1);
         
    return 0;
}
*/