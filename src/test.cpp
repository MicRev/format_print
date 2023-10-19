#include "format_print.h"

class SomeClassType {
    public:
        const char* content;
        SomeClassType() {content = "Hello!";}
        operator const char*() {
            return this->content;
        }
};

PRINT_TYPE(SomeClassType)

int main() {
    FormatPrint::prlongf(1000000L);
    FormatPrint::prlong longf(123456789LL);
    FormatPrint::prunsigned long longf(123456789LL);
    FormatPrint::prlong doublef(12345.6789);
    SomeClassType a;
    prSomeClassTypef(a);
}