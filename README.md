<p align="center">
   <img width="100" src="https://github.com/user-attachments/assets/f4712f77-b4c7-4f8d-a0e5-d22bdfc9455f">
</p>

# 42-ft_printf
Because `ft_putnbr()` and `ft_putstr()` aren’t enough.


## 📝 Summary

The `ft_printf` project involves recoding the versatile and widely-used C function `printf`. This exercise is a deep dive into variadic functions, 
offering an opportunity to improve programming skills, write modular and extensible code, and meet strict requirements for memory management and output correctness.


## 📚 Learning Objectives

+ Understand and implement variadic functions in C.
+ Mimic the behavior of printf for specific conversions.
+ Manage dynamic memory and ensure no memory leaks.
+ Create a library (libftprintf.a) for future reuse in other C projects.


## 🚀 Features

The `ft_printf` function supports the following conversions:

+ `%c` - Print a single character.
+ `%s` - Print a string.
+ `%p` - Print a pointer in hexadecimal format.
+ `%d` - Print a decimal number.
+ `%i` - Print an integer.
+ `%u` - Print an unsigned decimal number.
+ `%x` - Print a number in hexadecimal (lowercase).
+ `%X` - Print a number in hexadecimal (uppercase).
+ `%%` - Print a percent sign.


## 🛠 Mandatory Requirements

+ Create a `libftprintf.a` library containing the `ft_printf` function.
+ Prototype: `int ft_printf(const char *, ...);`
+ Use these external functions: `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`.
+ Follow the C Norm standard (coding style).
+ Avoid buffer management from the original `printf`.


## 🧩 Project Structure

```bash
├── ft_printf.c       # Core implementation
├── ft_printf_utils.c # Helper functions
├── ft_printf.h       # Header file
├── Makefile          # Compilation rules
└── README.md         # Project documentation
```

## 🛠 Compilation

1. Clone this repository.
   ```bash
   git clone https://github.com/alianad/42-ft_printf.git
   cd 42-ft_printf

2. Compile the library.
   ```bash
   make

3. To clean the object files, run `make clean`.
   ```bash
   make clean

4. To clean both object files and library, run `make fclean`.
   ```bash
   make fclean

## ⚙️ Testing

  + https://github.com/wangxuerui2003/42_ft_printf_tester.git
  +  https://github.com/Tripouille/printfTester.git
  + https://github.com/paulo-santana/ft_printf_tester.git

