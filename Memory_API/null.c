//
//  main.c
//  OS_Process
//
//  Created by Zhiquan Zhang on 3/21/20.
//  Copyright © 2020 Zhiquan Zhang. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <fcntl.h> // for open
#include <string.h>

int main(int argc, const char * argv[]) {

    int* p = (int*) malloc(sizeof(int));
    //int *p;
    //p = NULL;
    
    *p = 1;
    free(p);
    return 0;
}
