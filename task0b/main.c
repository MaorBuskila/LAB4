
#include "util.h"
#define SEEK_SET 0
#define STDOUT 1
#define O_RDRW 2
#define SYS_READ 3
#define SYS_WRITE 4
#define SYS_OPEN 5
#define SYS_LSEEK 19


int main (int argc , char* argv[], char* envp[])
{
    char * new_name = "Mira ";
    int a;
    int b;
    int c;
    int fd;
    char buffer[10];
    fd = system_call(SYS_OPEN,"/home/spl211/Desktop/LAB4/task0b/greeting", O_RDRW, 0644);
    system_call(SYS_LSEEK,fd, 657, SEEK_SET);
    system_call(SYS_WRITE,fd,new_name, 5);
    system_call(SYS_READ,fd, buffer, 5);
    system_call(SYS_LSEEK,fd, 657, SEEK_SET);
    system_call(SYS_READ,fd, buffer, 5);
    system_call(SYS_WRITE,STDOUT,buffer, 4);
    return 0;
}