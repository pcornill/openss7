/*****************************************************************************

 @(#) $Id: m3uaSgpMIB.h,v 0.9.2.2 2008-12-31 16:04:42 brian Exp $

 -----------------------------------------------------------------------------

 Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation; version 3 of the License.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more
 details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>, or
 write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 -----------------------------------------------------------------------------

 Last Modified $Date: 2008-12-31 16:04:42 $ by $Author: brian $

 -----------------------------------------------------------------------------

 $Log: m3uaSgpMIB.h,v $
 Revision 0.9.2.2  2008-12-31 16:04:42  brian
 - updated mibs

 Revision 0.9.2.1  2008-12-27 10:01:52  brian
 - updated mibs and stubs

 *****************************************************************************/

#ifndef __LOCAL_M3UASGPMIB_H__
#define __LOCAL_M3UASGPMIB_H__

#ident "@(#) $RCSfile: m3uaSgpMIB.h,v $ $Name:  $($Revision: 0.9.2.2 $) Copyright (c) 2001-2008 OpenSS7 Corporation."

/*
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent.
 */
/* our storage structure(s) */
struct m3uaSgpMIB_data {
	uint m3uaSgpMIB_request;
	uint32_t m3uaSgpAgNextIndex;
	uint32_t m3uaSgpNextIndex;
};
struct m3uaSgpAgTable_data {
	uint m3uaSgpAgTable_request;
	uint m3uaSgpAgTable_refs;
	uint32_t m3uaSgpAgIndex;
	uint8_t *m3uaSgpAgName;
	int m3uaSgpAgNameLen;
	oid *m3uaSgpAgProtocolVersion;
	int m3uaSgpAgProtocolVersionLen;
	uint8_t *m3uaSgpAgOptions;
	int m3uaSgpAgOptionsLen;
	int32_t m3uaSgpAgRegistrationPolicy;
	int32_t m3uaSgpAgAspIdPolicy;
	int32_t m3uaSgpAgProtocolPayloadId;
	int32_t m3uaSgpAgIpPort;
	int32_t m3uaSgpAgMinOstreams;
	int32_t m3uaSgpAgMaxIstreams;
	int32_t m3uaSgpAgStatus;
};
struct m3uaSgpSgTable_data {
	uint m3uaSgpSgTable_request;
	uint m3uaSgpSgTable_refs;
	uint32_t m3uaSgpAgIndex;
	uint32_t m3uaSgpSgIndex;
	uint8_t *m3uaSgpSgName;
	int m3uaSgpSgNameLen;
	int32_t m3uaSgpSgStatus;
};
struct m3uaSgpAspTable_data {
	uint m3uaSgpAspTable_request;
	uint m3uaSgpAspTable_refs;
	uint32_t m3uaSgpAspIndex;
	uint8_t *m3uaSgpAspName;
	int m3uaSgpAspNameLen;
	int32_t m3uaSgpAspOperationalState;
	int32_t m3uaSgpAspUsageState;
	int32_t m3uaSgpAspAdministrativeState;
	uint8_t *m3uaSgpAspAlarmStatus;
	int m3uaSgpAspAlarmStatusLen;
	uint8_t *m3uaSgpAspProceduralStatus;
	int m3uaSgpAspProceduralStatusLen;
	uint8_t *m3uaSgpAspAvailabilityStatus;
	int m3uaSgpAspAvailabilityStatusLen;
	int32_t m3uaSgpAspAspState;
	oid *m3uaSgpAspSctpProfile;
	int m3uaSgpAspSctpProfileLen;
	oid *m3uaSgpAspSctpProfile;
	int m3uaSgpAspSctpProfileLen;
	uint32_t m3uaSgpAspMaxPathRetrans;
	int32_t m3uaSgpAspRtoMin;
	int32_t m3uaSgpAspRtoMin;
	int32_t m3uaSgpAspRtoMin;
	int32_t m3uaSgpAspMaxLifeTime;
	int32_t m3uaSgpAspTimerDivert;
	int32_t m3uaSgpAspStatus;
};
struct m3uaSgpTable_data {
	uint m3uaSgpTable_request;
	uint m3uaSgpTable_refs;
	uint32_t m3uaSgpAgIndex;
	uint32_t m3uaSgpSgIndex;
};

