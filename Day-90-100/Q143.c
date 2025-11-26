/*Q143: Find and print the student with the highest marks.
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n, i, top;
    struct Student s[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%d", &s[i].marks);
    }

    top = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    printf("Topper: %s (Marks: %d)", s[top].name, s[top].marks);

    return 0;
}
