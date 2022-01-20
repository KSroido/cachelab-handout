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

static char *Usage = "Usage: ./csim-ref [-hv] -s <s> -E <E> -b <b> -t <tracefile>";
static int verboseFlag = 0;
static int sNum = 0 ;  
static int ENum = 0;  
static int bNum = 0;  
static int hits = 0;
static int misses = 0;
static int evictions = 0; 
static FILE* fp = NULL;

#endif  // end CACHE_LINE_HEAD

Cache cache = NULL;

void DetectArg(int argc, char** argv){
    int chr;
    while ( (chr = getopt(argc, argv,"hvs:E:b:t:")) != -1)
    {
        switch (chr)
        {
        case 'h': {
            printf("%s\n", Usage);
            exit(1);  //exit with help
        }
        case 'v': {
            verboseFlag = 1;
            break;
        }
        case 's': {
            sNum = atoi(optarg);
            break;
        }
        case 'E':
            ENum = atoi(optarg);
            break;
        case 'b':
            bNum = atoi(optarg);
            break;
        case 't':
            fp = fopen(optarg, "r");
            break;
        default:
            printf("%s\n", Usage);
            exit(1);        
        break;
        }
    }
    
}

int main(int argc, char** argv)
{

    printSummary(0, 0, evictions);
    return 0;
}
