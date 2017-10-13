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

#ifndef BLIS_KERNEL_3M2_MACRO_DEFS_H
#define BLIS_KERNEL_3M2_MACRO_DEFS_H


// -- Define row access bools --------------------------------------------------

// gemm3m2 micro-kernels

#define BLIS_CGEMM3M2_UKERNEL_PREFERS_CONTIG_ROWS \
        BLIS_SGEMM_UKERNEL_PREFERS_CONTIG_ROWS
#define BLIS_ZGEMM3M2_UKERNEL_PREFERS_CONTIG_ROWS \
        BLIS_DGEMM_UKERNEL_PREFERS_CONTIG_ROWS


// -- Define default 3m-specific kernel names ----------------------------------

//
// Level-3
//

// gemm3m2 micro-kernels

#ifndef BLIS_CGEMM3M2_UKERNEL
#define BLIS_CGEMM3M2_UKERNEL BLIS_CGEMM3M2_UKERNEL_REF
#endif

#ifndef BLIS_ZGEMM3M2_UKERNEL
#define BLIS_ZGEMM3M2_UKERNEL BLIS_ZGEMM3M2_UKERNEL_REF
#endif



#endif 
