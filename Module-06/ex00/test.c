#include <libc.h>
int main()
{
    char *p = malloc("helllo");
    printf("%d", p);
    return 0;
}