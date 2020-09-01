#include<stdio.h>
int main(){
    char chr = 'a';
    int a;
    printf("enter chr,a character: ");
    scanf("%c%d",&chr,&a);

    //printf("Enter a inter");
    //scanf("%d",&a);
    //when %c is used. a character is display
    printf(":you entered %c\n",chr);

    //when %d is used. ASCII valvue is display
    printf("ASCII value is %d\n",chr);
    printf("You entered %d",a);
    return 0;

}
