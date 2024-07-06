# Library Management System in C++

This project is a simple library management system implemented in C++. It allows users to add, delete, display, and edit books in the library.

## Features

- **Add Book**: Add one or more books to the library.
- **Delete Book**: Delete a book from the library using its reference number.
- **Show All Books**: Display all books currently in the library.
- **Edit Book**: Edit the book name or author name of a specific book.

## Getting Started

### Prerequisites

- C++ compiler (e.g., GCC)

### Compilation

To compile the program, use the following command:

```sh
g++ -o library_management_system library_management_system.cpp
```

## Running the Program
To run the program, use the following command:
```sh
./library_management_system
```

## Usage
1. Enter the Password: 
- You will be prompted to enter a password to access the system. The default password is 123456789.

2. Choose an Option:

- Add Book: You will be prompted to enter the number of books you want to add, followed by the details of each book.
- Delete Book: You will be prompted to enter the reference number of the book you want to delete.
- Show All Books: The system will display all the books currently in the library.
- Edit Book: You will be prompted to enter the reference number of the book you want to edit, followed by the new details.


## Example
```
Library Management System Using C++

-----------------------------------------
This Project is Presented  by:          |
                                        |
    Abdul Malik    (BSCYS-019).         |
    Muhammad Panah (BSCYS-017).         |
    Manal Anwaar   (BSEE-010).          |
    Anum Abid      (BSEE-013).          |
                                        |
-----------------------------------------

Enter Your Password: 123456789

Choose one of the following Options:

    1. Add Book.
    2. Delete Book.
    3. Show All Books.
    4. Edit Book.
    5. Exit.

Your Choice => 1

How many books you want to add: 1

    Enter Book name: C++ Primer
    Enter Author's name: Stanley B. Lippman

    Reference no: 1
    Book Added.

Your Choice => 3

    Book Name:     C++ Primer
    Author's Name: Stanley B. Lippman
    Ref no:        1
```

## License
This project is licensed under the MIT License.

Feel free to customize it further if needed!
