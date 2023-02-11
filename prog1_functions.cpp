//
//  prog1_functions.cpp
//  prog_1_os
//
//  Created by Jeremy Flotildes on 2/7/23.
//

#include "prog1_functions.hpp"

int findIndex(pid_t pid, int arr[]) { //function to find the index of a particular PID
    int index = 0;
    int i;
    int pid_int = (int)pid;
    for (i = 0; i < 25; i++) {
        if (arr[i] == pid_int) {
            index = i;
        }
    }
    return index;
}

