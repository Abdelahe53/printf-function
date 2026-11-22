# Description

The `ft_printf` project is about recreating the behavior of the standard C `printf()` function.

The program supports the following conversions:
- `%c` – Character
- `%s` – String
- `%p` – Pointer address
- `%d` and `%i` – Signed decimal integer
- `%u` – Unsigned decimal integer
- `%x` and `%X` – Hexadecimal integer
- `%%` – Percent sign

The prototypes are in the .h file
To run: `gcc yourCfile.c libftprintf.a -L.`
