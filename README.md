*This project has been created as part of the 42 curriculum by wibouamo.*

# Libft

## Description

Libft is the first project of the 42 curriculum. The goal is to create a personal C library by reimplementing standard C library functions and developing additional utility functions.

It covers memory management, string manipulation, type conversion, and linked lists. The resulting `libft.a` library will be reused in future 42 projects.

## Instructions

Compile the library:

```bash
make
```

Available commands:

- `make`: Compile the library.
- `make clean`: Remove object files.
- `make fclean`: Remove object files and library.
- `make re`: Recompile the library.

To use the library:

```c
#include "libft.h"
```

Compile your program:

```bash
cc main.c -L. -lft -o program
```

## Library Content

**Part 1 – Libc Functions**

Reimplementation of standard functions for character checking, string handling, memory manipulation, and conversion.

**Part 2 – Additional Functions**

Additional utilities for substring extraction, string joining, trimming, splitting, integer conversion, string iteration, and file descriptor output.

**Part 3 – Linked Lists**

Implementation of a linked-list structure (`t_list`) and functions to create, add, count, delete, clear, iterate, and map nodes.

## Resources

- 42 Libft subject (Version 19.3).
- [C Reference](https://en.cppreference.com/w/c)
- Manual pages 
- peer-to-peer understanding

## Author

**Login:** wibouamo;

**School:** 1337 / 42 Network