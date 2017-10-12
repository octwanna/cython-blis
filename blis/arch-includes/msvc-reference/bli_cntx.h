/*

   BLIS    
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2014, The University of Texas at Austin
   Copyright (C) 2016 Hewlett Packard Enterprise Development LP

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

#ifndef BLIS_CNTX_H
#define BLIS_CNTX_H

//#include "bli_cntx_init.h"


// Context object type (defined in bli_type_defs.h)

/*
typedef struct cntx_s
{
	blksz_t*  blkszs;
	bszid_t*  bmults;

	func_t*   l3_vir_ukrs;
	func_t*   l3_nat_ukrs;
	mbool_t*  l3_nat_ukrs_prefs;

	func_t*   l1f_kers;
	func_t*   l1v_kers;

	func_t*   packm_kers;
	func_t*   unpackm_kers;

	ind_t     method;
	pack_t    schema_a;
	pack_t    schema_b;
	pack_t    schema_c;

	bool_t    anti_pref;

	dim_t*    thrloop;

	membrk_t* membrk;
} cntx_t;
*/

// -----------------------------------------------------------------------------

// cntx_t query (fields only)

#define bli_cntx_blkszs_buf( cntx ) \
\
	( (cntx)->blkszs )

#define bli_cntx_bmults_buf( cntx ) \
\
	( (cntx)->bmults )

#define bli_cntx_l3_vir_ukrs_buf( cntx ) \
\
	( (cntx)->l3_vir_ukrs )

#define bli_cntx_l3_nat_ukrs_buf( cntx ) \
\
	( (cntx)->l3_nat_ukrs )

#define bli_cntx_l3_nat_ukrs_prefs_buf( cntx ) \
\
	( (cntx)->l3_nat_ukrs_prefs )

#define bli_cntx_l1f_kers_buf( cntx ) \
\
	( (cntx)->l1f_kers )

#define bli_cntx_l1v_kers_buf( cntx ) \
\
	( (cntx)->l1v_kers )

#define bli_cntx_packm_kers_buf( cntx ) \
\
	( (cntx)->packm_kers )

#define bli_cntx_unpackm_kers_buf( cntx ) \
\
	( (cntx)->unpackm_kers )

#define bli_cntx_method( cntx ) \
\
	( (cntx)->method )

#define bli_cntx_schema_a_block( cntx ) \
\
	( (cntx)->schema_a_block )

#define bli_cntx_schema_b_panel( cntx ) \
\
	( (cntx)->schema_b_panel )

#define bli_cntx_schema_c_panel( cntx ) \
\
	( (cntx)->schema_c_panel )

#define bli_cntx_anti_pref( cntx ) \
\
	( (cntx)->anti_pref )

#define bli_cntx_thrloop( cntx ) \
\
	( (cntx)->thrloop )

#define bli_cntx_membrk( cntx ) \
\
	( (cntx)->membrk )

#if 1
#define bli_cntx_jc_way( cntx ) \
\
	( (cntx)->thrloop[ BLIS_NC ] )

#define bli_cntx_pc_way( cntx ) \
\
	( (cntx)->thrloop[ BLIS_KC ] )

#define bli_cntx_ic_way( cntx ) \
\
	( (cntx)->thrloop[ BLIS_MC ] )

#define bli_cntx_jr_way( cntx ) \
\
	( (cntx)->thrloop[ BLIS_NR ] )

#define bli_cntx_ir_way( cntx ) \
\
	( (cntx)->thrloop[ BLIS_MR ] )
#endif

#define bli_cntx_way_for_bszid( bszid, cntx ) \
\
    ( (cntx)->thrloop[ bszid ] )

// cntx_t modification (fields only)

#define bli_cntx_set_blkszs_buf( _blkszs, cntx_p ) \
{ \
	(cntx_p)->blkszs = _blkszs; \
}

#define bli_cntx_set_bmults_buf( _bmults, cntx_p ) \
{ \
	(cntx_p)->bmults = _bmults; \
}

