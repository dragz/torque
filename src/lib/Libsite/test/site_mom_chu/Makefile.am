PROG_ROOT = ../..

AM_CFLAGS = -g -DTEST_FUNCTION -I${PROG_ROOT}/ -I${PROG_ROOT}/${PBS_MACH} --coverage -I${PROG_ROOT}/../../resmom/${PBS_MACH}

lib_LTLIBRARIES = libsite_mom_chu.la

AM_LDFLAGS = @CHECK_LIBS@ ${lib_LTLIBRARIES}

check_PROGRAMS = test_site_mom_chu

libsite_mom_chu_la_SOURCES = scaffolding.c ${PROG_ROOT}/site_mom_chu.c
libsite_mom_chu_la_LDFLAGS = @CHECK_LIBS@ -shared

test_site_mom_chu_SOURCES = test_site_mom_chu.c

check_SCRIPTS = coverage_run.sh

TESTS = ${check_PROGRAMS} coverage_run.sh

coverage_run.sh:
	echo 'cp -p .libs/site_mom_chu.gc* . >/dev/null 2>&1' > $@
	echo 'RESULTS=($$(gcov site_mom_chu.gcda))' >> $@
	echo 'PARSED_RESULT="TOTALCOV -- $${RESULTS[1]}: Lines($${RESULTS[5]})- $${RESULTS[3]}"' >> $@
	echo 'echo -e "\033[40m\033[1;33m$$PARSED_RESULT\033[0m"' >> $@
	chmod +x $@

CLEANFILES = coverage_run.sh *.gcno *.gcda *.gcov core *.lo
