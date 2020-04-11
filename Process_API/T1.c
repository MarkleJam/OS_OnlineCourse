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


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("hello world (pid:%d) \n", (int) getpid());
    int rc = fork();
    int x;
    srand(time(NULL) ^ (getpid()<<16));
    x = rand();
    //rc is the pid of the child
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if(rc == 0) {
        
        printf("hello I am a child, the value of x is: %d. (pid:%d) \n", x, (int) getpid());
    } else {
        //rc_wait is what's waiting for
        
        int rc_wait = wait(NULL);
        printf("hello, I am parent of %d, the value of x is %d. (pid:%d) \n", rc,x, (int) getpid());
    }
    return 0;
}