#define bli_cntx_set_l3_vir_ukrs_buf( _l3_vir_ukrs, cntx_p ) \
{ \
	(cntx_p)->l3_vir_ukrs = _l3_vir_ukrs; \
}

#define bli_cntx_set_l3_nat_ukrs_buf( _l3_nat_ukrs, cntx_p ) \
{ \
	(cntx_p)->l3_nat_ukrs = _l3_nat_ukrs; \
}

#define bli_cntx_set_l3_nat_ukrs_prefs_buf( _l3_nat_ukrs_prefs, cntx_p ) \
{ \
	(cntx_p)->l3_nat_ukrs_prefs = _l3_nat_ukrs_prefs; \
}

#define bli_cntx_set_l1f_kers_buf( _l1f_kers, cntx_p ) \
{ \
	(cntx_p)->l1f_kers = _l1f_kers; \
}

#define bli_cntx_set_l1v_kers_buf( _l1v_kers, cntx_p ) \
{ \
	(cntx_p)->l1v_kers = _l1v_kers; \
}

#define bli_cntx_set_method( _method, cntx_p ) \
{ \
	(cntx_p)->method = _method; \
}

#define bli_cntx_set_schema_a_block( _schema_a_block, cntx_p ) \
{ \
	(cntx_p)->schema_a_block = _schema_a_block; \
}

#define bli_cntx_set_schema_b_panel( _schema_b_panel, cntx_p ) \
{ \
	(cntx_p)->schema_b_panel = _schema_b_panel; \
}

#define bli_cntx_set_schema_c_panel( _schema_c_panel, cntx_p ) \
{ \
	(cntx_p)->schema_c_panel = _schema_c_panel; \
}

#define bli_cntx_set_anti_pref( _anti_pref, cntx_p ) \
{ \
	(cntx_p)->anti_pref = _anti_pref; \
}

#define bli_cntx_set_thrloop( jc_, pc_, ic_, jr_, ir_, cntx_p ) \
{ \
	(cntx_p)->thrloop[ BLIS_NC ] = jc_; \
	(cntx_p)->thrloop[ BLIS_KC ] = pc_; \
	(cntx_p)->thrloop[ BLIS_MC ] = ic_; \
	(cntx_p)->thrloop[ BLIS_NR ] = jr_; \
	(cntx_p)->thrloop[ BLIS_MR ] = ir_; \
	(cntx_p)->thrloop[ BLIS_KR ] = 1;   \
}

#define bli_cntx_set_membrk( _membrk, cntx_p ) \
{ \
	(cntx_p)->membrk = _membrk; \
}

// cntx_t query (complex)

#define bli_cntx_get_blksz_def_dt( dt, bs_id, cntx ) \
\
	bli_blksz_get_def \
	( \
	  (dt), (&(bli_cntx_blkszs_buf( (cntx) ))[ bs_id ]) \
	)

#define bli_cntx_get_blksz_max_dt( dt, bs_id, cntx ) \
\
	bli_blksz_get_max \
	( \
	  (dt), (&(bli_cntx_blkszs_buf( (cntx) ))[ bs_id ]) \
	)

#define bli_cntx_get_bmult_dt( dt, bs_id, cntx ) \
\
	bli_blksz_get_def \
	( \
	  (dt), \
	  (&(bli_cntx_blkszs_buf( (cntx) )) \
	  [ \
	    (bli_cntx_bmults_buf( (cntx) ))[ bs_id ] \
	  ]) \
	)

#define bli_cntx_get_l3_ukr_dt( dt, ukr_id, cntx ) \
\
	bli_func_get_dt \
	( \
	  (dt), \
	  &(( \
	    bli_cntx_method( (cntx) ) != BLIS_NAT && \
	    bli_is_complex( dt ) \
		  ? bli_cntx_l3_vir_ukrs_buf( (cntx) ) \
	      : bli_cntx_l3_nat_ukrs_buf( (cntx) ) \
	  )[ ukr_id ]) \
	)

