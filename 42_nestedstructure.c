#include <stdio.h>

#define MAX_EMPLOYEES 100

struct Employee {
    char name[50];
    int age;
    float salary;
};

struct Record {
    struct Employee employee;
    int id;
};

int main() {
    struct Record records[MAX_EMPLOYEES];
    int n,i;

    scanf("%d", &n);

    for ( i = 0; i < n; i++) {
        scanf("%s %d %f", records[i].employee.name, &records[i].employee.age, &records[i].employee.salary);
        records[i].id = i + 1;
    }

    for ( i = 0; i < n; i++) {
        printf("Employee %d\n", records[i].id);
        printf("Name %s\n", records[i].employee.name);
        printf("Age %d\n", records[i].employee.age);
        printf("Salary %g\n", records[i].employee.salary);
    }

    return 0;
}