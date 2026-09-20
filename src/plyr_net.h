/******************************************************************************/
// Syndicate Wars Fan Expansion, source port of the classic game from Bullfrog.
/******************************************************************************/
/** @file plyr_net.h
 *     Header file for plyr_net.c.
 * @par Purpose:
 *     Players network session handling during mission gameplay.
 * @par Comment:
 *     Just a header file - #defines, typedefs, function prototypes etc.
 * @author   Tomasz Lis
 * @date     11 Dec 2024 - 01 Oct 2026
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/
#ifndef PLYR_NET_H
#define PLYR_NET_H

#include "bftypes.h"
#include "game_bstype.h"

#ifdef __cplusplus
extern "C" {
#endif
/******************************************************************************/
#pragma pack(1)

// TODO maybe this only contains one string?
struct NetPlayer2 {
  char field_0[13];
  char field_D;
  char field_E[10];
  char field_18;
};

#pragma pack()
/******************************************************************************/

extern ubyte net_service_started;

extern ubyte net_serial_uses_modem;

extern ubyte net_host_player_no;

extern struct NetPlayer2 net_players[5];
extern ubyte net_players_num;

/******************************************************************************/
TbBool netgame_service_is_multi_client_capable(void);
void netgame_service_owned_link_reset(void);

void init_net_players(void);

/******************************************************************************/
#ifdef __cplusplus
}
#endif
#endif
