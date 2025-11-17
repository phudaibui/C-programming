#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int i = 0;

void display_menu();
void process_choice(int choice);

typedef struct library
{
    char name[50];
    char author[50];
    int pages;
    float price;

}library;

void display_menu(){
    printf("1. Add book information.\n");
    printf("2. Display book information.\n");
    printf("3. List all book of the given author.\n");
    printf("4. List the count of book in the library.\n");
    printf("5. Exit.\n");
}

void add_book(library new_book[]){
    printf("Enter book name: ");
    fgets(new_book[i].name, 50, stdin); 
    new_book[i].name[strcspn(new_book[i].name, "\n")] = 0;  // remove newline

    printf("Enter author: ");
    fgets(new_book[i].author, 50, stdin);
    // new_book[i].author[strlen(new_book[i].author) - 1] = '\0'; // remove newline
    new_book[i].author[strcspn(new_book[i].author, "\n")] = 0;

    printf("Enter pages: ");
    scanf("%d", &new_book[i].pages);
    printf("Enter price: ");
    scanf("%f", &new_book[i].price);
    i++;
}


void display_book(library new_book[], char author[]){

    for (int j = 0; j < i; j++){
        if (strcmp(new_book[j].author, author) == 0){
            printf("Books of author %s\n", author);
            printf("Book Name: %s\n", new_book[j].name);
            printf("Pages: %d\n", new_book[j].pages);
            printf("Price: %.2f\n", new_book[j].price);
        }
    }
}

int main(){
    library new_book[100];
    bool is_running = true;
    int choice;  // Why I cannot print book name when type of choice is char
    char author[15]; 
    while (is_running)
    {
        display_menu();
        printf("Enter your choice: ");
        scanf(" %d", &choice);
        switch (choice)
            {
            case 1:
                getchar();
                printf("----------Add a New Book----------\n");
                add_book(new_book);
                break;
            case 3:
                getchar();
                printf("----------Find Book by Author Name----------\n");
                printf("Enter author name: ");
                fgets(author, sizeof(author), stdin);
                author[strcspn(author, "\n")] = 0;
                display_book(new_book, author);
                break;
            case 2: 
                getchar();
                printf("---------Print All Books---------\n");
                for (int j = 0; j < i; j++){
                    printf("Book %d:\n", j + 1);
                    printf("Author: %s\n", new_book[j].author);
                    printf("Book name: %s\n", new_book[j].name);
                    printf("Pages: %d\n", new_book[j].pages);
                    printf("Price: %.2f\n", new_book[j].price);
                }
                break;
            case 4: 
                getchar();
                printf("There are %d book(s) in the library\n", i);
                break;
            default:
                break;
            }        
            if (choice == 5){
                is_running = false;
            }

    }
    return 0;
}


