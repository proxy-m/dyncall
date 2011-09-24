/*

 Copyright (c) 2007-2011 Daniel Adler <dadler@uni-goettingen.de>, 
                         Tassilo Philipp <tphilipp@potion-studios.com>

 Permission to use, copy, modify, and distribute this software for any
 purpose with or without fee is hereby granted, provided that the above
 copyright notice and this permission notice appear in all copies.

 THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

*/

/*

  dyncall 32bit ARM32 family interface (THUMB mode)

  REVISION
  2008/08/12 initial

*/


#ifndef DYNCALL_CALL_ARM32_THUMB_H
#define DYNCALL_CALL_ARM32_THUMB_H


#include "dyncall_types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* 
** arm32 thumb mode calling convention calls 
**
** - hybrid return-type call (bool ... pointer)
**
*/

void dcCall_arm32_thumb(DCpointer target, DCpointer stackdata, DCsize size);

/* Internally used to avoid compiler overwriting r0 and r1 in call stub */
DClong     dcCall_arm32_thumb_word (DCpointer target, DCpointer stackdata, DCsize size);
DClonglong dcCall_arm32_thumb_dword(DCpointer target, DCpointer stackdata, DCsize size);

#ifdef __cplusplus
}
#endif


#endif /* DYNCALL_CALL_ARM32_THUMB_H */
