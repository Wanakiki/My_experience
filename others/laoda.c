#include<stdio.h>
#include<string.h>
struct Stu{
	int num;
	char name[20];
	float score[3];
};    //float少了一个分号
int main(){
	//struct Stu s[4]={{01,"Tom",88.00},{02,"Jerry",90.00}};
  //初始化：输出的时候再加零，“如果学号很长的话需要用字符串”
  struct Stu s[4]={{1,"Tom",{0,0,0}},{2,"Daming",{100,100,100}}};
	//s[2]={03,"Sam",80.00};
	s[2].num=03;
  strcpy(s[2].name,"Sam");
  //字符串不能直接等号赋值，我记得最好的办法是strcpy(复值函数)
  s[2].score[0]=80.00;
  s[2].score[1]=90;
  s[2].score[2]=100;


	scanf("%d%s%f%f%f",&s[3].num,s[3].name,&s[3].score[0],&s[3].score[1],&s[3].score[2]);

    //float sum=s[0].score[0]+s[1].score[1]+s[2].score[2]+s[3].score[3];

    float sum =0;
    for(int i=0;i<4;i++)
      for(int j=0;j<3;j++)
        sum+= s[i].score[j];
    //计算和 ↑👆


    int i;
    for(i=0;i<4;i++){
	     printf("%d %s ",s[i].num,s[i].name);
       for(int j=0;j<3;j++)
        printf("%.2f ",s[i].score[j]);
       printf("\n");
    }
    printf("%.2f",sum);
}
