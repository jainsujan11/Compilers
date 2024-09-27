int main() {
    int my_array1[6] = { 1, 2, [2]=7 };
    char my_array2[] = "Hello, Universe!";
    char char_var1 = 'A';
    char *char_ptr_var = &char_var1;
    *char_ptr_var = 'B';

    unsigned long ul_var1 = +1234567890;
    short short_var = ~255;
    float f_var = -2.34;
    double d_var = 1.618e-3;
    _Bool bool_var = 1;
    double _Complex complex_var;
    double _Imaginary imaginary_var;

    ul_var1 = (int) short_var;
    ul_var1 = sizeof(double);
    ul_var1 = sizeof ul_var1;

    ul_var1 *= ul_var1, ul_var1 /= ul_var1, ul_var1 %= ul_var1;
    //ul_var1 += (ul_var1 -= ul_var1);
    ul_var1 <<= (ul_var1 >>= ul_var1);
    ul_var1 &= ul_var1 |= ul_var1 ^= ul_var1;

    ul_var1 = ( (ul_var1 == 0 || ul_var1 == 1) && ul_var1 != short_var ) ? ul_var1 = 0 : short_var;
    my_array1[short_var] = ul_var1;

    MY_LABEL:
        if (f_var < d_var) {

            switch (short_var) {
                case 0:
                    short_var++;
                    break;
                default:
                    short_var--;
            }

        } else if (f_var > d_var) {
            if(short_var >= ul_var1)
                ul_var1++;
        } else {
            if(short_var <= ul_var1)
                short_var++;
        }
    
    while(short_var--)
        goto MY_LABEL;

    /* This is a multi-line comment
       spanning multiple lines.
       It can be used for explanations. */

    do {
        short_var++;
    } while(short_var < 0);

    int t_var1, t_var2, t_var3, t_var4, t_var5, t_var6;

    t_var1 = t_var1 + t_var2 - t_var3 / t_var4 * t_var5 % t_var6;
    t_var2 = t_var2 << 2;
    t_var2 = t_var2 >> 2;
    t_var1 = t_var2 & t_var3 | t_var4 ^ t_var5;

    /* . and -> test */
    my_struct_type1.my_member = 5;
    my_struct_type2->my_member = 6;

    // inline void foo2(int a, int b) {}
    my_custom_function(10, 20);

    return 0;
}