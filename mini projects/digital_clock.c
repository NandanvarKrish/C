# include <stdio.h>
# include <time.h>
# include <stdbool.h>
# include <unistd.h>

int main() {
    time_t rawTime = 0;
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while (isRunning) {
        
        time(&rawTime);

        pTime = localtime(&rawTime);

        printf("\r%02d:%02d:%02d\n", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        
        sleep(1); 
        // func:- sleep(sec): Works on Mac/Linux
        // Sleep(miliseconds): Works on windows
        //Many compier still supports sleep(sec). It depends on compiler

        
    }

    return 0;
}