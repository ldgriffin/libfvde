AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCSTRING_CPPFLAGS@ \
	@LIBCDATA_CPPFLAGS@ \
	@LIBCERROR_CPPFLAGS@ \
	@LIBCLOCALE_CPPFLAGS@ \
	@LIBCNOTIFY_CPPFLAGS@ \
	@LIBCSPLIT_CPPFLAGS@ \
	@LIBUNA_CPPFLAGS@ \
	@LIBCFILE_CPPFLAGS@ \
	@LIBCPATH_CPPFLAGS@ \
	@LIBBFIO_CPPFLAGS@ \
	@LIBFCACHE_CPPFLAGS@ \
	@LIBFDATA_CPPFLAGS@ \
	@LIBFGUID_CPPFLAGS@ \
	@LIBFVALUE_CPPFLAGS@ \
	@LIBHMAC_CPPFLAGS@ \
	@LIBCAES_CPPFLAGS@ \
	@LIBXML2_CPPFLAGS@

lib_LTLIBRARIES = libfvde.la

libfvde_la_SOURCES = \
	fvde_metadata.h \
	fvde_volume.h \
	libfvde.c \
	libfvde_checksum.c libfvde_checksum.h \
	libfvde_codepage.h \
	libfvde_debug.c libfvde_debug.h \
	libfvde_definitions.h \
	libfvde_encryption.c libfvde_encryption.h \
	libfvde_encrypted_metadata.c libfvde_encrypted_metadata.h \
	libfvde_encryption_context_plist.c libfvde_encryption_context_plist.h \
	libfvde_error.c libfvde_error.h \
	libfvde_extern.h \
	libfvde_io_handle.c libfvde_io_handle.h \
	libfvde_keyring.c libfvde_keyring.h \
	libfvde_legacy.c libfvde_legacy.h \
	libfvde_libbfio.h \
	libfvde_libcaes.h \
	libfvde_libcerror.h \
	libfvde_libclocale.h \
	libfvde_libcnotify.h \
	libfvde_libcstring.h \
	libfvde_libfcache.h \
	libfvde_libfdata.h \
	libfvde_libfguid.h \
	libfvde_libfvalue.h \
	libfvde_libhmac.h \
	libfvde_libuna.h \
	libfvde_metadata.c libfvde_metadata.h \
	libfvde_metadata_block.c libfvde_metadata_block.h \
	libfvde_notify.c libfvde_notify.h \
	libfvde_password.c libfvde_password.h \
	libfvde_sector_data.c libfvde_sector_data.h \
	libfvde_support.c libfvde_support.h \
	libfvde_types.h \
	libfvde_unused.h \
	libfvde_volume.c libfvde_volume.h \
	libfvde_xml_plist.c libfvde_xml_plist.h \
	libfvde_xml_plist_key.c libfvde_xml_plist_key.h

libfvde_la_LIBADD = \
	@LIBCSTRING_LIBADD@ \
	@LIBCERROR_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBBFIO_LIBADD@ \
	@LIBFCACHE_LIBADD@ \
	@LIBFDATA_LIBADD@ \
	@LIBFGUID_LIBADD@ \
	@LIBFVALUE_LIBADD@ \
	@LIBHMAC_LIBADD@ \
	@LIBCAES_LIBADD@ \
	@LIBXML2_LIBADD@ \
	@LIBCRYPTO_LIBADD@ \
	@LIBDL_LIBADD@

libfvde_la_LDFLAGS = -no-undefined -version-info 1:0:0

EXTRA_DIST = \
	libfvde_definitions.h.in \
	libfvde.rc \
	libfvde.rc.in

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f libfvde_definitions.h
	/bin/rm -f libfvde.rc
	/bin/rm -f Makefile

splint:
	@echo "Running splint on libfvde ..."
	-splint -preproc -redef $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(libfvde_la_SOURCES)

