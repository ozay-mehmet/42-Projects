*This project has been created as part of the 42 curriculum by mozay.*

---

# 🖨️ ft_printf

A custom reimplementation of the standard C `printf` function.  
Built as part of the 42 curriculum to deepen understanding of:

- Variadic functions
- Recursive algorithms
- Base conversions
- Low-level I/O handling
- Clean modular C design

---

# 1️⃣ Description

`ft_printf` reproduces the core behavior of the original C `printf` function.

It parses a format string, detects conversion specifiers, extracts arguments
using `va_list`, prints them using `write`, and returns the total number
of printed characters.

### 🛠️ Function Details

The project is modular, with the following key functionalities:
#### Library Functions
- ft_putchar(char c) – Outputs a single character to the standard output.

- ft_putstr(char *str) – Prints a string; if the string is `NULL`, it prints `(null)`.

- ft_putnbr(int n) – Recursively prints a signed integer, correctly handling negative numbers and `INT_MIN`.

- ft_putnbr_u(unsigned int n) – Recursively prints an unsigned integer.

- ft_puthex(unsigned long long n, char c) – Recursively prints a number in hexadecimal; supports lowercase (`x`) and uppercase (`X`) formats.

- ft_putptr(void *ptr) – Prints the memory address of a pointer; prints `(nil)` if the pointer is `NULL`.
#### Static Functions
- ft_choose(char c, va_list list) – Determines which output function to call based on the format specifier.

- ft_decider(const char *str, va_list list) – Parses the format string, processes `%` sequences, and delegates printing to the appropriate function.
#### Main Function
- ft_printf(const char *str, …) – Main entry point; initializes the variadic argument list and calls the parser to produce formatted output.


### ✅ Supported Conversions

| Specifier | Description |
|-----------|------------|
| `%c` | Character |
| `%s` | String |
| `%p` | Pointer address |
| `%d` | Signed integer |
| `%i` | Signed integer |
| `%u` | Unsigned integer |
| `%x` | Hexadecimal (lowercase) |
| `%X` | Hexadecimal (uppercase) |
| `%%` | Percent sign |

---

# 2️⃣ Instructions

## 📥 Clone the Repository

```bash
git clone https://github.com/ozay-mehmet/ft_printf.git
cd ft_printf
make
```

# 3️⃣ Resources

This project was developed using the following references:

- [42 GitHub Repository](https://github.com/42school) – for previous project examples and coding standards.  
- [printf Manual Page](https://man7.org/linux/man-pages/man3/printf.3.html) – official documentation on `printf` behavior and format specifiers.  
- [Variadic Functions Reference](https://en.cppreference.com/w/c/variadic) – explanation of `va_list` and variadic argument handling in C.


# 4️⃣ AI Usage

AI tools were used only for:

- Assisting in the preparation of this README.md  
- Reviewing and clarifying code structure and logic