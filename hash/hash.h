//
//  hash.h
//  algorithm
//
//  Created by 李晓辉 on 3/10/15.
//  Copyright (c) 2015 李晓辉. All rights reserved.
//

#ifndef __algorithm__hash__
#define __algorithm__hash__

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    uint32_t salt[4];
    uint32_t len;
    char *digest;
}hash_t;


void hash_init(hash_t*);
void hash_update(hash_t*, const void*);
void hash(hash_t*);


#ifdef __cplusplus
}
#endif

#endif /* defined(__algorithm__hash__) */
