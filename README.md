# ft_printf

A reimplementation of `printf` in C, built at École 42 (Brussels).

```c
int ft_printf(const char *format, ...);
```

Supported conversions: `%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`. Returns the number of characters printed, like the original.

## Build

```bash
make   # builds libftprintf.a
cc main.c libftprintf.a
```
