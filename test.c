typedef struct {
    int x;
    int y;
    // Function pointer as a member
    int (*calculate)(struct MyStruct* self);
} MyStruct;

// Implementing the function
int calculate_method(MyStruct* self) {
    return self->x + self->y;
}

#include <libc.h>
int main() {
    MyStruct s =
    {
        .x = -10, 
        .y = 20, 
        .calculate = calculate_method
    };
    int result = s.calculate(&s);  
    printf("%d]]\n", result);

}
