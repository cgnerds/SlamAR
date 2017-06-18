#ifndef MAPPOINT_H
#define MAPPOINT_H

#include <memory>

namespace slamar
{
class Frame;

class MapPoint
{
public:
	typedef std::shared_ptr<MapPoint> Ptr;
	unsigned long id; // ID

	MapPoint();

	// factory function
	static MapPoint::Ptr createMapPoint();
};
}

#endif // !MAPPOINT_H

