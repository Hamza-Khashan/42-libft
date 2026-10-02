*This project has been created as part of the 42 curriculum by hkhashan.*

# Libft

## Description

Libft is the first project of the 42 C curriculum. The goal of this project is to create a personal C library containing reimplementations of functions from the standard C library, together with additional utility functions.

The project is designed to strengthen the understanding and practical use of fundamental C programming concepts, including:

- Pointers and pointer arithmetic
- Strings and character manipulation
- Memory allocation and deallocation
- Arrays and memory blocks
- File descriptors
- Linked lists
- Static libraries
- Header files and function prototypes
- Compilation and Makefiles

The final result is a static library named `libft.a`, which can be linked to other C programs and reused in future projects.

## Instructions

### Compilation

The project includes a `Makefile` with the required rules for building and managing the library.

To compile the library:

```bash
make

This compiles the source files into object files and creates the static library:    libft.a

To remove the generated object files:
```bash
make clean

To remove the object files and the static library:
```bash
make fclean

To rebuild the library from scratch:
```bash
make re

### Using the library

Include the project header in your C source file:

```c
#include "libft.h"

Then compile your program together with the library. For example:
```bash
cc main.c libft.a -o program

## Library Contents

### Character Functions

The library contains functions for checking and converting characters:

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### String Functions

The library contains functions for measuring, copying, searching, and manipulating strings:

- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

### Memory Functions

The library contains functions for manipulating and allocating memory:

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### Conversion Functions

The library provides functions for converting between strings and integers:

- `ft_atoi`
- `ft_itoa`

### File Descriptor Functions

The library contains functions for writing characters, strings, and numbers to a file descriptor:

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Linked List Functions

The linked-list part of Libft provides functions for creating, adding, removing, and manipulating singly linked lists using the `t_list` structure:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Detailed Library Description

`libft.a` is a static library containing custom implementations of commonly used C library functions and additional utility functions.

The functions are organized around several main purposes:

1. **Character handling**  
   Functions such as `ft_isalpha`, `ft_isdigit`, and `ft_toupper` allow characters to be tested or converted.

2. **Memory manipulation**  
   Functions such as `ft_memset`, `ft_memcpy`, and `ft_memmove` operate directly on memory blocks.

3. **String manipulation**  
   Functions such as `ft_strlen`, `ft_strlcpy`, `ft_strjoin`, and `ft_split` provide common operations for working with C strings.

4. **Dynamic memory allocation**  
   Functions such as `ft_calloc`, `ft_strdup`, `ft_substr`, and `ft_itoa` allocate memory dynamically and return newly created data.

5. **File descriptor output**
   The `ft_*_fd` functions allow data to be written to a specified file descriptor.

6. **Linked lists**  
   The linked-list functions provide a small reusable singly linked lists.

The library is built as a static archive, allowing its functions to be reused by linking `libft.a` with other C programs.

## Resources

The following resources were used as references while working on the project:

- 42 Libft project subject and official project requirements.
- C standard library documentation and manual pages (`man` pages).
- `man 3` documentation for functions such as `memcpy`, `memmove`, `strlen`, `strncmp`, `calloc`, and related functions.
- C programming references for pointers, memory management, strings, and linked lists.

### AI Usage

AI tools were used as a supplementary learning and development aid during the project.

They were used for:

- Understanding Makefile rules and static library compilation.
- Helping troubleshoot compilation and linking issues.
- Clarifying how to test functions and link `libft.a` with a test program.
- Assisting with the structure and wording of this README file.

The implementation of the library was written and tested as part of the project work. AI was used as a learning and debugging aid rather than as a replacement for understanding the code.

## Author

**hkhashan**