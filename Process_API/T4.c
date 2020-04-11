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
    // insert code here...
    //printf("hello world (pid:%d) \n", (int) getpid());
    int rc = fork();
    //int fd;
    //fd = open("./sample", O_WRONLY | O_APPEND);
    //rc is the pid of the child
    char *myargs[1];
    myargs[0] = strdup("/bin/ls");   // program: "wc" (word count)
    //myargs[1] = strdup("p3.c"); // argument: file to count
    //myargs[2] = NULL;           // marks end of array
    execl(myargs[0], myargs);  // runs word count
    
    /*
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if(rc == 0) {
        //write(fd, "hello ", 6);
        printf("Hello\n");
        //printf("hello I am a child, the value of fd is: %d. (pid:%d) \n", fd, (int) getpid());
    } else {
        //int rc_wait = wait(NULL);
        printf("Goodbye\n");
        //write(fd, "world ", 6);
        //printf("hello, I am parent of %d, the value of fd is %d. (pid:%d) \n", rc, fd, (int) getpid());
    }
    */
    
    return 0;
}
