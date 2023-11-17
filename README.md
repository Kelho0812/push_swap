# Push Swap

## Overview

Push Swap is a sorting algorithm project that challenges you to sort a stack of integers using a limited set of operations. This project is part of the Common Core curriculum at 42 Porto.

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)
- [Algorithm](#algorithm)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Push Swap is a sorting program that operates on two stacks, named A and B. The goal is to sort the stack A in ascending order. The allowed operations are:
- `sa`: swap the first two elements at the top of stack A.
- `sb`: swap the first two elements at the top of stack B.
- `ss`: do `sa` and `sb` simultaneously.
- `pa`: move the first element from stack B to the top of stack A.
- `pb`: move the first element from stack A to the top of stack B.
- `ra`: rotate stack A (shift all elements up by one).
- `rb`: rotate stack B (shift all elements up by one).
- `rr`: do `ra` and `rb` simultaneously.
- `rra`: reverse rotate stack A (shift all elements down by one).
- `rrb`: reverse rotate stack B (shift all elements down by one).
- `rrr`: do `rra` and `rrb` simultaneously.

## Installation

1. Clone the repository:

```bash
git clone https://github.com/Kelho0812/push_swap.git
cd push_swap
```

2. Build the project:

```bash
make
```

## Usage

To use Push Swap, run the following command:

```bash
./push_swap [list of integers]
```

Example:

```bash
./push_swap 4 2 7 1 3
```

This will output a list of operations to sort the stack.

## Algorithm

[INSERT DETAILS ABOUT THE SORTING ALGORITHM USED IN THE PROJECT]

## Sources, inspirations & guides

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE.md](LICENSE.md) file for details.

---
