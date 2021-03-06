## vim: ft=automake comments=b\:#,b\:##,b\:#\! formatoptions+=tcqlor
# =============================================================================
# 
# @(#) File: doc/projects/ssg/Makefile.am  Version: @VERSION@  Date: @PACKAGE_DATE@
#
# -----------------------------------------------------------------------------
#
# Copyright (c) 2008-2015  Monavacon Limited <http://www.monavacon.com/>
# Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
# Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>
#
# All Rights Reserved.
#
# This program is free software; you can redistribute it and/or modify it under
# the terms of the GNU Affero General Public License as published by the Free
# Software Foundation; version 3 of the License.
#
# This program is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more
# details.
#
# You should have received a copy of the GNU Affero General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>, or
# write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
# 02139, USA.
#
# -----------------------------------------------------------------------------
#
# U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
# behalf of the U.S. Government ("Government"), the following provisions apply
# to you.  If the Software is supplied by the Department of Defense ("DoD"), it
# is classified as "Commercial Computer Software" under paragraph 252.227-7014
# of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
# successor regulations) and the Government is acquiring only the license rights
# granted herein (the license rights customarily provided to non-Government
# users).  If the Software is supplied to any unit or agency of the Government
# other than DoD, it is classified as "Restricted Computer Software" and the
# Government's rights in the Software are defined in paragraph 52.227-19 of the
# Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
# the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
# (or any successor regulations).
#
# -----------------------------------------------------------------------------
#
# Commercial licensing and support of this software is available from OpenSS7
# Corporation at a fee.  See http://www.openss7.com/
#
# =============================================================================

include ../../../am/openss7.am

info_TEXINFOS		=

if DEVELOPMENT
## DEVELOPMENT

info_TEXINFOS		+= ssg.texi

ssg_TEXINFOS		= \
			  $(top_srcdir)/scripts/texi/macros.texi \
			  $(top_srcdir)/scripts/texi/versions.texi

if MAINTAINER_MODE
if AMDEP
ssg_TEXINFOS		+= \
			  $(top_builddir)/scripts/texi/args.texi
endif
endif

EXTRA_info_TEXINFOS	= \
			  $(top_builddir)/scripts/texi/args.texi \
			  $(info_TEXINFOS) \
			  $(ssg_TEXINFOS)

if PKG_BUILD_INDEP
## PKG_BUILD_INDEP

FIG_FIGS		= \
			c.fig \
			cnam_iface.fig \
			cnam_lab.fig \
			d.fig \
			gb.fig \
			gc2.fig \
			gc.fig \
			gd.fig \
			ge.fig \
			gf.fig \
			gn.fig \
			gp.fig \
			gr.fig \
			gs.fig \
			hlrtest.fig \
			iu.fig \
			osimap.fig \
			protconf.fig \
			rack.fig \
			sg_netarch.fig \
			sgsn.fig \
			sgsntest.fig \
			sigbearer.fig

TBL_TBLS		= \
			hlr_cost.tbl \
			hlr_gate0.tbl \
			hlr_gate1.tbl \
			hlr_gate2.tbl \
			hlr_gate3.tbl \
			hlr_gate4.tbl \
			hlr_gate5.tbl \
			hlr_gate6.tbl \
			hlr_sched.tbl \
			hlr_schest.tbl \
			hlr_traf.tbl \
			labmini.tbl \
			labnodes.tbl \
			labpref.tbl

PNG_PNGS		= \
			a101c.png \
			acb56.png \
			bri.png \
			cpc388.png \
			cpc396.png \
			pca200e.png \
			t400p-ss7.png \
			v400p.png

PS_PSS			= \
			mtp2.ps \
			mtp3.ps \
			platconf.ps \
			sccp.ps \
			sdt.ps \
			sl.ps \
			stack.ps \
			tcap.ps

## PKG_BUILD_INDEP
endif

## DEVELOPMENT
endif

include ../../../am/info.am

# =============================================================================
## vim: ft=automake comments=b\:#,b\:##,b\:#\! formatoptions+=tcqlor
