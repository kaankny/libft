# Libft

## Project Overview

Libft is your first library, which is a C library that includes a range of essential functions that will serve as the foundation for your future C programming projects. This project aims to deepen your understanding of how these functions work, how to implement them, and how to use them effectively.

## Purpose

The purpose of this project is to create a C library called `libft` that replicates many functions found in the standard C library. By doing this, you will gain a deeper understanding of how these functions operate, and you will be better prepared for future C programming projects.

## What You Will Learn

- How to implement commonly used standard functions from scratch.
- How to manage memory allocation and deallocation.
- How to create and manipulate linked lists.
- How to write reusable and modular code.
- How to use Makefile for project compilation.

## Project Contents

### 1. Libc Functions

These functions replicate the behavior of their standard C library counterparts but are prefixed with `ft_`.

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_strnstr`
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

### 2. Additional Functions

These functions provide additional functionality not found in the standard C library.

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### 3. Bonus Part

The bonus part includes functions for manipulating linked lists. The following functions use the `t_list` structure, which represents a single element in a linked list.

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Compilation

Use the provided `Makefile` to compile the library. The Makefile includes the following targets:

- `all`: Compile the library.
- `clean`: Remove object files.
- `fclean`: Remove object files and the library file.
- `re`: Recompile the library.
- `bonus`: Compile the bonus part of the project.

## Usage
After compiling the library, include libft.h in your projects and link against libft.a to use the functions provided by your library.

## Conclusion
Libft is an essential project that lays the groundwork for more complex C programming projects. By completing this project, you will enhance your understanding of fundamental C programming concepts and improve your ability to write efficient and reusable code.
