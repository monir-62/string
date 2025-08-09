#include<stdio.h>
#include<string.h>
int main(){
    int i,j,temp;
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    ch[strcspn(ch,"\n")]='\0';
    int len=strlen(ch);
    for(int i=0,j=len-1;i<j;i++,j--){//two pointer technique
        temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
    }
    puts(ch);
    return 0;
}
/*int i = 0, j = len - 1;
while (i < j) {
    // work with str[i] and str[j]
    i++;
    j--;
}*/
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);//I put n here ,at the place of string size
    str[strcspn(str,"\n")]='\0';//I tried to find out string length not removing the newline with newline remover
    int n=strlen(str);//these are two mistakes that i do here
    for(int i=0;i<(n/2);i++){//I did differently this time
        char t=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=t;
    }
    puts(str);
    return 0;
}*/