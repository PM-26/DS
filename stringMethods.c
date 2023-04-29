//strcat,strcmp,strlen,strcpy
#include<stdio.h>
int main(){
    int ch;
    printf("Press 1 to find length of string.\n");
    printf("Press 2 for strcmp.\n");
    printf("Press 3 strcat.\n");
    printf("Press 4 for strcpy.\n");
    scanf("%d",&ch);

    if (ch==1){
        int count = 0;
        char str[20];
        printf("Enter a string.\n");
        scanf("%s",str);

        for (int i=0;str[i]!='\0';i++){
            count++;
        }

        printf("Length of string = %d .\n",count);
    }
    else if (ch==2){
        int flag=1;
        char a[20];
        char b[20];
        printf("Enter a string.\n");
        scanf("%s",a);
        printf("Enter another string.\n");
        scanf("%s",b);

        for (int i=0;a[i]!='\0' || b[i]!='\0';i++){
            if (a[i]!=b[i]){
                flag=0;
            }
        }
        if (flag==1){
            printf("Yes, both string are same.\n");
        }
        else{
            printf("No, both string are not same.\n");
        }
    }
    else if (ch==3){
        int i,j;
        char a[20];
        printf("Enter String\n");
        scanf("%s",a);
        char b[20];
        printf("Enter String\n");
        scanf("%s",b);
        char c[40];

        for (i=0;a[i]!='\0';i++){
            c[i]=a[i];
        }
        for (j=0;b[j]!='\0';j++){
            c[i+j]=b[j];
        }
        
        c[i+j]='\0';
        printf("The concatenated string is %s",c);
    }
    else{
        int i;
        char str1[20];
        printf("Enter a string.\n");
        scanf("%s",str1);
        char str2[20];
        for (i=0;str1[i]!='\0';i++){
            str2[i]=str1[i];
        }
        str2[i]='\0';
        printf("String after copying is %s .\n",str2);
    }
}