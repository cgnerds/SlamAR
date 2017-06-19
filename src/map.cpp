#include "../include/map.h"

namespace slamar
{
	void Map::insertKeyFrame(Frame::Ptr frame)
	{
		cout << "Key frame size = " << keyframes.size() << endl;
		if (keyframes.find(frame->id) == keyframes.end())
		{
			keyframes.insert(make_pair(frame->id, frame);
		}
		else
		{
			keyframes[frame->id] = frame;
		}
	}

	void Map::insertMapPoint(MapPoint::Ptr map_point)
	{
		if (map_points.find(map_point->id) == map_points.end())
		{
			map_points.insert(make_pair(map_point->id, map_point));
		}
		else
		{
			map_points[map_point->id] = map_point;
		}
	}

}