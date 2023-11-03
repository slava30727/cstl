#ifndef _CSTL_COMPARE_H_
#define _CSTL_COMPARE_H_

#include "types.h"



typedef enum {
    Cstl_Ordering_Less = -1,
    Cstl_Ordering_Equal = 0,
    Cstl_Ordering_Greater = 1
} Cstl_Ordering;

typedef Cstl_Ordering (*Cstl_Comparator)(Addr, Addr);

Cstl_Ordering Cstl_Ordering_reverse(Cstl_Ordering self);

Cstl_Ordering Cstl_u8_cmp(Addr lhs, Addr rhs);
Cstl_Ordering Cstl_i8_cmp(Addr lhs, Addr rhs);
Cstl_Ordering Cstl_u16_cmp(Addr lhs, Addr rhs);
Cstl_Ordering Cstl_i16_cmp(Addr lhs, Addr rhs);
Cstl_Ordering Cstl_u32_cmp(Addr lhs, Addr rhs);
Cstl_Ordering Cstl_i32_cmp(Addr lhs, Addr rhs);
Cstl_Ordering Cstl_u64_cmp(Addr lhs, Addr rhs);
Cstl_Ordering Cstl_i64_cmp(Addr lhs, Addr rhs);
Cstl_Ordering Cstl_usize_cmp(Addr lhs, Addr rhs);
Cstl_Ordering Cstl_isize_cmp(Addr lhs, Addr rhs);

u8 u8_max(u8 lhs, u8 rhs);
i8 i8_max(i8 lhs, i8 rhs);
u16 u16_max(u16 lhs, u16 rhs);
i16 i16_max(i16 lhs, i16 rhs);
u32 u32_max(u32 lhs, u32 rhs);
i32 i32_max(i32 lhs, i32 rhs);
u64 u64_max(u64 lhs, u64 rhs);
i64 i64_max(i64 lhs, i64 rhs);
usize usize_max(usize lhs, usize rhs);
isize isize_max(isize lhs, isize rhs);

u8 u8_min(u8 lhs, u8 rhs);
i8 i8_min(i8 lhs, i8 rhs);
u16 u16_min(u16 lhs, u16 rhs);
i16 i16_min(i16 lhs, i16 rhs);
u32 u32_min(u32 lhs, u32 rhs);
i32 i32_min(i32 lhs, i32 rhs);
u64 u64_min(u64 lhs, u64 rhs);
i64 i64_min(i64 lhs, i64 rhs);
usize usize_min(usize lhs, usize rhs);
isize isize_min(isize lhs, isize rhs);



#ifdef USING_NAMESPACE_CSTL

    typedef Cstl_Ordering Ordering;

    #define Ordering_reverse(self) \
        Cstl_Ordering_reverse(self)



    typedef Cstl_Comparator Comparator;



    #define u8_cmp Cstl_u8_cmp
    #define i8_cmp Cstl_i8_cmp
    #define u16_cmp Cstl_u16_cmp
    #define i16_cmp Cstl_i16_cmp
    #define u32_cmp Cstl_u32_cmp
    #define i32_cmp Cstl_i32_cmp
    #define u64_cmp Cstl_u64_cmp
    #define i64_cmp Cstl_i64_cmp
    #define usize_cmp Cstl_usize_cmp
    #define isize_cmp Cstl_isize_cmp

#endif

#endif