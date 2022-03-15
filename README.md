<p align="center">
  <img src="https://cdn-website.partechpartners.com/media/images/Holberton_School_Logo.original.png">
</p>

#0x11. C - printf


## Project overview

### Compilation:

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

### Betty coding style:

All files are written in C and follows the Betty coding style.

## Function prototypes


## File description

* **_printf.c:** - contains the function _printf()
* **_putchar.c:** - contains the function _putchar()
* **man_3_printf:** - manual page for  _printf() function.

## Function description

**int _printf(const char \*format, ...)**

#### Implemented format specifiers

| Specifier type | Description |
| --- | --- |
| c | Single character |
| s | String of characters |
| d or i | Signed decimal integer |


## Examples
```c
 _printf("Negative:[%d]\n", -654321);
Output:   Negative:[-654321]
```
```c
_printf("Character:[%c]\n", 'H');
Output:   Character:[H]
```
```c
_printf("Actual     : %s\n", "holberton");
Output:    Actual     : holberton
```

## Author
##### Piero Ramirez
Holberton School, Cohort 17
##### Paolo Abarca
Holberton School, Cohort 17
