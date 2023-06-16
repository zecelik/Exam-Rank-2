#include <stdlib.h>
#include <stdio.h>
int ft_atoi(char *str)
{
   int sign = 1;
   int res = 0;
   while(*str == ' ' || (*str >= 9 && *str <= 13))
   {
      str++;
   }
   if(*str == '-')
      sign = -1;
   if(*str == '+' || *str == '-')
      str++;
   while(*str >= '0' && *str <= '9')
   {
      res = res * 10 + *str - '0';
      str++;
   }
   return(res * sign);
}
int main(int argc, char **argv)
{
   if(argc == 4)
   {
      int num1 = ft_atoi(argv[1]);
      int num2 = ft_atoi(argv[3]);
      if(argv[2][0] == '+')
      {
         printf("%d", num1 + num2);
      }
        if(argv[2][0] == '-')
      {
         printf("%d", num1 - num2);
      }
        if(argv[2][0] == '*')
      {
         printf("%d", num1 * num2);
      }
        if(argv[2][0] == '/')
      {
         printf("%d", num1 / num2);
      }
        if(argv[2][0] == '%')
      {
         printf("%d", num1 % num2);
      }
   }
   printf("\n");
}