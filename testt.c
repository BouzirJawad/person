#include <stdio.h>
#include <string.h>

typedef struct  
{
    char street[20];
    char city[20];
    int code_postal;
}adr;

typedef struct
{
    char name[20];
    int age;
    adr Adress;
}person;

void createPerson(person *p1)
{
    printf("name :");
    scanf("%s", p1->name);
    printf("age :");
    scanf("%d", &p1->age);
    printf("adress :(street)");
    scanf("%s", p1->Adress.street);
    printf("adress :(city)");
    scanf("%s", p1->Adress.city);
    printf("adress :(code postal)");
    scanf("%d", &p1->Adress.code_postal);
    printf("-------------------------\n");
};

void display(person p){
        
        printf("name : %s\n", p.name);
        printf("age : %d\n", p.age);
        printf("adress(street) :%s\n", p.Adress.street);
        printf("adress(city) :%s\n", p.Adress.city);
        printf("adress(code postal) :%d\n", p.Adress.code_postal);
        printf("--------------------------\n");
    };

void displayfordelete(person p){
        printf("name : %s\n", p.name);
        printf("--------------------------\n");
    };

void deleteperson(person persons[], int *person_count, int index){
    if (index<0 || index> *person_count)
    {
        printf("invalid person number");
        return;
    }
     for (int i = index-1; i < *person_count-1; i++)
     {
        persons[i] = persons[i+1];
     }
    (*person_count)--;
    printf("person number %d deleted\n", index);
}

 int main(){
    
    person persons[100]; //array to store created persons
    int choice; //to take the choice of the user about what to do next
    int x; //numbers to control how many persons to add
    int person_count = 0;
    int index; // number to choose who to delete
do
{
    printf("what's next ?\n");
    printf("1. add a person\n");
    printf("2. delete a person\n");
    printf("3. modify a person\n");
    printf("4. display \n");
    printf("5. exit\n");
    scanf("%d", &choice);
    printf("-----------------------------\n");

    switch (choice)
    {
    case 1:
        
        printf("how many persons u wanna create ?");
        scanf("%d", &x);
        printf("add a person\n");
        for (int i = 0; i < x; i++)
            {
                printf("person %d\n", person_count+1);
                createPerson(&persons[person_count]);
                person_count++;
            }
        break;

        case 2:
            for (int i = 0; i < person_count; i++)
            {
                printf("person %d :\n", i+1);
                displayfordelete(persons[i]);
            }
            printf("enter a person number to delete ... (1 to %d)", person_count);
            scanf("%d", &index);
            deleteperson(persons, &person_count, index);
        break;

        case 3:
        
        break;

        case 4:
            for (int i = 0; i < person_count; i++)
            {
                printf("person %d :\n", i+1);
                display(persons[i]);
            }
        break;

        case 5:
            printf("exiting...\n");
        break;
    
    default:
        break;
    }
    } while (choice != 5);

 }







