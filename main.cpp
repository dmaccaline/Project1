#include "prog1_functions.hpp"

int main(int argc, char** argv) {

    //get number of children from command line
    int user_proc = atoi(argv[1]);

    pid_t pid = getpid();
    int child_num[25]; //array to hold the child number
    //can expect max. 25 children per the spec (section 3c.)
    int n_processes = 0; //counts number of finished child processes


    cout << "Parent pid is " << pid << endl;
    for(int i = 0; i < user_proc; i++) { //for loop to create child processes
        if (pid != 0) {
            pid = fork();
            child_num[i] = pid;
        }
    }
    
    if (pid == 0) { //pid == 0 within child process, child prints its own pid
        cout << "Started child with pid " << getpid() << endl;
    }
    
    else if (pid > 0) { //pid > 0 within parent process, waits for child to finish
        while(n_processes < user_proc) { //while the number of running processes is less than the amount the user requested
            pid_t child_pid = wait(NULL);
            if(child_pid > 0) { //needed to include this to prevent invalid PIDs of -1? not sure why
                cout << "Child " << findIndex(child_pid, child_num)+1 << " (PID " << child_pid << ") finished" << endl;
                n_processes++; //iterate the number of finished child processes
            }
        }
    }
    return 0;
}
