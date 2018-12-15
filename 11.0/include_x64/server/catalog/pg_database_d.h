/*-------------------------------------------------------------------------
 *
 * pg_database_d.h
 *    Macro definitions for pg_database
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
#ifndef PG_DATABASE_D_H
#define PG_DATABASE_D_H

#define DatabaseRelationId 1262
#define DatabaseRelation_Rowtype_Id 1248

#define Anum_pg_database_datname 1
#define Anum_pg_database_datdba 2
#define Anum_pg_database_encoding 3
#define Anum_pg_database_datcollate 4
#define Anum_pg_database_datctype 5
#define Anum_pg_database_datistemplate 6
#define Anum_pg_database_datallowconn 7
#define Anum_pg_database_datconnlimit 8
#define Anum_pg_database_datlastsysoid 9
#define Anum_pg_database_datfrozenxid 10
#define Anum_pg_database_datminmxid 11
#define Anum_pg_database_dattablespace 12
#define Anum_pg_database_datacl 13

#define Natts_pg_database 13

#define TemplateDbOid 1

#endif							/* PG_DATABASE_D_H */
