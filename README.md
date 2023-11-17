# Push Swap

## Overview

Push Swap is a sorting algorithm project that challenges you to sort a stack of integers using a limited set of operations. This project is part of the Common Core curriculum at 42 Porto.

## Table of Contents

- [Introduction](#introduction)
- [Algorithm](#algorithm)
- [Sources, inspirations & Tools](#sources,-inspirations--tools)
- [Installation](#installation)
- [Usage](#usage)
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

## Algorithm

I've used the "Turk Algorithm", baptized by [A.YOGUN](https://github.com/byaliego), as explained on the [Sources, inspirations & tools](#sources,-inspirations--tools) section below.

## Sources, inspirations & tools

- Turk Algorithm [Medium Article](https://medium.com/@ayogun/push-swap-c1f5d2d41e97) by [A.YOGUN](https://github.com/byaliego) 
- Push Swap explanation [Youtube Video](https://www.youtube.com/watch?v=wRvipSG4Mmk) by [Thuy Quematon (AKA Thuggonaut)](https://github.com/Thuggonaut)
- [Push Swap Tester](https://github.com/gemartin99/Push-Swap-Tester) by [Gemartin99](https://github.com/gemartin99)
- [Push Swap Visualizer](https://github.com/o-reo/push_swap_visualizer) by [O-Reo](https://github.com/o-reo)
- [Random Number Generator](https://www.calculatorsoup.com/calculators/statistics/random-number-generator.php)

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

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE.md](LICENSE.md) file for details.

---
