#pragma once
#ifndef __MIMALLOC_RUST_H
#define __MIMALLOC_RUST_H

// "os.c"
uintptr_t   _mi_align_up_rs(uintptr_t sz, size_t alignment);
void*       mi_align_up_ptr_rs(void* p, size_t alignment);
uintptr_t   _mi_align_down_rs(uintptr_t sz, size_t alignment);
void*       mi_align_down_ptr_rs(void* p, size_t alignment);
size_t      _mi_os_page_size_rs();
void*       mi_os_page_align_region(void* addr, size_t size, size_t* newsize);
bool        mi_os_protectx(void* addr, size_t size, bool protect);
bool        _mi_os_protect(void* addr, size_t size);
bool        _mi_os_unprotect(void* addr, size_t size);

#endif // __MIMALLOC_RUST_H
