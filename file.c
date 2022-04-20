#include<stdio.h>
int main(){
    char line[255];
     FILE *fpointer = fopen("employees.txt","r");
         fprintf(fpointer, "Ben - Manager\nYinka - Salesman\nSamson - Receptionist");
//reading the line
//fgets allows the user to read the lines 1 by 1 
//fpointer is pointing to where the file is in the memory
fgets(line,255,fpointer);
fgets(line,255,fpointer);

printf("%s",line);
         
         
         fclose(fpointer);




    return 0;
}