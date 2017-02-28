#ifndef __PROC_STAT__
#define __PROC_STAT__
struct proc_stat {
  int pid;
  int parent_pid;
  long user_time;
  long sys_time;
  long state;
  unsigned long priority;
  unsigned long normal_priority;
  unsigned long static_priority;
  unsigned long rt_priority;
  int time_slice;
  unsigned policy;
  unsigned long num_context_switches;
  char name[255];
};
#endif
