#include "schubfach.h"
#include <stdio.h>

int main() {
  char buf[schubfach::buffer_size];
  schubfach::dtoa(6.62607015e-34, buf);
  puts(buf);
}
