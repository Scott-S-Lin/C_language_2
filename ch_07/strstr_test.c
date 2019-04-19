#include <stdio.h>
#include <string.h>


int main()
{
   const char haystack[20] = "TutorialsYiibai23455";
   const char needle[10] = "Yiibai";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s", ret);
   
   return(0);
}
