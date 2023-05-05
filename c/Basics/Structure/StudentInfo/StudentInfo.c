#include<stdio.h>
int main(){
    struct student_details{
        char name[30];
        int age;
        char rollno[30];
        char course[30];
    };
    struct student_details get_stu_details;
    // initialization + declaration of structure
    printf("Enter student Details:");
    get_stu_details.name[0] = "Avnish";    
    get_stu_details.age = 23;    
    get_stu_details.rollno[0] = "18mca";    
    get_stu_details.course[0] = "MCA";    
    printf("Name: %s\n",get_stu_details.name);    
    printf("age: %d\n",get_stu_details.age);    
    printf("rollno: %s\n",get_stu_details.rollno);    
    printf("course: %s\n",get_stu_details.course);
    return 0;
}