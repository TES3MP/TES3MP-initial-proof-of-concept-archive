//
// Created by koncord on 07.01.16.
//

#ifndef OPENMW_PACKETBASEINFO_HPP
#define OPENMW_PACKETBASEINFO_HPP

#include <components/openmw-mp/Packets/BasePacket.hpp>

namespace mwmp
{
    class PacketBaseInfo : public BasePacket
    {
    public:
        PacketBaseInfo(RakNet::RakPeerInterface *peer);

        virtual void Packet(RakNet::BitStream *bs, BasePlayer *player, bool send);
    };
}

#endif //OPENMW_PACKETBASEINFO_HPP
