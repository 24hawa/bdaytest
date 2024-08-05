#include <stdio.h>
#include <windows.h>  // For Sleep() function

void clear_screen() {
    system("cls");
}

void print_message(const char *message) {
    clear_screen();
    printf("\n\n\n\n\n\n");
    printf("                 %s\n", message);
    printf("\n\n\n\n\n\n");
}

int main() {
    const char *message = "Happy Birthday!";
    int i;
    
    for (i = 0; i < 10; ++i) {
        print_message(message);
        Sleep(1000);  // Sleep for 1000 milliseconds
        clear_screen();
        Sleep(1000);  // Sleep for 1000 milliseconds
    }
    
    printf("Happy Birthday! Have a great day!\n");
    return 0;
}

