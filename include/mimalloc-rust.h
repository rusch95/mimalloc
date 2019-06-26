#pragma once
#ifndef __MIMALLOC_RUST_H
#define __MIMALLOC_RUST_H

// "os.c"
uintptr_t  _mi_align_up_rs(uintptr_t sz, size_t alignment);
void*      mi_align_up_ptr_rs(void* p, size_t alignment);
uintptr_t  _mi_align_down_rs(uintptr_t sz, size_t alignment);
void*      mi_align_down_ptr_rs(void* p, size_t alignment);
size_t     _mi_os_page_size_rs();

#endif // __MIMALLOC_RUST_H
