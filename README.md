# Libft

A personal C utility library built during the 42 curriculum. It recreates familiar standard-library functions and adds helpers for strings, file-descriptor output, and linked lists.

## Features

- Character classification and case conversion.
- Memory allocation, copying, moving, searching, and comparison.
- String operations, splitting, trimming, mapping, and integer conversion.
- Output helpers such as `ft_putstr_fd` and `ft_putnbr_fd`.
- Optional singly linked-list operations through the `bonus` target.
- Additional string helpers, including `ft_strtok`, `ft_strrev`, and `ft_strcpy`.

The public interface is declared in [libft.h](libft.h); the [Makefile](Makefile) lists the sources included in the archive.

## Build

Requires GCC, Make, and `ar` on a Unix-like system. Run from the repository root:

```sh
make          # libft.a
make bonus    # add the linked-list functions
```

`make clean` removes object files, `make fclean` also removes the archive, and `make re` rebuilds it.

## Usage

Create `example.c` in the repository root:

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello from Libft", 1);
    return (0);
}
```

```sh
cc -Wall -Wextra -Werror example.c -L. -lft -o example
./example
```

Link the archive after the source or object files that use it. Functions that allocate memory transfer ownership to the caller; free their results when finished.

## Concepts practiced

Pointers, manual memory management, string boundaries, linked lists, callbacks, header interfaces, and static-library builds.