/* storage declarations */
extern struct m3uaSgpMIB_data *m3uaSgpMIBStorage;
extern struct header_complex_index *m3uaSgpAgTableStorage;
extern struct header_complex_index *m3uaSgpSgTableStorage;
extern struct header_complex_index *m3uaSgpAspTableStorage;
extern struct header_complex_index *m3uaSgpTableStorage;

/* enum definitions from the covered mib sections */

#define M3UASGPAGOPTIONS_ASPEXT                  0
#define M3UASGPAGOPTIONS_SGINFO                  1
#define M3UASGPAGOPTIONS_LOADSEL                 2
#define M3UASGPAGOPTIONS_LOADGRP                 3
#define M3UASGPAGOPTIONS_CORID                   4
#define M3UASGPAGOPTIONS_REGEXT                  5
#define M3UASGPAGOPTIONS_SESSID                  6
#define M3UASGPAGOPTIONS_DYNAMIC                 7
#define M3UASGPAGOPTIONS_ASPCONG                 8
#define M3UASGPAGOPTIONS_TEXTIID                 9

#define M3UASGPAGREGISTRATIONPOLICY_UNKNOWN      1
#define M3UASGPAGREGISTRATIONPOLICY_FORBIDDEN    2
#define M3UASGPAGREGISTRATIONPOLICY_PERMITTED    3
#define M3UASGPAGREGISTRATIONPOLICY_REQUIRED     4

#define M3UASGPAGASPIDPOLICY_UNKNOWN             1
#define M3UASGPAGASPIDPOLICY_PERMITTED           2
#define M3UASGPAGASPIDPOLICY_REQUIRED            3
#define M3UASGPAGASPIDPOLICY_FORBIDDEN           4

#define M3UASGPASPOPERATIONALSTATE_DISABLED      0
#define M3UASGPASPOPERATIONALSTATE_ENABLED       1

#define M3UASGPASPUSAGESTATE_IDLE                0
#define M3UASGPASPUSAGESTATE_ACTIVE              1
#define M3UASGPASPUSAGESTATE_BUSY                2

#define M3UASGPASPADMINISTRATIVESTATE_LOCKED     0
#define M3UASGPASPADMINISTRATIVESTATE_UNLOCKED   1
#define M3UASGPASPADMINISTRATIVESTATE_SHUTTINGDOWN 2

#define M3UASGPASPALARMSTATUS_UNDERREPAIR        0
#define M3UASGPASPALARMSTATUS_CRITICAL           1
#define M3UASGPASPALARMSTATUS_MAJOR              2
#define M3UASGPASPALARMSTATUS_MINOR              3
#define M3UASGPASPALARMSTATUS_ALARMOUTSTANDING   4

#define M3UASGPASPPROCEDURALSTATUS_INITIALIZATIONREQUIRED 0
#define M3UASGPASPPROCEDURALSTATUS_NOTINITIALIZED 1
#define M3UASGPASPPROCEDURALSTATUS_INITIALIZING  2
#define M3UASGPASPPROCEDURALSTATUS_REPORTING     3
#define M3UASGPASPPROCEDURALSTATUS_TERMINATING   4

#define M3UASGPASPAVAILABILITYSTATUS_INTEST      0
#define M3UASGPASPAVAILABILITYSTATUS_FAILED      1
#define M3UASGPASPAVAILABILITYSTATUS_POWEROFF    2
#define M3UASGPASPAVAILABILITYSTATUS_OFFLINE     3
#define M3UASGPASPAVAILABILITYSTATUS_OFFDUTY     4
#define M3UASGPASPAVAILABILITYSTATUS_DEPENDENCY  5
#define M3UASGPASPAVAILABILITYSTATUS_DEGRADED    6
#define M3UASGPASPAVAILABILITYSTATUS_NOTINSTALLED 7
#define M3UASGPASPAVAILABILITYSTATUS_LOGFULL     8

