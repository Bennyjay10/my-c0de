#include<stdio.h>
int main(){
   FILE *fptr = fopen("bennyjay.txt","w");
   if (fptr  == NULL)
   {
       printf("Unable to create file");
    }
    else {
        printf("File created successfully");
    }
   fclose(fptr);



    return 0;
}