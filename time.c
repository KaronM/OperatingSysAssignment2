#include <sys/time.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    //TODO: return the difference between end_time and start_time. 

    double start = start_time->tv_sec + start_time->tv_usec / 1e6;
    double end   = end_time->tv_sec + end_time->tv_usec / 1e6;
    
    return end-start;

}