#include<stdio.h>
struct student
{
    char name[40];
    int age;
    unsigned long mobile;

};
int main(){
    struct student std;
    printf("enter name:  ");
    fgets(std.name,40,stdin);
    printf("enter age: ");
    scanf("%d",&std.age);
    printf("enter mobile: ");
    scanf("%lu",&std.mobile);
    printf("name:  %s\n",std.name);
    printf("age: %d\n",std.age);
    printf("mobile:  %lu\n",std.mobile);
    return 0;
}