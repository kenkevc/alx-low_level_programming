#ifndef MAIN_H
#define MAIN_H

// Function prototypes
void sayHello(void);
int add(int a, int b);

// Constants and Macros
#define MAX_SIZE 100
#define PI 3.14159265359

// Custom data structure
typedef struct {
    int x;
    int y;
} Point;

// External global variable declaration
extern int globalVariable;

#endif
