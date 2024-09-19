// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.

#ifndef HAVE_MINIPAL_RANDOM_H
#define HAVE_MINIPAL_RANDOM_H

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

/**
 * Generate random bytes. The generated bytes are not cryptographically strong.
 */
void minipal_get_non_cryptographically_secure_random_bytes(uint8_t* buffer, int32_t bufferLength);

/**
 * Generate cryptographically strong random bytes.
 *
 * Return 0 on success, -1 on failure.
 */
int32_t minipal_get_cryptographically_secure_random_bytes(uint8_t* buffer, int32_t bufferLength);


#ifdef __cplusplus
}
#endif // __cplusplus
#endif /* HAVE_MINIPAL_RANDOM_H */
