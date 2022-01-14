#import <stdio.h>
#import <stdlib.h>
#import <time.h>
void main() {
    srand(time(NULL));
    int n = rand() % 10 + 1; // Gera entre 1 e 10
    printf("Eu gerei o numero (%d)", n);


}
