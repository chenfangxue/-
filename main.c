#include <stdio.h>
char arr[1024];
int index = 0;
int ismingan(char x)
{
    int count = 0;
    for (int i = 0; i < index; i++)
    {
        if (x = arr[i])
        {
            count++;
        }
    }
    if (count = 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{

    printf("敏感词管理系统\n");
    while (1)
    {
        printf("1--添加敏感字符\n");
        printf("2--删除最后一个敏感字符\n");
        printf("3--显示所有敏感字符\n");
        printf("4--替换敏感字符\n");
        printf("5--退出\n");

        printf("请输入所需要的数字\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("请输入要添加的敏感字符\n");
            char m;
            scanf("%d", &m);
            scanf("%d", &m);
            arr[index] = m;
            index++;
            printf("\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            if (index > 1)
            {
                index--;
                printf("删除成功，点击回车继续\n");
            }
            else
            {
                printf("删除成功，点击回车继续\n");
            }
            char x;
            scanf("%d", &x);
            scanf("%d", &x);
        }
        if (code == 3)
        {
            printf("敏感词如下\n");
            for (int i = 0; index > 0; i++)
            {
                printf("第%n个敏感字符为%c\n");
            }
            printf("点击回车继续\n");
            char x;
            scanf("%d",&x);
            scanf("%d",&x);
        }
        if (code == 4)
        {
            printf("请输入一段英文\n");
        }
        if (code == 5)
        {
            printf("退出系统\n");
            break;
        }
    }

    return 0;
}