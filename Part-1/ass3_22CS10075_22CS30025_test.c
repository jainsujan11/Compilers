/*
    Test File for Assignment 3
    Author: 22CS30025
*/
#define CONST_VAL 1234

/*Testing various Data Types in TinyC*/
typedef union custom_union custom_union_t;
static custom_union_t custom_var;
struct custom_struct {
    _Bool status;
    _Complex complex_num;
    _Imaginary imag_part;
    char character;
};
// Function testing at its best!
extern inline float calculate_sum(float *restrict array, char character) {
    register double temp_double;
    static float base_value = 3.14;
    auto long temp_long;
    volatile unsigned temp_unsigned;
    return base_value + character;
}

union custom_union {
    float a, b;
};

char string1[] = "Modified string example, not a comment! /* still not a comment */";
char special_char = '\a';
signed char signed_value = -50;
unsigned short ushort_value = 60000;

int main() {
    int increment_var = 0;
    increment_var++;

    unsigned var_m = 4 * sizeof(unsigned);
    for(int i = var_m; i > 0; i--) {
        var_m = var_m + var_m - (+var_m) / 2;
        var_m <<= 2;
        var_m = var_m & var_m & var_m;
        var_m /= 4;
        var_m *= 4;
        var_m >>= 2;
        var_m += 2, var_m -= 2;
        var_m ^= ~var_m;
        if(var_m % 3 == 1)
            printf("var_m = %u\n", var_m);
        else {
            continue;
        }
    }

    float num1 = 123.456;
    float num2 = .123E-2;
    double dbl1 = 123.4e3;
    const float num3 = .123;
    const double dbl2 = .456;
    float num4 = 1.234e+3;
    float num5 = 12.345e01;

    struct custom_struct custom_struct_instance; 
    switch (custom_struct_instance.status) {
        case 0:
            custom_var.a -= increment_var;
            break;
        case 1:
            custom_var.b += increment_var;
            custom_var.b *= custom_var.a;
            break;
        default:
            break;
    }

    char string2[] = "Comb" /* Test this too! */ "ination!";
    char string3[] = "" /* Empty string test */;
    int condition_var = var_m ^ ushort_value ? 3 : 4;

    do {
        signed_value <<= 3;
        ushort_value = ushort_value & signed_value;
        signed_value >>= 3;
        ushort_value = ~ushort_value;
        if(ushort_value <= 40000 && ushort_value > 50)
            goto label_continue;
        label_continue:
            continue;
    } while(condition_var != 8 || !var_m);

    return 0;
}