#define bli_cntx_get_l3_vir_ukr_dt( dt, ukr_id, cntx ) \
\
	bli_func_get_dt \
	( \
	  (dt), (&(bli_cntx_l3_vir_ukrs_buf( (cntx) ))[ ukr_id ]) \
	)

#define bli_cntx_get_l3_nat_ukr_dt( dt, ukr_id, cntx ) \
\
	bli_func_get_dt \
	( \
	  (dt), (&(bli_cntx_l3_nat_ukrs_buf( (cntx) ))[ ukr_id ]) \
	)

#define bli_cntx_get_l1f_ker_dt( dt, ker_id, cntx ) \
\
	bli_func_get_dt \
	( \
	  (dt), (&(bli_cntx_l1f_kers_buf( (cntx) ))[ ker_id ]) \
	)

#define bli_cntx_get_l1v_ker_dt( dt, ker_id, cntx ) \
\
	bli_func_get_dt \
	( \
	  (dt), (&(bli_cntx_l1v_kers_buf( (cntx) ))[ ker_id ]) \
	)

#define bli_cntx_get_l3_nat_ukr_prefs_dt( dt, ukr_id, cntx ) \
\
	bli_mbool_get_dt \
	( \
	  (dt), (&(bli_cntx_l3_nat_ukrs_prefs_buf( (cntx) ))[ ukr_id ]) \
	)

#define bli_cntx_get_ind_method( cntx ) \
\
	bli_cntx_method( cntx )

#define bli_cntx_get_pack_schema_a_block( cntx ) \
\
	bli_cntx_schema_a_block( cntx )

#define bli_cntx_get_pack_schema_b_panel( cntx ) \
\
	bli_cntx_schema_b_panel( cntx )

#define bli_cntx_get_pack_schema_c_panel( cntx ) \
\
	bli_cntx_schema_c_panel( cntx )

#define bli_cntx_get_membrk( cntx ) \
\
	bli_cntx_membrk( cntx )




// -----------------------------------------------------------------------------

// create/free

//void     bli_cntx_create( cntx_t* cntx );
//void     bli_cntx_free( cntx_t* cntx );
void     bli_cntx_clear( cntx_t* cntx );
void     bli_cntx_init( cntx_t* cntx );

// get functions

blksz_t* bli_cntx_get_blksz( bszid_t bs_id,
                             cntx_t* cntx );
blksz_t* bli_cntx_get_bmult( bszid_t bs_id,
                             cntx_t* cntx );
func_t*  bli_cntx_get_l3_ukr( l3ukr_t ukr_id,
                              cntx_t* cntx );
func_t*  bli_cntx_get_l3_vir_ukr( l3ukr_t ukr_id,
                                  cntx_t* cntx );
func_t*  bli_cntx_get_l3_nat_ukr( l3ukr_t ukr_id,
                                  cntx_t* cntx );
mbool_t* bli_cntx_get_l3_nat_ukr_prefs( l3ukr_t ukr_id,
                                        cntx_t* cntx );
func_t*  bli_cntx_get_l1f_ker( l1fkr_t ker_id,
                               cntx_t* cntx );
func_t*  bli_cntx_get_l1v_ker( l1vkr_t ker_id,
                               cntx_t* cntx );
//func_t*  bli_cntx_get_packm_ukr( cntx_t* cntx );

//dim_t    bli_cntx_get_blksz_def_dt( num_t   dt,
//                                    bszid_t bs_id,
//                                    cntx_t* cntx );
//dim_t    bli_cntx_get_blksz_max_dt( num_t   dt,
//                                    bszid_t bs_id,
//                                    cntx_t* cntx );
//dim_t    bli_cntx_get_bmult_dt( num_t   dt,
//                                bszid_t bs_id,
//                                cntx_t* cntx );
//void*    bli_cntx_get_l3_ukr_dt( num_t   dt,
//                                 l3ukr_t ukr_id,
//                                 cntx_t* cntx );
//void*    bli_cntx_get_l3_vir_ukr_dt( num_t   dt,
//                                     l3ukr_t ukr_id,
//                                     cntx_t* cntx );
//void*    bli_cntx_get_l3_nat_ukr_dt( num_t   dt,
//                                     l3ukr_t ukr_id,
//                                     cntx_t* cntx );
//bool_t   bli_cntx_get_l3_nat_ukr_prefs_dt( num_t   dt,
//                                           l3ukr_t ukr_id,
//                                           cntx_t* cntx );
//void*    bli_cntx_get_l1f_ker_dt( num_t   dt,
//                                  l1fkr_t ker_id,
//                                  cntx_t* cntx );
//void*    bli_cntx_get_l1v_ker_dt( num_t   dt,
//                                  l1vkr_t ker_id,
//                                  cntx_t* cntx );
func_t*  bli_cntx_get_packm_ker( l1mkr_t ker_id,
                                 cntx_t* cntx );
