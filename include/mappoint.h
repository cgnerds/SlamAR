#ifndef MAPPOINT_H
#define MAPPOINT_H

namespace slamar
{
class Frame;
class MapPoint
{
  public:
	typedef shared_ptr<MapPoint> Ptr;
	unsigned long id_;   // ID
	bool good_;          // whether a good point
	Vector3d pos_;		 // position in world
	Vector3d norm_;		 // normal of viewing direction
	Mat descriptor_;	 // descriptor for macthing

	list<Frame*> observed_frames_; // frames that can observe this point

	int observed_times_; // being observed by feature matching algo.
	int correct_times_;  // being an inliner in pose estimation

	MapPoint();
	MapPoint(long id, Vector3d position, Vector3d norm);

	// factory function
	static MapPoint::Ptr createMapPoint();
};
}

#endif // !MAPPOINT_H
