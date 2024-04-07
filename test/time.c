#include<stdio.h>
#include<time.h>
void showtime();
int main()

{
    showtime();
    return 0;

}
void showtime()
{
    time_t s;
    struct tm *currenttime;
    s=time(NULL);
    currenttime=localtime(&s);
    printf("%d:%d:%d",currenttime->tm_hour,currenttime->tm_min,currenttime->tm-sec);
    
}