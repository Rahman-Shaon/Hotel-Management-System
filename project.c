#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>

struct employee
{
    char name[20];
    int id;
    char post[20];
    int salary;
    struct employee *next;
};

struct room
{
    char roomno[10];
    int price;
    char catagory[5];
    struct room *next1;
};

struct food
{
    char name[30];
    int price;
    struct food *next2;
};

void show_employee_details(struct employee *e)
{
    while (e != NULL)
    {
        printf("Name \t: %s\n", e->name);
        printf("ID \t: %d\n", e->id);
        printf("Post \t: %s\n", e->post);
        printf("Salary \t: %d\n", e->salary);
        printf("\n");
        e = e->next;
    }
    printf("\n\n");
}

void search(struct employee *e, int id)
{
    while (e->id != id)
    {
        e = e->next;
    }
    printf("Name \t: %s\n", e->name);
    printf("ID \t: %d\n", e->id);
    printf("Post \t: %s\n", e->post);
    printf("Salary \t: %d\n", e->salary);
}

void show_room_details(struct room *r)
{
    while (r != NULL)
    {
        printf("Room NO \t: %s\n", r->roomno);
        printf("Rental price \t: %d\n", r->price);
        printf("Room Catagory \t: %s\n", r->catagory);
        printf("\n");
        r = r->next1;
    }
    printf("\n\n");
}

int main()
{
    int a;
    char p[] = "Shaon241", pass[32];
    printf("Enter Your Password : ");
    scanf("%s", pass);
    if((strcmp(p, pass))==0){
        printf("Login Successully\n");
    }
    else
    printf("Invalid Password\n");
    struct employee *e1, *e2, *e3, *e4, *e5;

    e1 = (struct employee *)malloc(sizeof(struct employee));
    e2 = (struct employee *)malloc(sizeof(struct employee));
    e3 = (struct employee *)malloc(sizeof(struct employee));
    e4 = (struct employee *)malloc(sizeof(struct employee));
    e5 = (struct employee *)malloc(sizeof(struct employee));

    e1->next = e2;
    e2->next = e3;
    e3->next = e4;
    e4->next = e5;
    e5->next = NULL;

    strcpy(e1->name, "Md. Nasir");
    e1->id = 101;
    strcpy(e1->post, "Manager");
    e1->salary = 50000;

    strcpy(e2->name, "Ezaz Ahmed");
    e2->id = 102;
    strcpy(e2->post, "Employee");
    e2->salary = 14000;

    strcpy(e3->name, "Tonmoy Sarkar");
    e3->id = 103;
    strcpy(e3->post, "Empoyee");
    e3->salary = 13000;

    strcpy(e4->name, "Golam Nosrullah");
    e4->id = 104;
    strcpy(e4->post, "Empoyee");
    e4->salary = 17000;

    strcpy(e5->name, "Riyad Ahmed Mahin");
    e5->id = 105;
    strcpy(e5->post, "Empoyee");
    e5->salary = 12000;

    struct room *r1, *r2, *r3, *r4, *r5;

    r1 = (struct room *)malloc(sizeof(struct room));
    r2 = (struct room *)malloc(sizeof(struct room));
    r3 = (struct room *)malloc(sizeof(struct room));
    r4 = (struct room *)malloc(sizeof(struct room));
    r5 = (struct room *)malloc(sizeof(struct room));

    r1->next1 = r2;
    r2->next1 = r3;
    r3->next1 = r4;
    r4->next1 = r5;
    r5->next1 = NULL;

    strcpy(r1->roomno, "01-10");
    r1->price = 2000;
    strcpy(r1->catagory, "A");

    strcpy(r2->roomno, "11-20");
    r2->price = 1600;
    strcpy(r2->catagory, "B");

    strcpy(r3->roomno, "21-30");
    r3->price = 1200;
    strcpy(r3->catagory, "C");

    strcpy(r4->roomno, "31-40");
    r4->price = 1000;
    strcpy(r4->catagory, "D");

    strcpy(r5->roomno, "41-50");
    r5->price = 800;
    strcpy(r5->catagory, "E");

    struct food *f1, *f2, *f3, *f4, *f5;

    f1 = (struct food *)malloc(sizeof(struct food));
    f2 = (struct food *)malloc(sizeof(struct food));
    f3 = (struct food *)malloc(sizeof(struct food));
    f4 = (struct food *)malloc(sizeof(struct food));
    f5 = (struct food *)malloc(sizeof(struct food));

    f1->next2 = f2;
    f2->next2 = f3;
    f3->next2 = f4;
    f4->next2 = f5;
    f5->next2 = NULL;

    printf("\n\t\t\t\t---------Welcome to our Hotel Dalas---------\n");

    New :
    printf("1. Show employee details\n2. Search employee by id\n3. Room details\n");
    printf("Choose your option : ");
    scanf("%d", &a);

    // int t;
    // while((t = getchar()) !='\n' && t != EOF);

    if (a == 1)
        show_employee_details(e1);

    else if (a == 2)
    {
        int b;
        printf("Enter the id you want to search : ");
        scanf("%d", &b);
        search(e1, b);
    }

    else if (a == 3)
        show_room_details(r1);
    
    printf("press 5 to continue program and 6 to exit program : ");
    int c;
    scanf("%d", &c);
    if(c==5){
    goto New;
    }

    return 0;
}