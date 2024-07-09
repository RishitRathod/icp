#include<stdio.h>
struct employee
{
	float salary;
	int ssalary;
};
void main()
{
	struct employee s;
	printf("enter float salary ");
	scanf("%f",&s.ssalary);
	printf("enter salary ");
	scanf("%d",&s.salary);
	printf("float salary =%f ",s.salary);
		printf("salary =%d ",s.ssalary);
}
