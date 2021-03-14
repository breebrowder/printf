# PrintFUN Group Project- Cohort 14

## Description

This is a recreation of a popular C language function that can do formatted printing to standard output. Tasked to us by Holberton School, this emulation of the already popular function will provide us with a better understanding of the inner workings of the printf function.

![image joke printf](https://user-images.githubusercontent.com/58611397/111072067-fc769700-84a6-11eb-93a2-42cb55eb731d.jpg)

### Compilation

* Our code will be compiled this way:
~~~~~~~~~~~~~~
$  gcc -Wall -Werror -Wextra -pedantic *.c
~~~~~~~~~~~~~~

### Authorized functions and macros

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

### Formatting

| Conversion    | Specifiers    |                            |
| ------------- |:-------------:| ---------------:           |
| %c | prints a charcter        |                            |
| %s | prints a string          |                            |
| %% | prints a percent         |                            |
| %d | prints a decimal integer | assumes base 10            |
| %i | prints a decimal integer | detects base automatically |

### Resources
[Secrets of Printf](https://www.cypress.com/file/54761/download)

### Contributors
1. Bree Browder - 2372@holbertonschool.com
3. Brian Kong - 2783@holbertonschool.com
4. Suzanne Allen - 2672@holbertonschool.com

```
Project Due Date: March 17, 2021
```
