# Libft Project README

## Introduction to Libft
Libft, short for "Library of Functions," is a project where you'll create your own library of functions. This documentation outlines the structure and components of the Libft project.

### File Structure

#### .c Files
All functions will be implemented in these files.

#### .h (Header) Files
Header files are crucial for two main reasons:
1. **Centralized Includes:** Instead of including system headers like `<unistd.h>` in every .c file, you include them once in your `libft.h` header. All .c files will then use this header to access the shared includes.
2. **Inter-file Function Usage:** If a function in one .c file uses another from a different .c file, simply include `libft.h` to access it, rather than declaring functions multiple times across files. Ensure you add `#include "libft.h"` in all your .c files for consistency.

### Makefile
The Makefile automates the compilation of your projects. Similar to scripts used during the piscine, the Makefile allows you to compile all your components simply by typing `make`, once your Makefile is properly set up.

### Helpful Resources for Libft
- [Project Libft Guide](https://www.asidesigned.com/project-libft.html)

## Libft Functions

### Functions from `<ctype.h>`
- `ft_isalpha` - Checks for an alphabetic character.
- `ft_isdigit` - Checks for a digit (0 through 9).
- `ft_isalnum` - Checks for an alphanumeric character.
- `ft_isascii` - Checks whether a character fits into the ASCII character set.
- `ft_isprint` - Checks for any printable character.
- `ft_toupper` - Converts a character to uppercase.
- `ft_tolower` - Converts a character to lowercase.

### Functions from `<string.h>`
- `ft_memset` - Fills memory with a constant byte.
- `ft_strlen` - Calculates the length of a string.
- `ft_bzero` - Zeroes a byte string.
- `ft_memcpy` - Copies memory area.
- `ft_memmove` - Copies memory area.
- `ft_strlcpy` - Copies a string to a specific size.
- `ft_strlcat` - Concatenates a string to a specific size.
- `ft_strchr` - Locates a character in a string.
- `ft_strrchr` - Locates a character in a string.
- `ft_strncmp` - Compares two strings.
- `ft_memchr` - Scans memory for a character.
- `ft_memcmp` - Compares memory areas.
- `ft_strnstr` - Locates a substring in a string.
- `ft_strdup` - Creates a duplicate of a string.

### Functions from `<stdlib.h>`
- `ft_atoi` - Converts a string to an integer.
- `ft_calloc` - Allocates memory and sets its byte values to 0.

### Non-standard Functions
- `ft_substr` - Returns a substring from a string.
- `ft_strjoin` - Concatenates two strings.
- `ft_strtrim` - Trims the beginning and end of a string with a specific set of characters.
- `ft_split` - Splits a string using a character as a delimiter.
- `ft_itoa` - Converts a number into a string.
- `ft_strmapi` - Applies a function to each character of a string.
- `ft_striteri` - Applies a function to each character of a string.
- `ft_putchar_fd` - Outputs a character to a file descriptor.
- `ft_putstr_fd` - Outputs a string to a file descriptor.
- `ft_putendl_fd` - Outputs a string to a file descriptor, followed by a new line.
- `ft_putnbr_fd` - Outputs a number to a file descriptor.

### Linked List Functions
- `ft_lstnew` - Creates a new list element.
- `ft_lstadd_front` - Adds an element at the beginning of a list.
- `ft_lstsize` - Counts the number of elements in a list.
- `ft_lstlast` - Returns the last element of the list.
- `ft_lstadd_back` - Adds an element at the end of a list.
- `ft_lstclear` - Deletes and frees a list.
- `ft_lstiter` - Applies a function to each element of a list.
- `ft_lstmap` - Applies a function to each element of a list.
