#include "spinlock.h"
struct qlock {
struct spinlock lk;
int locked;
};

void initqlock(struct qlock *q, char *name);
void acquireq(struct qlock *q);
void releaseq(struct qlock *q);
