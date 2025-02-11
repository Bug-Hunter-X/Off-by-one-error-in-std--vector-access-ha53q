# Off-by-one error in std::vector access
This repository demonstrates a common off-by-one error in C++ when accessing elements in a `std::vector`.  The code attempts to access an element beyond the valid range of indices, leading to undefined behavior (often a segmentation fault).

The `bug.cpp` file contains the erroneous code, while `bugSolution.cpp` provides the corrected version.

This example highlights the importance of carefully considering loop conditions and array/vector bounds when working with C++.