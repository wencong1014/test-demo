#include <stdio.h>
#include <stdlib.h>

struct student    
{
        char name[20];
        int id; 
        char sex;
        int age;
} stu[2];           

int main()
{
        for(int i = 0; i < 2; i++)
        {
                printf("input name of stu[%d]:", i); 
                scanf("%s", &stu[i].name);

                printf("input id of stu[%d]:", i); 
                scanf("%d", &stu[i].id);
    
                printf("input sex of stu[%d]:", i); 
                scanf("%*c%c", &stu[i].sex);

                printf("input age of stu[%d]:", i); 
                scanf("%d", &stu[i].age);
        }
        puts("");
    
        for(int i = 0; i < 2; i++)
        {
                printf("stu[i] = {%s, %d, %c, %d}\n", stu[i].name, stu[i].id, stu[i].sex, stu[i].age);
        }   

        return 0;
}
