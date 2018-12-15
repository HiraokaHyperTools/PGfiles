/*-------------------------------------------------------------------------
 *
 * pg_am_d.h
 *    Macro definitions for pg_am
 *
 * Portions Copyright (c) 1996-2018, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/backend/catalog/genbki.pl
 *
 *-------------------------------------------------------------------------
 */
#ifndef PG_AM_D_H
#define PG_AM_D_H

#define AccessMethodRelationId 2601

#define Anum_pg_am_amname 1
#define Anum_pg_am_amhandler 2
#define Anum_pg_am_amtype 3

#define Natts_pg_am 3


/*
 * Allowed values for amtype
 */
#define AMTYPE_INDEX					'i' /* index access method */

#define BTREE_AM_OID 403
#define HASH_AM_OID 405
#define GIST_AM_OID 783
#define GIN_AM_OID 2742
#define SPGIST_AM_OID 4000
#define BRIN_AM_OID 3580

#endif							/* PG_AM_D_H */
