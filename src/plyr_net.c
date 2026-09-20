/******************************************************************************/
// Syndicate Wars Fan Expansion, source port of the classic game from Bullfrog.
/******************************************************************************/
/** @file plyr_net.c
 *     Players network session handling during mission gameplay.
 * @par Purpose:
 *     Implement functions for maintaining and switching states of the
 *     network session during a multiplayer game.
 * @par Comment:
 *     None.
 * @author   Tomasz Lis
 * @date     11 Dec 2024 - 01 Oct 2026
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/
#include "plyr_net.h"

#include "network.h"

/******************************************************************************/

ubyte net_service_started = 0;

ubyte net_serial_uses_modem = 0;

ubyte net_host_player_no = 0;

/******************************************************************************/


void netgame_service_owned_link_reset(void)
{
    if (nsvc.I.Type != NetSvc_IPX)
    {
        if (net_serial_uses_modem)
            LbNetworkHangUp();
        LbNetworkReset();
        net_service_started = 0;
    }

}
/******************************************************************************/
