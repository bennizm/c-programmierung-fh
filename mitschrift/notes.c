/*
 * COMPILER INSTALLIEREN (mit WSL)
 * 1) unter windoof
 *    a) WSL (windows subsystem for linux) installieren
 *       "wsl --install" auf der Windows-Powershell eingeben
 *    b) im Microsoft-Store "wsl" eingeben und Ubuntu herunterladen
 *    c) compiler herunterladen
 *       c1) "sudo apt-get install gcc-mingw-w64" um in windows executables ".exe" zu kompilieren
 *       c2) "sudo apt-get install gcc" um in linux executables zu kompilieren
 *
 *   compiler müssten nun funktionieren (siehe nächsten Kommentar "KOMPILIEREN")
 */

/*
 * KOMPILIERN
 * Compile C-File with CLion-Compiler option via GUI
 * or via WSL commands:
 * for windows ".exe" files: "x86_64-w64-mingw32-gcc -Wall -o <example>.exe <example>.c"
 * for linux executable files: "gcc -Wall -o <example> <example>.c"
 */

#include <stdbool.h>
#include <stdio.h>
#include <windows.h>


/**
 * Beispiel for-Schleife
 */
void forSchleife() {
    for (int i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("done\n");
}

/**
 * Beispiel while-Schleife
 */
void whileSchleife() {
    int a = 0;
    while (a < 10) {
        printf("a=%d\n", a);
        Sleep(1000);
        a++;
    }
}

int main() {
    whileSchleife();
    return 0;
}
