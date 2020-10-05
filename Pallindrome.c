#include <stdio.h>
int main()
{
   int num, reverse_num=0, remainder, temp, l, h;
   char str;

    //pallindroem Number
   printf("Enter an integer: ");
   scanf("%d", &num);

   temp=num;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
   } 
 
   if(reverse_num==num) 
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);
   return 0;

    //Pallindrome String
    printf("Enter any String: ");
    scanf("%s", &str);

    l=0;
    h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--]) 
        { 
            printf("%s is Not Palindrome", str); 
            return; 
        } 
        printf("%s is Palindrome", str);
    }

}