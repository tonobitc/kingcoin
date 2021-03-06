// Copyright (c) 2012 The KingCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef KINGCOIN_VERSION_H
#define KINGCOIN_VERSION_H

#include "clientversion.h"
#include <string>

//
// client versioning
//

static const int CLIENT_VERSION =
                           1000000 * CLIENT_VERSION_MAJOR
                         +   10000 * CLIENT_VERSION_MINOR
                         +     100 * CLIENT_VERSION_REVISION
                         +       1 * CLIENT_VERSION_BUILD;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 66666;

static const int MIN_PROTO_VERSION = 66666;

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 6666;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 66666;
static const int NOBLKS_VERSION_END = 66666;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 66666;

// "mempool" command, enhanced "getdata" behavior starts with this version:
static const int MEMPOOL_GD_VERSION = 66666;

#define DISPLAY_VERSION_MAJOR       1
#define DISPLAY_VERSION_MINOR       2
#define DISPLAY_VERSION_REVISION    0
#define DISPLAY_VERSION_BUILD       0

#endif
