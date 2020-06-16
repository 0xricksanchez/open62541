/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 *    Copyright 2020 (c) Fraunhofer FKIE (Author: Christopher Krah)
 */



/*
** Main entry point.  The fuzzer invokes this function with each
** fuzzed input.
*/
#include <atoi.h>
#include <open62541/types.h>

extern "C" int
LLVMFuzzerTestOneInput(uint8_t *data, size_t size) {
    size_t retLen;
    UA_StatusCode = atoiUnsigned(data, size, &retLen);
    if (retLen > 0)
        free(ret);
    return 0;
}
