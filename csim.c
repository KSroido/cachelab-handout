#include "cachelab.h"
#include "cachelab.h"
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <math.h>

#ifndef CACHE_LINE_HEAD
#define CACHE_LINE_HEAD

typedef unsigned long int uli64_t;
typedef struct {
    int valid;
    int lru;
    uli64_t tag;
} CacheLine;
typedef CacheLine* Cacheset;
typedef Cacheset* Cache;

static int verboseFlag = 0;
static 
#endif  // end CACHE_LINE_HEAD

static char *Usage = "Usage: ./csim-ref [-hv] -s <s> -E <E> -b <b> -t <tracefile>";

void DetectArg(int argc, char** argv){
    int chr;
    while ( (chr = getopt(argc, argv,"hvs:E:b:t:")) != -1)
    {
        switch (chr)
        {
        case 'h': {
            printf("%s",Usage);
            exit(1);
        }
        case 'v': {
            
        }

            break;
        
        default:
            break;
        }
    }
    
}

int main(int argc, char** argv)
{

    printSummary(0, 0, 0);
    return 0;
}
