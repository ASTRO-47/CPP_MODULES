

#include <libc.h>
void    f()
{
    system("leaks a.out");
}
int main(void)
{
    atexit(f);
    puts ("hello");
}
