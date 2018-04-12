#include <stdio.h>

int main () {
    int c, tabs, blanks, newlines;
    tabs = 0;
    blanks = 0;
    newlines = 0;

    while((c = getchar()) != EOF) {
        if (c =='\t') {
            tabs++;
        }
        else if (c == '\n') {
            newlines++;
        }
        else if (c == ' ') {
            blanks++;
        }
    }
    printf("Tabs: %d\n", tabs);
    printf("Blanks: %d\n", blanks);
    printf("Newlines: %d\n", newlines);
}