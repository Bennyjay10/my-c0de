#include<stdio.h>
int main(){
    //A PROGRAM IN C TO WRITE MULTIPLE LINES IN A TEXT FILE
    int num;
    printf("ENTER THE NUMBER OF LINES TO BE WRITTEN :\n");
    scanf("%d",&num);
    char str[30] = "Test Line";
    FILE *fptr = fopen("benny.txt","w");
        for(int i = 1;i<=num;i++){
            fprintf(fptr,"%s %d\n",str,i);
        }
        
    fclose(fptr);



    return 0;
}