#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';//checking whether a letter is present in a string or not
    int n=strlen(str);
    char ch='z';
    int p=0;
    for(int i=0;i<n;i++){
        if(ch==str[i]){
            p=1;
            break;//break the loop once found the target letter
        }
    }
    if(p){
        printf("present\n");
    }
    else{
        printf("Not present\n");
    }
    return 0;
}