/* The program is help understand the signal function.
   Program accepts Ctr+C, as SIGINT (Signal Interrupt) - Signum=2 and exit(1) 
   out of application
   Program take from : https://www.tutorialspoint.com/c_standard_library/c_function_signal.htm
  */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void sighandler(int);

int main () {
   signal(SIGINT, sighandler);

   while(1) {
      printf("Going to sleep for a second...\n");
      sleep(1); 
   }
   return(0);
}

void sighandler(int signum) {
   printf("Caught signal %d, coming out...\n", signum);
   exit(1);
}
