/*
 @(#) src/java/javax/jain/ss7/isup/ansi/OptionalBwdCallIndAnsi.java <p>
 
 Copyright &copy; 2008-2015  Monavacon Limited <a href="http://www.monavacon.com/">&lt;http://www.monavacon.com/&gt;</a>. <br>
 Copyright &copy; 2001-2008  OpenSS7 Corporation <a href="http://www.openss7.com/">&lt;http://www.openss7.com/&gt;</a>. <br>
 Copyright &copy; 1997-2001  Brian F. G. Bidulock <a href="mailto:bidulock@openss7.org">&lt;bidulock@openss7.org&gt;</a>. <p>
 
 All Rights Reserved. <p>
 
 This program is free software: you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation, version 3 of the license. <p>
 
 This program is distributed in the hope that it will be useful, but <b>WITHOUT
 ANY WARRANTY</b>; without even the implied warranty of <b>MERCHANTABILITY</b>
 or <b>FITNESS FOR A PARTICULAR PURPOSE</b>.  See the GNU Affero General Public
 License for more details. <p>
 
 You should have received a copy of the GNU Affero General Public License along
 with this program.  If not, see
 <a href="http://www.gnu.org/licenses/">&lt;http://www.gnu.org/licenses/&gt</a>,
 or write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA. <p>
 
 <em>U.S. GOVERNMENT RESTRICTED RIGHTS</em>.  If you are licensing this
 Software on behalf of the U.S. Government ("Government"), the following
 provisions apply to you.  If the Software is supplied by the Department of
 Defense ("DoD"), it is classified as "Commercial Computer Software" under
 paragraph 252.227-7014 of the DoD Supplement to the Federal Acquisition
 Regulations ("DFARS") (or any successor regulations) and the Government is
 acquiring only the license rights granted herein (the license rights
 customarily provided to non-Government users).  If the Software is supplied to
 any unit or agency of the Government other than DoD, it is classified as
 "Restricted Computer Software" and the Government's rights in the Software are
 defined in paragraph 52.227-19 of the Federal Acquisition Regulations ("FAR")
 (or any successor regulations) or, in the cases of NASA, in paragraph
 18.52.227-86 of the NASA Supplement to the FAR (or any successor regulations). <p>
 
 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See
 <a href="http://www.openss7.com/">http://www.openss7.com/</a>
 */

package javax.jain.ss7.isup.ansi;

import javax.jain.ss7.isup.*;
import javax.jain.ss7.*;
import javax.jain.*;

/** A class representing the ANSI ISUP Optional Backward Call Indicators.
    This class provides the methods to access the ANSI only sub-fields in the optional
    bacward call indicators parameter.

    @author Monavacon Limited
    @version 1.2.2
  */
