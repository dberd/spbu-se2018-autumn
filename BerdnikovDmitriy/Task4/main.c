#include <stdio.h>
void other() {
    printf("Funny:)\n");
}
void input() {
    char story[20];
    printf("Tell me your story\n");
    scanf("%s", story);
    printf("Nice story!");
}
int main() {
    input();
    return 0;
}