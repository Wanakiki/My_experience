#include <stdio.h>
void f(char a[],int m);
void main(){
	char a[]="abcdefghijklmn";
  puts(a);
  int m=7;//你看见了要给我说这个m是干啥的
  printf("ee\n");
  f(a,7);
  puts(a);
}
void f(char a[],int m){
    /*char a[20],b[10];
    gets(a);*/
    //这里还是犯了原来的小毛病，函数里面是不用输入的
    char b[20];
    char *p=a;char *q=b;
    for(p=a+m-1,q=b;p!='\0';p++,q++)
      *q=*p;
    *q='\0';
    puts(b);
  }

  char * f(char a[],int m){
    if(m> strlen(a))
      return "";
    return a+m-1;
  }
