/*
 * -*- C -*-
 * 
 *  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 
 *                              Michael A.G. Aivazis
 *                       California Institute of Technology
 *                       (C) 1998-2005  All Rights Reserved
 * 
 *  <LicenseText>
 * 
 *  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 
 */

#if !defined(journal_macros_h)
#define journal_macros_h


/*
 * __HERE__ has to be a preprocessor macro
 */

#if defined(HAVE__FUNC__)
#define __HERE__ __FILE__,__LINE__,__FUNCTION__
#define __HERE_ARGS__ filename, lineno, funcname
#define __HERE_DECL__ const char * filename, long lineno, const char * funcname
#else
#define __HERE__ __FILE__,__LINE__
#define __HERE_ARGS__ filename, lineno
#define __HERE_DECL__ const char * filename, long lineno
#endif

#endif

/* version
 * $Id: macros.h,v 1.1.1.1 2006-11-27 00:09:39 aivazis Exp $
 */

/* End of file */

