/*
 * XML plist key functions
 *
 * Copyright (C) 2011-2015, Omar Choudary <choudary.omar@gmail.com>
 *                          Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFVDE_XML_PLIST_KEY_H )
#define _LIBFVDE_XML_PLIST_KEY_H

#include <common.h>
#include <types.h>

#include <libxml/tree.h>

#include "libfvde_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libfvde_xml_plist_key libfvde_xml_plist_key_t;

struct libfvde_xml_plist_key
{
/* TODO refactor */
	/* The node
	 */
	xmlNode *node;
};

int libfvde_xml_plist_key_initialize(
     libfvde_xml_plist_key_t **plist_key,
     libcerror_error_t **error );

int libfvde_xml_plist_key_free(
     libfvde_xml_plist_key_t **plist_key,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

