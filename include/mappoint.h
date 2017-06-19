#ifndef MAPPOINT_H
#define MAPPOINT_H

namespace slamar
{
class Frame;

class MapPoint
{
public:
	typedef shared_ptr<MapPoint> Ptr;
	unsigned long id; // ID

	MapPoint();

	// factory function
	static MapPoint::Ptr createMapPoint();
};
}

#endif // !MAPPOINT_H

