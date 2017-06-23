#ifndef MAPPOINT_H
#define MAPPOINT_H

namespace slamar
{
class Frame;
class MapPoint
{
public:
	typedef shared_ptr<MapPoint> Ptr;
	unsigned long id;    // ID
	Vector3d pos;        // Position in world
	Vector3d norm;       // Normal of viewing direction
	Mat descriptor;      // Descriptor for macthing
	int observed_times;  // being observed by feature matching algo.
	int correct_times;   // being an inliner in pose estimation

	MapPoint();
	MapPoint(long id, Vector3d position, Vector3d norm);

	// factory function
	static MapPoint::Ptr createMapPoint();
};
}

#endif // !MAPPOINT_H