public class OptionalBwdCallIndAnsi extends OptionalBwdCallInd {
    public static final boolean CFI_NO_INDICATION = false;
    public static final boolean CFI_CALL_FORWARDING_MAY_OCCUR = true;
    public static final boolean NEDI_NO_INDICATION = false;
    public static final boolean NEDI_NETWORK_EXCESSIVE_DELAY_ENCOUNTERED = true;
    public static final boolean UNII_NO_INDICATION = false;
    public static final boolean UNII_USER_NETWORK_INTERACTION_OCCURS = true;
    /** Constructs a new ANSI OptionalBwdCallInd class, parameters with default values.  */
    public OptionalBwdCallIndAnsi() {
    }
    /** Constructs a OptionalBwdInd class from the input parameters specified.
        @param in_inbandInfoInd - The in-band information indicator, see
        OptionalBwdCallInd().
        @param in_callFwdInd - The call forwarding indicator.  <ul> <li>CFI_NO_INDICATION
        and <li>CFI_CALL_FORWARDING_MAY_OCCUR. </ul>
        @param in_nwExcessDelayInd - The network excessive delay indicator.  <ul>
        <li>NEDI_NO_INDICATION and <li>NEDI_NETWORK_EXCESSIVE_DELAY_ENCOUNTERED. </ul>
        @param in_userNwInteractionInd - The user network interaction indicatior.  <ul>
        <li>UNII_NO_INDICATION and <li>UNII_USER_NETWORK_INTERACTION_OCCURS. </ul>
      */
    public OptionalBwdCallIndAnsi(boolean in_inbandInfoInd, boolean in_callFwdInd,
            boolean in_nwExcessDelayInd, boolean in_userNwInteractionInd) {
        super(in_inbandInfoInd);
        this.setCallFwdInd(in_callFwdInd);
        this.setNetworkExcessiveDelayInd(in_nwExcessDelayInd);
        this.setUserNetworkInteractionInd(in_userNwInteractionInd);
    }
    /** Gets the Call Forwarding May Occur Indicator field of the parameter.
        @return Boolean, the call forwarding may occur flag, see OptionalBwdCallIndAnsi().
      */
    public boolean getCallFwdInd() {
        return m_callFwdInd;
    }
    /** Sets the Call Forwarding May Occur Indicator field of the parameter.
        @param aCallFwdInd - The call forwarding may occur flag values, see
        OptionalBwdCallIndAnsi().
      */
    public void setCallFwdInd(boolean aCallFwdInd) {
        m_callFwdInd = aCallFwdInd;
    }
    /** Gets the Network Excessive Delay Indicator field of the parameter.
        @return Boolean, the Network Excessive Delay Indicator, see
        OptionalBwdCallIndAnsi().
      */
    public boolean getNetworkExcessiveDelayInd() {
        return m_networkExcessiveDelayIndicator;
    }
    /** Sets the Network Excessive Delay Indicator field of the parameter.
        @param aNetworkExcessiveDelayIndicator - Boolean, the Network Excessive Delay
        Indicator, see OptionalBwdCallIndAnsi().
      */
    public void setNetworkExcessiveDelayInd(boolean aNetworkExcessiveDelayIndicator) {
        m_networkExcessiveDelayIndicator = aNetworkExcessiveDelayIndicator;
    }
    /** Gets the User Network Interaction Indicator field of the parameter.
        @return Boolean, the Use rNetwork Interaction Indicator, see
        OptionalBwdCallIndAnsi().
      */
    public boolean getUserNetworkInteractionInd() {
        return m_userNetworkInteractionIndicator;
    }
    /** Sets the User Network Interaction Indicator field of the parameter.
        @param aUserNetworkInteractionIndicator - Boolean, the User Network Interaction
        Indicatior, see OptionalBwdCallIndAnsi().
      */
    public void setUserNetworkInteractionInd(boolean aUserNetworkInteractionIndicator) {
        m_userNetworkInteractionIndicator = aUserNetworkInteractionIndicator;
    }
    /** The toString method retrieves a string containing the values of the members of the
        OptionalBwdCallIndAnsi class.
        @return A string representation of the member variables.
      */
    public java.lang.String toString() {
        StringBuffer b = new StringBuffer(512);
        b.append(super.toString());
        b.append("\njavax.jain.ss7.isup.ansi.OptionalBwdCallIndAnsi");
        b.append("\n\tm_callFwdInd: " + m_callFwdInd);
        b.append("\n\tm_networkExcessiveDelayIndicator: " + m_networkExcessiveDelayIndicator);
        b.append("\n\tm_userNetworkInteractionIndicator: " + m_userNetworkInteractionIndicator);
        return b.toString();
    }
    protected boolean m_callFwdInd;
    protected boolean m_networkExcessiveDelayIndicator;
    protected boolean m_userNetworkInteractionIndicator;
}

// vim: sw=4 et tw=72 com=srO\:/**,mb\:*,ex\:*/,srO\:/*,mb\:*,ex\:*/,b\:TRANS,\://,b\:#,\:%,\:XCOMM,n\:>,fb\:-
