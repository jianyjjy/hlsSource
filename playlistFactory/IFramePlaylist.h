/*
 * IFramePlaylist.h
 *
 *  Created on: Aug 6, 2014
 *      Author: satram
 */

#ifndef IFRAMEPLAYLIST_H_
#define IFRAMEPLAYLIST_H_

#include "PlaylistInterface.h"

class IFramePlaylist : public PlaylistInterface
{

public:
	IFramePlaylist(std::string& url_path, std::string& filename);
	virtual ~IFramePlaylist();
};

#endif /* IFRAMEPLAYLIST_H_ */
