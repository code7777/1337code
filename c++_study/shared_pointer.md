a pointer that keeps track of how many times its referenced and deletes itself
when it's not referencing anything

a shared pointer contains the reference count and the control block
the control block contains the reference count