#include<stdio.h>
#include<dirent.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
int main() {
 
   FILE *fp;
   char ch;
   long length;
 
   fp = fopen("test.txt", "r");
   if (fp == NULL) {
      puts("cannot open this file");
      exit(1);
   }
 
   fseek(fp, 0, SEEK_END);
   length = ftell(fp);
   fseek(fp, (length-5), SEEK_SET);
 
   do {
      ch = fgetc(fp);
      putchar(ch);
   } while (ch != EOF);
 
   fclose(fp);
   return(0);
}
