#include <stdio.h>
int main()
{/* 
    type conversion
    int op int ----- int
    int op float ---- float
    float op float ---- float

 */

 /* type conversion type

1.implicit -- compiler automatically do
2. explicit -- force compiler to do

*/

int a = (int) 1.999999; 
printf("%d\n", a );
}