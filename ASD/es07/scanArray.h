#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_SIZE 1000   // maximum size of a line of input

int scanArray(int *a) {
    // scan line of text
    char line[MAX_LINE_SIZE];
    scanf("%[^\n]s", line);

    // convert text into array
    int size = 0, offset = 0, numFilled, n;
    do {
        numFilled = sscanf(line + offset, "%d%n", &(a[size]), &n);
        if (numFilled > 0) {
            size++;
            offset += n;
        }
    } while (numFilled > 0);

    return size;
}
