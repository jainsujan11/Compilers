int main() {
    unsigned long long_number = +123456789;
    double _Complex complex_value;
    double _Imaginary imaginary_value;
    short short_num = ~123;

    char greeting[] = "Greetings, Universe!";
    _Bool boolean_flag = 1;
    float floating_num = -9.87;
    double double_num = 3.141e-2;

    char single_char = 'X';
    char *pointer_to_char = &single_char;
    *pointer_to_char = 'Y';

    int integer_array[6] = { 1, 2, [2] = 7 };

    long_number = (int) short_num;
    long_number = sizeof(double);
    long_number = sizeof long_number;

    long_number *= long_number, long_number /= long_number, long_number %= long_number;
    // long_number += (long_number -= long_number);
    long_number <<= (long_number >>= long_number);
    long_number &= long_number |= long_number ^= long_number;

    long_number = ( (long_number == 0 || long_number == 1) && long_number != short_num ) ? long_number = 0 : short_num;
    integer_array[short_num] = long_number;

    MAIN_LOOP:
        if (floating_num < double_num) {

            switch (short_num) {
                case 0:
                    short_num++;
                    break;
                default:
                    short_num--;
            }

        } else if (floating_num > double_num) {
            if(short_num >= long_number)
                long_number++;
        } else {
            if(short_num <= long_number)
                short_num++;
        }

    while(short_num--)
        goto MAIN_LOOP;

    /* Block comment for explaining
       important logic in the code. */

    do {
        short_num++;
    } while(short_num < 0);

    int temp_var1, temp_var2, temp_var3, temp_var4, temp_var5, temp_var6;

    temp_var1 = temp_var1 + temp_var2 - temp_var3 / temp_var4 * temp_var5 % temp_var6;
    temp_var2 = temp_var2 << 2;
    temp_var2 = temp_var2 >> 2;
    temp_var1 = temp_var2 & temp_var3 | temp_var4 ^ temp_var5;

    /* Example of using . and -> operators */
    my_struct_type.first_member = 5;
    my_pointer_to_struct->second_member = 6;

    // inline void another_custom_func(int param1, int param2) {}
    execute_custom_function(25, 35);

    return 0;
}
