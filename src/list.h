/*
    Copyright (c) 2009, 2010, 2013 Xeatheran Minexew

    This software is provided 'as-is', without any express or implied
    warranty. In no event will the authors be held liable for any damages
    arising from the use of this software.

    Permission is granted to anyone to use this software for any purpose,
    including commercial applications, and to alter it and redistribute it
    freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
    claim that you wrote the original software. If you use this software
    in a product, an acknowledgment in the product documentation would be
    appreciated but is not required.

    2. Altered source versions must be plainly marked as such, and must not be
    misrepresented as being the original software.

    3. This notice may not be removed or altered from any source
    distribution.
*/

#ifndef libcfx2_list_h
#define libcfx2_list_h

#include <confix2.h>

typedef unsigned short itemsize_t;

int list_init( cfx2_List* list );
void list_release( cfx2_List* list );

cfx2_uint8_t* list_add_item( cfx2_List* list, itemsize_t itemsize );

/*
void cfx2_list_insert( cfx2_List* list, size_t index, void* item );
int list_remove( cfx2_List* list, unsigned index );
int list_remove_item( cfx2_List* list, void* item );
 */

#endif
