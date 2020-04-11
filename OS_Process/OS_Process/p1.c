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

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("hello world (pid:%d) \n", (int) getpid());
    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if(rc == 0) {
        printf("hello I am a child (pid:%d) \n", (int) getpid());
    } else {
        printf("hello, I am parent of %d (pid:%d) \n", rc, (int) getpid());
    }
    return 0;
}
