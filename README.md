# schubfach

A C++ implementation of the Schubfach algorithm - fast and accurate conversion
of IEEE-754 `double` values to decimal strings.

Usage:

```c++
#include "schubfach.h"
#include <stdio.h>

int main() {
  char buf[schubfach::buffer_size];
  schubfach::dtoa(6.62607015e-34, buf);
  puts(buf);
}
```

Average formatting time from [dtoa-benchmark](https://github.com/fmtlib/dtoa-benchmark), smaller is better:

<img width="787" height="353" alt="image"
     src="https://github.com/user-attachments/assets/7d294f69-4e96-4d12-95f3-a0ebf867b479" />

The binary size is ~13kiB on an ARM-based macOS:

```
% c++ -c -Os -DNDEBUG -std=c++20 schubfach.cc
% du -Ah schubfach.o
 13K	schubfach.o
```

Build time is ~77ms by default and ~95ms with optimizations enabled as measured by

```
% time c++ -c -std=c++20 schubfach.cc [-O2]
```

taking the best of 3 runs.
