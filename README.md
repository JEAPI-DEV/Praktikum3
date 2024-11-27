# Root Calculator

A C program that calculates various roots of numbers using Newton's method. This implementation provides both single (float) and double precision calculations.

## Features

- Square root calculation in single and double precision
- N-th root calculation for any positive real number
- Iterative calculation display option
- Error comparison between float and double precision results
- Support for roots from 2nd to 8th order

## Building the Project

To compile the program, use a C compiler like gcc:

```bash
gcc -o root_calculator main.c root.c math_float.c -lm
```

## Usage

Run the program with:

```bash
./root_calculator
```

To show iteration steps, use the `-s` flag:

```bash
./root_calculator -s
```

## Output

The program provides two main outputs:

1. A comparison table of square roots calculated using float and double precision:
```
 x    | rootf      | rootd      | err
------+------------+------------+-----------
 0.00 | 0.00000000 | 0.00000000 | 0.00e+00
 0.25 | 0.50000000 | 0.50000000 | ...
```

2. N-th root calculations for large numbers (100000 and 1000000):
```
2-th root of 100000.00 is approximately 316.227766016838
3-th root of 100000.00 is approximately 46.415888336128
...
```

## Precision

- Float precision: 1.E-4F
- Double precision: 1.E-8

## Implementation Details

- Uses Newton's method for root calculation
- Implements error checking and comparison
- Separate implementations for float and double precision
- Custom math functions for power and absolute value calculations

## Files

- `main.c`: Program entry point and output formatting
- `root.c`: Core implementation of root calculations
- `root.h`: Function declarations and constants
- `math_float.c`: Float-specific math operations
- `math_float.h`: Float math function declarations
