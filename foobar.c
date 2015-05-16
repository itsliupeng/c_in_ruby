#include <ruby.h>
#include "extconf.h"

void Init_foobar() {
    printf("hello, c in ruby\n");
}
