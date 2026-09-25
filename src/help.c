#include "../include/jobcontrol.h"

void help(void) {
    printf("fg: fg [job_spec]\n");
    printf("    Move job to foreground.\n\n");
    printf("    Place the job identified by JOB_SPEC in the foreground, making it the\n");
    printf("    current job. If JOB_SPEC is not present, the shell's notion of the\n");
    printf("    current job is used.\n\n");
    printf("    Exit Status:\n");
    printf("    Status of command placed in foreground, or failure if an error occurs.\n");    
}