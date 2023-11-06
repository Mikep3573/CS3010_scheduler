// Michael Piscione's scheduler header
//--------------------------
typedef struct {
  int taskID;           // Unique ID for this task
  int submitTime;       // The time at which this task is submitted
  int totalBurstTime;   // Total time that this task will run
  int totalWaitTime;    // The total time that this task has waited
} Task;