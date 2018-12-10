#include <stdio.h>

int main(void)
{
        for (int i = 99; i >= 0; i--) {
                switch (i) {
                case 0:
                        printf("No more bottles of beer on the wall, no more bottles of beer.\n");
                        printf("Go to the store and buy some more, 99 bottles of beer on the wall.");
                        break;
                case 1:
                        printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
                        printf("Take one down and pass it around, no more bottles of beer on the wall\n");
                        break;
                default:
                        printf("%d bottles of beer on the wall, %d bottles of beer.\n", i, i);
                        printf("Take one down and pass it around, %d %s of beer on the wall.\n", i - 1, ((i - 1) > 1)? "bottles" : "bottle");
                        break;
                }
        }

        return 0;
}

