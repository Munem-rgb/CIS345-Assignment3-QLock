#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "qlock.h"

void
initqlock(struct qlock *q, char *name)
{
initlock(&q->lk, name);
q->locked = 0;
}

void
acquireq(struct qlock *q)
{ 
  acquire(&q->lk);

q->locked = 1;
}

void
releaseq(struct qlock *q)
{
q->locked = 0;
release(&q->lk);
}


