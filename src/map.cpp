#include "../include/map.h"

namespace slamar
{
	void Map::insertKeyFrame(Frame::Ptr frame)
	{
		cout << "Key frame size = " << keyframes.size() << endl;
		if (keyframes.find(frame->id_) == keyframes.end())
		{
			keyframes.insert(make_pair(frame->id_, frame));
		}
		else
		{
			keyframes[frame->id_] = frame;
		}
	}

	void Map::insertMapPoint(MapPoint::Ptr map_point)
	{
		if (map_points.find(map_point->id_) == map_points.end())
		{
			map_points.insert(make_pair(map_point->id_, map_point));
		}
		else
		{
			map_points[map_point->id_] = map_point;
		}
	}

}