func_t*  bli_cntx_get_unpackm_ker( l1mkr_t ker_id,
                                   cntx_t* cntx );
//ind_t    bli_cntx_get_ind_method( cntx_t* cntx );
//pack_t   bli_cntx_get_pack_schema_a_block( cntx_t* cntx );
//pack_t   bli_cntx_get_pack_schema_b_panel( cntx_t* cntx );
//pack_t   bli_cntx_get_pack_schema_c_panel( cntx_t* cntx );
//bool_t   bli_cntx_get_ukr_anti_pref( cntx_t* cntx );
dim_t    bli_cntx_get_num_threads( cntx_t* cntx );
dim_t    bli_cntx_get_num_threads_in( cntx_t* cntx, cntl_t* cntl );

// set functions

void     bli_cntx_set_blkszs( ind_t method, dim_t n_bs, ... );

void     bli_cntx_set_blksz( bszid_t  bs_id,
                             blksz_t* blksz,
                             bszid_t  mult_id,
                             cntx_t*  cntx );

void     bli_cntx_set_l3_nat_ukrs( dim_t n_ukrs, ... );

void     bli_cntx_set_l3_nat_ukr( l3ukr_t ukr_id,
                                  func_t* func,
                                  cntx_t* cntx );
void     bli_cntx_set_l3_nat_ukr_prefs( l3ukr_t  ukr_id,
                                        mbool_t* prefs,
                                        cntx_t*  cntx );

void     bli_cntx_set_l3_vir_ukr( l3ukr_t ukr_id,
                                  func_t* func,
                                  cntx_t* cntx );

void     bli_cntx_set_l1f_ker( l1fkr_t ker_id,
                               func_t* func,
                               cntx_t* cntx );

void     bli_cntx_set_l1v_ker( l1vkr_t ker_id,
                               func_t* func,
                               cntx_t* cntx );

void     bli_cntx_set_packm_kers( dim_t n_kers, ... );

void     bli_cntx_set_packm_ker( l1mkr_t ker_id,
                                 func_t* func,
                                 cntx_t* cntx );

void     bli_cntx_set_packm_ukr( func_t* func, 
                                 cntx_t* cntx );
void     bli_cntx_set_ind_method( ind_t   method,
                                  cntx_t* cntx );
void     bli_cntx_set_pack_schema_ab_blockpanel( pack_t  schema_a,
                                                 pack_t  schema_b,
                                                 cntx_t* cntx );
void     bli_cntx_set_pack_schema_a_block( pack_t  schema_a,
                                           cntx_t* cntx );
void     bli_cntx_set_pack_schema_b_panel( pack_t  schema_b,
                                           cntx_t* cntx );
void     bli_cntx_set_pack_schema_c_panel( pack_t  schema_c,
                                           cntx_t* cntx );
//void     bli_cntx_set_ukr_anti_pref( bool_t  anti_pref,
//                                     cntx_t* cntx );
void     bli_cntx_set_thrloop_from_env( opid_t  l3_op,
                                        side_t  side,
                                        cntx_t* cntx,
                                        dim_t m,
                                        dim_t n,
                                        dim_t k );

// other query functions

bool_t   bli_cntx_l3_nat_ukr_prefers_rows_dt( num_t   dt,
                                              l3ukr_t ukr_id,
                                              cntx_t* cntx );
