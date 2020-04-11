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
    
    
    int memSize = 50*1024*1024;
    char* buffer = malloc( memSize );
    if ( buffer != 0 )
    {
        // check contents
        for (int i = 0; i < memSize; i++ )
        {
            if ( buffer[i] != 0 )
            {
                // holler
                break;
            }
        }
        
//        sleep(60000);
//        free( buffer );
    }
    while (1);
    return 0;
}