#define M3UASGPASPASPSTATE_DOWN                  1
#define M3UASGPASPASPSTATE_INITIALIZING          2
#define M3UASGPASPASPSTATE_TERMINATING           3
#define M3UASGPASPASPSTATE_UP                    4

/* function prototypes */
void init_m3uaSgpMIB(void);
void deinit_m3uaSgpMIB(void);
int term_m3uaSgpMIB(int majorID, int minorID, void *serverarg, void *clientarg);
FindVarMethod var_m3uaSgpMIB;
void parse_m3uaSgpMIB(const char *, char *);
SNMPCallback store_m3uaSgpMIB;
void refresh_m3uaSgpMIB(void);
FindVarMethod var_m3uaSgpAgTable;
int m3uaSgpAgTable_add(struct m3uaSgpAgTable_data *);
int m3uaSgpAgTable_del(struct m3uaSgpAgTable_data **);
void parse_m3uaSgpAgTable(const char *, char *);
SNMPCallback store_m3uaSgpAgTable;
void refresh_m3uaSgpAgTable(void);
FindVarMethod var_m3uaSgpSgTable;
int m3uaSgpSgTable_add(struct m3uaSgpSgTable_data *);
int m3uaSgpSgTable_del(struct m3uaSgpSgTable_data **);
void parse_m3uaSgpSgTable(const char *, char *);
SNMPCallback store_m3uaSgpSgTable;
void refresh_m3uaSgpSgTable(void);
FindVarMethod var_m3uaSgpAspTable;
int m3uaSgpAspTable_add(struct m3uaSgpAspTable_data *);
int m3uaSgpAspTable_del(struct m3uaSgpAspTable_data **);
void parse_m3uaSgpAspTable(const char *, char *);
SNMPCallback store_m3uaSgpAspTable;
void refresh_m3uaSgpAspTable(void);
FindVarMethod var_m3uaSgpTable;
int m3uaSgpTable_add(struct m3uaSgpTable_data *);
int m3uaSgpTable_del(struct m3uaSgpTable_data **);
void parse_m3uaSgpTable(const char *, char *);
SNMPCallback store_m3uaSgpTable;
void refresh_m3uaSgpTable(void);

WriteMethod write_m3uaSgpAgName;
WriteMethod write_m3uaSgpAgProtocolVersion;
WriteMethod write_m3uaSgpAgOptions;
WriteMethod write_m3uaSgpAgRegistrationPolicy;
WriteMethod write_m3uaSgpAgAspIdPolicy;
WriteMethod write_m3uaSgpAgProtocolPayloadId;
WriteMethod write_m3uaSgpAgIpPort;
WriteMethod write_m3uaSgpAgMinOstreams;
WriteMethod write_m3uaSgpAgMaxIstreams;
WriteMethod write_m3uaSgpAgStatus;
WriteMethod write_m3uaSgpSgName;
WriteMethod write_m3uaSgpSgStatus;
WriteMethod write_m3uaSgpAspName;
WriteMethod write_m3uaSgpAspAdministrativeState;
WriteMethod write_m3uaSgpAspAlarmStatus;
WriteMethod write_m3uaSgpAspAspState;
WriteMethod write_m3uaSgpAspSctpProfile;
WriteMethod write_m3uaSgpAspSctpProfile;
WriteMethod write_m3uaSgpAspMaxPathRetrans;
WriteMethod write_m3uaSgpAspRtoMin;
WriteMethod write_m3uaSgpAspRtoMin;
WriteMethod write_m3uaSgpAspRtoMin;
WriteMethod write_m3uaSgpAspMaxLifeTime;
WriteMethod write_m3uaSgpAspTimerDivert;
WriteMethod write_m3uaSgpAspStatus;
#endif				/* __LOCAL_M3UASGPMIB_H__ */