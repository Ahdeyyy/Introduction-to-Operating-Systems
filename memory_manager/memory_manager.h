struct {
  int id;
  int size;
} Job;

enum Memory_status { 
    FREE,
    BUSY,
    NULL
};

struct {
    int location;
    int size;
    int job_no;
    int job_size;
    enum Memory_status status;
    int internal_fragmentation;

} Memory_block;

