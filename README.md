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

###### Specifiers

Specifier                |Output                        |Examples |
|----------------|-------------------------------|-----------------------------|
| `c` | Character | y |
| `d` or `i` | Signed integer | 1024, -1024 |
| `s` | String of characters | Hello Holberton |
| `b` | Binary Representation of unsigned integer | 01010110 |
| `u` | Unsigned integer | 1024 |
| `o` | Unsigned octal | 432 |
| `x` | Unsigned hexadecimal integer | 3ca |
| `X` | Unsigned hexadecimal integer (uppercase) | 3CA |
| `S` | String with hex-ascii value replacing special chars | \x0A\x0A |
| `p` | Pointer address | 0x403212 |
| `r` | Reversed string of characters | dlroW olleH |
| `R` | ROT13 Translation of string | Uryyb |

###### Flags (In development...)

|Flag                |Description                        |
|----------------|-------------------------------|
| `-` |Left-justify the output within the field width that was given; Right justification is the default (see _width_ sub-specifier). |
| `+` |Preceeds the result with a plus or minus sign (`+` or `-`) even for positive numbers. By default, only negative numbers are preceded with a `-` sign. |
| `(space)` |If no sign is going to be written, a blank space is inserted before the value. |
| `#` |Used with `o`, `x` or `X` specifiers the value is preceeded with 0, 0x or 0X respectively for values different than zero. |
| `0` |Left-pads the number with zeroes (`0`) instead of spaces when padding is specified (see _width_ sub-specifier). |

###### Width (In development...)

|Width                |Description                        |
|----------------|-------------------------------|
| `(number)` |Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. The value is not truncated even if the result is larger.|
| `*` | The _width_ is not specified in the _format_ string, but as an additional integer value argument preceding the argument that has to be formatted.|

### Precision (In development...)

|.Precision               |Description                        |
|----------------|-------------------------------|
| `.(number)` |**For integer specifiers (`d`, `i`, `o`, `u`, `x`, `X`):** _precision_ specifies the minimum number of digits to be written. If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is longer. A _precision_ of 0 means that no character is written for the value 0. **For `s`**: this is the maximum number of characters to be printed. By default all characters are printed until the ending null character is encountered. If the period is specified without an explicit value for _precision_, 0 is assumed. |

### Lenght modifiers (In development...)

|Modifier/Specifier  |`d` & `i`  |`u`, `o`, `x`, `X` |`c` |`s` |`p` |
|----------------|---------|------------|-------------|-----|-------|
| `none` | int |unsigned int | int| char pointer| void pointer |
| `h` |short int|unsigned short int |     |     |              |
| `l` |long int |unsigned long int  |     |     |              |

------------

#### Files contained in this repository


------------

|Name                |Information                        |Relevant Files                         |
|----------------|-------------------------------|-----------------------------|
|`man_3_printf`|Man page of the _printf() function.| `None` |
|`holberton.h`	| Header file with the data type struct, standard libraries and custom prototypes.| `*.c compilation` |
|`_printf.c`|Main printf function file. Calls other functions.|`printf_(name of var).c file` |
|`printf_37.c`|Contains percentage print function.|`None` |
|`printf_int.c` | Contains decimal and integer functions. | `None` | 
`printf_char.c` | Custom function for char data type. | `None`
|`printf_sting.c` | Function that calls string type variable. | `None` |
|`printf_bin.c` | Function that gets the binary | `None` |
`printf_oct.c` | Functions that returns octal number. | `None` |
`printf_hex.c` | Calls hexadecimal numbers (lowercase). | `None` | 
`printf_HEX.c` | Calls hexadecimal numbers (Uppercase). | `None` |
`printf_unsigned.c` | Returns an unisgined data type. | `None` |
`printf_hex_aux.c` | Auxiliar function for hexadecimal specific functions (lowercase). | `printf_exclusive_string.c` | 
`printf_HEX_aux.c` | Auxiliar function hexadecimal specific functions (Uppercase). | `printf_p.c` |
`printf_exclusive_string.c` | Returns a string and non readable characters are printed in hexadecimal numbers (Lowercase). | `printf_hex_aux.c` |
`printf_srev.c` | Returns a string in reverse. | `None` |
`printf_rot13.c` | Returns a string in Rot13. | `None` |
`printf_str.c` | Auxiliar functions such as strlen and strcpy. | `None` |
`_putchar.c` | Custom putchar function. | `None` |


------------

#### Tasks required for this project


------------

0. ###### I am not going anywhere. You can print that wherever you want to. I'm here and I am a Spur for life1.  I am not going anywhere. You can print that wherever you want to. I'm here and I am a Spur for life. 
Write a function that produces output according to a format.
Handle the following conversion specifiers:
- c
- s
- %

1. ###### Education is when you read the fine print. Experience is what you get if you dont
Handle the following conversion specifiers:
- d
- i

2. ###### Just because its in print doesn't mean its the gospel
Create a man page for the function

3. ###### With a face like mine, I do better in print
Handle the following conversion specifiers:
- b

4. ###### What one has not experienced, one will never understand in print
Handle the following conversion specifiers:
- u
- x
- o
- x
- X

5. ###### Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call write as little as possible.

6. ###### Handle the following custom conversion specifier
- S : prints the string.
- Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).

7. ###### How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier: p

8. ###### The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:
- ´+´
- space
- ´#´ 

9. ###### Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:
- l
- h
Conversion specifiers to handle: d, i, u, o, x, X

10. ###### Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.

11. ###### The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.

12. ###### It's depressing when you're still around and your albums are out of print
Handle the 0 flag character for non-custom conversion specifiers.

13. ###### Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.

14. ###### Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:
 - r : prints the reversed string

15. ###### The flood of print has turned reading into a process of gulping rather than savoring 
Handle the following custom conversion specifier:
- R: prints the rot13'ed string

16. ###### *
All the above options work well together.

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


