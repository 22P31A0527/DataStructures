/*#include<stdio.h>
struct student{
	char roll[20];
	char name[20];
	int age;
	float cgpa;
};
int main()
{
	struct student s1;
	scanf("%s", s1.roll);
	scanf("%s", s1.name);
	scanf("%d", &s1.age);
	scanf("%f", &s1.cgpa);
	printf("%s %s %d %.2f",s1.roll,s1.name,s1.age,s1.cgpa);
}*/

/*#include<stdio.h>
struct student{
	char roll[20];
	char name[20];
	int age;
	float cgpa;
};
int main()
{
	//int a;
	//int *ptr;
	//ptr=&a;
	struct student s1;  //structure variables
	struct student *s1_ptr;  //structure pointers
	s1_ptr=&s1;
	scanf("%s", s1_ptr->roll);
	scanf("%s", s1_ptr->name);
	scanf("%d", &s1_ptr->age);
	scanf("%f", &s1_ptr->cgpa);
	printf("%s %s %d %.2f",s1_ptr->roll,s1_ptr->name,s1_ptr->age,s1_ptr->cgpa);
}*/

#include<stdio.h>
struct student{
	char roll[20];
	char name[20];
	int age;
	float cgpa;
};
void read_student(struct student *s){
	scanf("%s",s->roll);
	scanf("%s",s->name);
	scanf("%d",&s->age);
	scanf("%f",&s->cgpa);
}
void print_student(struct student *s){
	printf("%s %s %d %.2f\n",s->roll,s->name,s->age,s->cgpa);
}
int main()
{
	struct student s1,s2;  //structure variables
	struct student *s1_ptr,*s2_ptr;  //structure pointers
	s1_ptr=&s1;
	s2_ptr=&s2;
	read_student(s1_ptr);
	read_student(s2_ptr);
	print_student(s1_ptr);
	print_student(s2_ptr);
}

