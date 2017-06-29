#ifndef MAP_H
#define MAP_H

#include "common_include.h"
#include "frame.h"
#include "mappoint.h"

namespace slamar
{
class Map
{
public:
	typedef shared_ptr<Map> Ptr;
	unordered_map<unsigned long, MapPoint::Ptr> map_points_; // all landmarks
	unordered_map<unsigned long, Frame::Ptr>    keyframes_;  // all key-frames

	Map() {}

	void insertKeyFrame(Frame::Ptr frame);
	void insertMapPoint(MapPoint::Ptr map_point);
};
}
#endif // !MAP_H
