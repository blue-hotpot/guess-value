#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game()
{
    int ret=0;
    int value;
    ret=rand()%100+1;
    while(1)
    {
        printf("guess the value\n");
        scanf("%d",&value);
        if(value>ret)
        printf("the value that you guess is bigger than the number\n");
        if(value<ret)
        printf("the value that you guess is smaller than the number\n");
        if(value==ret)
        {
            printf("you are right\n");
            break;
        }
    }
    
}


int main(int argc, char const *argv[])
{
    int begian;
    srand((unsigned int)time(NULL));
    //时间戳
    //当前时间-计算机起始时间（1970年1月1日0时0分0秒）=xx秒
    //time_t time(time_t *timer)
    //srand只要调用一次就可以了
    do
    {
        printf("#####################\n");
        printf("#Do you want to play#\n");
        printf("#####################\n");
        printf("## 0-quit 1-begian ##\n");
        printf("#####################\n");
        scanf("%d",&begian);
        switch (begian)
        {
        case 0:
            printf("quit the game\n");
            break;
        case 1:
            game();
            break;
        default:
            printf("please resume the value\n");
            break;
        }
    }while(begian);
    return 0;
}
