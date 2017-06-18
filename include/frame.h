#ifndef FRAME_H
#define FRAME_H

namespace slamar
{
class MapPoint;
class Frame
{
public:
	typedef std::shared_ptr<Frame> Ptr;
	unsigned long id;
	double time_stamp;

public: // data members
	Frame();
	~Frame();

	// factory function
	static Frame::Ptr createFrame();
};


}
#endif // !FRAME_H
