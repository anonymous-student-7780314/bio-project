#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
 
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
 
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
 
typedef float f32;
typedef double f64;
 
typedef i8 b8;
typedef i32 b32;

typedef struct {
    f32 x;
    f32 y;
} vec2f;
 
int main() {
    vec2f v = {
        .y = 1
    };

    printf("vector = < %f, %f >\n", v.x, v.y);

    return 0;
};