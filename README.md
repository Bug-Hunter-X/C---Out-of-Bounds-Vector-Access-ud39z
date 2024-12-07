# C++ Out-of-Bounds Vector Access Bug

This repository demonstrates a common C++ error: accessing an element in a `std::vector` that is beyond its bounds.

The `bug.cpp` file contains code that attempts to access an out-of-bounds element, leading to undefined behavior.

The `bugSolution.cpp` file shows how to prevent this error by using `at()` for bounds checking or by ensuring the index remains within the valid range of the vector.  Consider using `size()` to get the last valid index.