#include <stdio.h>
#include <string.h>

// Base class: Book
struct Book {
    char title[50];
    char author[50];
    float price;
    void (*display)(struct Book *); // Function pointer for polymorphism
};

// Derived class: EBook
struct EBook {
    struct Book base;
    float fileSize; // in MB
};

// Function to display normal book details
void displayBook(struct Book *b) {
    printf("\n--- Book Details ---\n");
    printf("Title  : %s\n", b->title);
    printf("Author : %s\n", b->author);
    printf("Price  : $%.2f\n", b->price);
}

// Function to display eBook details
void displayEBook(struct Book *b) {
    struct EBook *eb = (struct EBook *)b;
    printf("\n--- E-Book Details ---\n");
    printf("Title     : %s\n", eb->base.title);
    printf("Author    : %s\n", eb->base.author);
    printf("Price     : $%.2f\n", eb->base.price);
    printf("File Size : %.1f MB\n", eb->fileSize);
}

int main() {
    // Create a normal book
    struct Book book1;
    strcpy(book1.title, "The C Programming Language");
    strcpy(book1.author, "Kernighan and Ritchie");
    book1.price = 45.50;
    book1.display = displayBook;

    // Create an eBook
    struct EBook ebook1;
    strcpy(ebook1.base.title, "Clean Code");
    strcpy(ebook1.base.author, "Robert C. Martin");
    ebook1.base.price = 30.00;
    ebook1.fileSize = 5.6;
    ebook1.base.display = displayEBook;

    // Array of base pointers (for polymorphism)
    struct Book *library[2];
    library[0] = &book1;
    library[1] = (struct Book *)&ebook1;

    // Display details of all books
    printf("===== Library Management System =====\n");
    for (int i = 0; i < 2; i++) {
        library[i]->display(library[i]);
    }

    return 0;
}