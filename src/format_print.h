#include<iostream>

#define prboolf(num)        __print<bool>(num)
#define prshortf(num)       __print<short>(num)
#define prcharf(num)        __print<char>(num)
#define printf(num)         __print<int>(num)
#define prlongf(num)        __print<long>(num)
#define print8_tf(num)      __print<int8_t>(num)
#define print16_tf(num)     __print<int16_t>(num)
#define print32_tf(num)     __print<int32_t>(num)
#define print64_tf(num)     __print<int64_t>(num)
#define pru_int8_tf(num)    __print<u_int8_t>(num)
#define pru_int16_tf(num)   __print<u_int16_t>(num)
#define pru_int32_tf(num)   __print<u_int32_t>(num)
#define pru_int64_tf(num)   __print<u_int64_t>(num)
#define pru_charf(num)      __print<u_char>(num)
#define pru_shortf(num)     __print<u_short>(num)
#define pru_intf(num)       __print<u_int>(num)
#define pru_longf(num)      __print<u_long>(num)

#define prfloatf(num)       __print<float>(num)
#define prdoublef(num)      __print<double>(num)

#define prboolf(num)        __print<bool>(num)

#define prsigned            __print<signed
#define prunsigned          __print<unsigned
#define prlong              __print<long

#define charf(num)          char>(num)
#define shortf(num)         short>(num)
#define intf(num)           int>(num)
#define longf(num)          long>(num)
#define floatf(num)         float>(num)
#define doublef(num)        double>(num)

#define PRINT_TYPE(T) \
    void pr##T##f(T obj) { \
        std::cout << obj << std::endl; \
    }

namespace FormatPrint {
    template<typename T> void __print(T num) {
        std::cout << num << std::endl;
    }
}