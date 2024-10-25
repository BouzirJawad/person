#include <stdio.h>
#include <string.h>

typedef struct 
{
    char street[20];
    char city[20];
    int code_postal;
}adress;

typedef struct
{
    char name[20];
    int age;
    adress Adress;
}person;

void createPerson(person *p1)
{
    printf("name :");
    scanf("%s", &p1->name);
    printf("age :");
    scanf("%d", &p1->age);
    printf("adress :(street)");
    scanf("%s", &p1->Adress.street);
    printf("adress :(city)");
    scanf("%s", &p1->Adress.city);
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
        printf("--------------------------");
    };

 int main(){
    int x;
    printf("how many persons u wanna create ?");
    scanf("%d", &x);

    person persons[x];
    
    for (int i = 0; i < x; i++)
    {
        printf("person %d\n", i+1);
    createPerson(&persons[i]);
    }

    int check;
do
{
    printf("what's next ?\n");
    printf("1. add a person\n");
    printf("2. delete a person\n");
    printf("3. modify a person\n");
    printf("4. display \n");
    scanf("%d", &check);
    printf("-----------------------------\n");

    switch (check)
    {
    case 1:
        printf("add a person\n");
        x++;
        createPerson(&persons[x]); 
        break;

        case 2:
        
        break;

        case 3:
        
        break;

        case 4:
            for (int i = 0; i < x; i++)
            {
                printf("person %d :\n", i+1);
                display(persons[i]);
            }
            
        
        break;
    
    default:
        break;
    }
    } while (check != 4);

 }







