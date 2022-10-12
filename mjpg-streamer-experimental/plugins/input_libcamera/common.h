#ifndef COMMON_H_
#define COMMON_H_

#include <stdint.h>

struct vdIn {
    unsigned char *framebuffer;
    uint32_t width;
    uint32_t height;
    int formatIn;
    uint32_t stride;
    uint32_t snapshot_width, snapshot_height;
};

#endif