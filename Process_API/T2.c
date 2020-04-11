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

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("hello world (pid:%d) \n", (int) getpid());
    int rc = fork();
    int fd;
    fd = open("./sample", O_WRONLY | O_APPEND);
    //rc is the pid of the child
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if(rc == 0) {
        write(fd, "hello ", 6);
        printf("hello I am a child, the value of fd is: %d. (pid:%d) \n", fd, (int) getpid());
    } else {
        //rc_wait is what's waiting for
        write(fd, "world ", 6);
        printf("hello, I am parent of %d, the value of fd is %d. (pid:%d) \n", rc, fd, (int) getpid());
    }
    return 0;
}
