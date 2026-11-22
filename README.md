*this project has been created as part of the 42 curriculum by aelattar.*

# Description

The `ft_printf` project is about recreating the behavior of the standard C `printf()` function.

The goal is to understand variadic functions and formatted output by implementing a custom version of `printf()`.

The program supports the following conversions:
- `%c` – Character
- `%s` – String
- `%p` – Pointer address
- `%d` and `%i` – Signed decimal integer
- `%u` – Unsigned decimal integer
- `%x` and `%X` – Hexadecimal integer
- `%%` – Percent sign

# Instructions

## Compilation

Run the following command to compile the library:

```bash
make
```

This generates the `libftprintf.a` static library.

## Usage

Include the header in your source file:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c libftprintf.a -L. 
```

Then execute:

```bash
./a.out
```

# Algorithm and Data Structures

## Algorithm

The implementation uses a format-string parser that reads the format string character by character.

1. If the current character is not `%`, it is printed directly.
2. If `%` is encountered, the next character is checked to identify the conversion.
3. The corresponding handler retrieves the correct argument using `va_arg()`.
4. The appropriate output function converts and prints the argument.
5. The number of successfully printed characters is counted and returned.

Number conversions use recursive division to extract digits. For example, decimal numbers are divided by 10, while hexadecimal numbers are divided by 16. The remainders determine which characters are printed.

## Data Structures

The project mainly uses:
- **Character arrays:** Store the format string and hexadecimal digit characters.
- **`va_list`:** Provides access to the variable number of arguments passed to `ft_printf()`.
- **Integer counters:** Track the number of characters printed.

No complex data structures are required because the format string can be processed sequentially.

# Resources

- [Linux manual – printf(3)](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Linux manual – stdarg(3)](https://man7.org/linux/man-pages/man3/stdarg.3.html)
- [Linux manual – write(2)](https://man7.org/linux/man-pages/man2/write.2.html)
- [C documentation – cppreference](https://en.cppreference.com/w/c/variadic.html)

## AI Usage

It helped explain variadic functions, format-string parsing. It was also used to discuss potential bugs, understand compiler errors, and review implementation logic.

The code was written and tested by the project author.