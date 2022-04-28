
void ft_ultimate_div_mod(int *a, int *b);


int main(void)
{
    int *a;
    int *b;
    int div;
    int mod;

    div = 42;
    mod = 10;

    a = &div;
    b = &mod;
    
    ft_ultimate_div_mod(a, b);

}