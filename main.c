#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[10] = "Hello";
    char qoshimcha[10];
    //strcpy(nom,qoshimcha);
    strncpy(nom,qoshimcha,3);
    printf("%s",qoshimcha);
    //strcat
    char user[40] = "";
    char name[30] = "Ism: ";
    char job[30] = " Kasb: ";
    char nameKirit[30];
    char jobKirit[30];

    printf("Iltimos ism va kasbingizni kiriting: ");
    scanf("%s%s",nameKirit,jobKirit);
    strcat(name,nameKirit);
    strcat(job,jobKirit);
    strcat(user,name);
    strcat(user,job);
    printf("%s",user);

    char ism[20];
    char parol[20];
    char haqiqiyism[20] = "admin";
    char haqiqiyparol[20] = "password";
    printf("\nIltimos username va passwordni kiriting: \n");
    scanf("%s%s",ism,parol);
    if(strcmp(ism,haqiqiyism)==0 && strcmp(parol,haqiqiyparol)==0){
    printf("Xush kelibsiz!");
    }else{
    printf("Parol yoki username xato!");}
    return 0;
}