bool_t   bli_cntx_l3_nat_ukr_prefers_cols_dt( num_t   dt,
                                              l3ukr_t ukr_id,
                                              cntx_t* cntx );
bool_t   bli_cntx_l3_nat_ukr_prefers_storage_of( obj_t*  obj,
                                                 l3ukr_t ukr_id,
                                                 cntx_t* cntx );
bool_t   bli_cntx_l3_nat_ukr_dislikes_storage_of( obj_t*  obj,
                                                  l3ukr_t ukr_id,
                                                  cntx_t* cntx );
bool_t   bli_cntx_l3_nat_ukr_eff_prefers_storage_of( obj_t*  obj,
                                                     l3ukr_t ukr_id,
                                                     cntx_t* cntx );
bool_t   bli_cntx_l3_nat_ukr_eff_dislikes_storage_of( obj_t*  obj,
                                                      l3ukr_t ukr_id,
                                                      cntx_t* cntx );
bool_t   bli_cntx_l3_ukr_prefers_rows_dt( num_t   dt,
                                          l3ukr_t ukr_id,
                                          cntx_t* cntx );
bool_t   bli_cntx_l3_ukr_prefers_cols_dt( num_t   dt,
                                          l3ukr_t ukr_id,
                                          cntx_t* cntx );
bool_t   bli_cntx_l3_ukr_prefers_storage_of( obj_t*  obj,
                                             l3ukr_t ukr_id,
                                             cntx_t* cntx );
bool_t   bli_cntx_l3_ukr_dislikes_storage_of( obj_t*  obj,
                                              l3ukr_t ukr_id,
                                              cntx_t* cntx );
bool_t   bli_cntx_l3_ukr_eff_prefers_storage_of( obj_t*  obj,
                                                 l3ukr_t ukr_id,
                                                 cntx_t* cntx );
bool_t   bli_cntx_l3_ukr_eff_dislikes_storage_of( obj_t*  obj,
                                                  l3ukr_t ukr_id,
                                                  cntx_t* cntx );

// print function

void bli_cntx_print( cntx_t* cntx );

// -----------------------------------------------------------------------------

// Preprocess out these calls entirely, since they are currently just empty
// functions that do nothing.
#if 0
  #define bli_cntx_create( cntx ) { bli_cntx_clear( cntx ); }
  #define bli_cntx_free( cntx )   { bli_cntx_clear( cntx ); }
#else
  #define bli_cntx_create( cntx ) { ; }
  #define bli_cntx_free( cntx )   { ; }
#endif

// These macros initialize/finalize a local context if the given context
// pointer is NULL. When initializing, the context address that should
// be used (local or external) is assigned to cntx_p.

#define bli_cntx_init_local_if( opname, dt, cntx, cntx_p ) \
\
	cntx_t _cntx_l; \
\
	if ( bli_is_null( cntx ) ) \
	{ \
		PASTEMAC(opname,_cntx_init)( dt, &_cntx_l ); \
		cntx_p = &_cntx_l; \
	} \
	else \
	{ \
		cntx_p = cntx; \
	}

#define bli_cntx_finalize_local_if( opname, cntx ) \
\
	if ( bli_is_null( cntx ) ) \
	{ \
		PASTEMAC(opname,_cntx_finalize)( &_cntx_l ); \
	}


#define bli_cntx_init_local_if2( opname, suf, dt, cntx, cntx_p ) \
\
	cntx_t _cntx_l; \
\
	if ( bli_is_null( cntx ) ) \
	{ \
		PASTEMAC2(opname,suf,_cntx_init)( dt, &_cntx_l ); \
		cntx_p = &_cntx_l; \
	} \
	else \
	{ \
		cntx_p = cntx; \
	}

#define bli_cntx_finalize_local_if2( opname, suf, cntx ) \
\
	if ( bli_is_null( cntx ) ) \
	{ \
		PASTEMAC2(opname,suf,_cntx_finalize)( &_cntx_l ); \
	}


#endif

