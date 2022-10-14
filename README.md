<h1 align="center">
	✏️ ft_printf
</h1>

<p align="center">
	<b><i>Because putnbr and putstr aren’t enough</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/surfi89/ft_printf?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/surfi89/ft_printf?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/surfi89/ft_printf?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/surfi89/ft_printf?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/surfi89/ft_printf?color=green" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About the project

> _This project is pretty straight forward. You will recode printf. You will mainly learn how to use variadic arguments._

	This project consists of coding a library that contains a simplified version (more
	information below) of the printf function. It includes the conversion specifiers :  c, s, %, d, x, X, u, o, rot13 and i.


For more detailed information, look at the [**subject of this project**](https://github.com/Surfi89/42cursus/tree/main/Subject%20PDFs).


## 🛠️ Usage

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile, go to the library path and run:

```shell
$ make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "ft_printf.h"
```
## Files and functions
* **_putchar.c**:
  * int _putchar(char c) - function to print char

* **_strlen.c**:
  * int _strlen(char *string) - gets string length

* **get_bin.c**:
  * int _bin(va_list bin) - function to print binary

* **get_char.c**:
  * int ch(va_list character) - function to return char

* **get_hex.c**:
  * int _hex_str(unsigned int n, unsigned int hex, char alpha) - converts the number from base 10 to hex

* **get_int.c**:
  * int _int(va_list integ) - function to print integers

* **get_oct.c**:
  * int _oct(va_list octo) - function to print octal

* **get_rot13.c**:
  * int _rot13(va_list rot) - prints rot13 version

* **get_str.c**:
  * int str(va_list *s) - prints string to stdout

* **get_unsigned.c**:
  * int _ui(va_list unsign) - unsigned int print to stdout

* **holberton.h**: header file

* **man_3_printf**: _printf man page

* **printf.c**: main custom _printf function
  * int print_op(const char *format, fmt_t *print_arr, va_list list) - function to check which specifier to print
  * int _printf(const char *format, ...) - prints output according to format


## 📋 Testing

## Examples to use it


    #include "holberton.h"
    /**
     * main - main function
     * Return: always 0
    **/
    int main()
    {
        _printf("Hello World!/n");
        return (0);
    }

    output: Hello World!
---

    #include "holberton.h"
    /**
     * main - main function
     * Return: always 0
    **/
    int main()
    {
            char string[7] = "World!"

        _printf("Hello %s/n", string);
        return (0);
    }

    output: Hello World!
---


    #include "holberton.h"
    /**
     * main - main function
     * Return: always 0
    **/
    int main()
    {
            int num = 1006

        _printf("This is a number: %d/n", num);
        return (0);
    }

    output: This is a number: 1006


## Environment
 This project has been tested on `Ubuntu 14.06.6 LTS`


