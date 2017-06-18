#ifndef MAP_H
#define MAP_H

#include <memory>
#include <unordered_map>
#include "frame.h"
#include "mappoint.h"

namespace slamar
{
class Map
{
public:
	typedef std::shared_ptr<Map> Ptr;
	std::unordered_map<unsigned long, MapPoint::Ptr> map_points;
	std::unordered_map<unsigned long, Frame::Ptr> keyframes;

	Map() {}

	void insertKeyFrame(Frame::Ptr frame);
	void insertMapPoint(MapPoint::Ptr map_point);
};
}
#endif // !MAP_H
