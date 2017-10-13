/*

   BLIS    
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2014, The University of Texas at Austin

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name of The University of Texas at Austin nor the names
      of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#include "blis.h"

void bli_normfsc_check( obj_t* chi,
                        obj_t* norm )
{
	err_t e_val;

	// Check object datatypes.

	e_val = bli_check_noninteger_object( chi );
	bli_check_error_code( e_val );

	e_val = bli_check_nonconstant_object( norm );
	bli_check_error_code( e_val );

	e_val = bli_check_real_object( norm );
	bli_check_error_code( e_val );

/*
	// FGVZ: FIXME. This is a hack. We should have a _check_datatype_real_proj()
	// or something similar.
	if ( !bli_obj_is_const( *chi ) &&
	     bli_obj_datatype( *norm ) !=
	     bli_obj_datatype_proj_to_real( *chi ) ) bli_abort();
*/
	e_val = bli_check_object_real_proj_of( chi, norm );
	bli_check_error_code( e_val );

	// Check object dimensions.

	e_val = bli_check_scalar_object( chi );
	bli_check_error_code( e_val );

	e_val = bli_check_scalar_object( norm );
	bli_check_error_code( e_val );

	// Check object buffers (for non-NULLness).

	e_val = bli_check_object_buffer( chi );
	bli_check_error_code( e_val );

	e_val = bli_check_object_buffer( norm );
	bli_check_error_code( e_val );
}
