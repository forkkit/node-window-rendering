/******************************************************************************
    Copyright (C) 2016-2019 by Streamlabs (General Workings Inc)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

******************************************************************************/

#ifndef __WINDOW_OBJC_INTERFACE_H__
#define __WINDOW_OBJC_INTERFACE_H__


#include <stdint.h>

class WindowObjCInt
{
public:
    WindowObjCInt(void);
    ~WindowObjCInt(void);

    void init(void);
    void createWindow(unsigned char* handle);
    void destroyWindow(void);
    void connectIOSurfaceJS(uint32_t surfaceID);
    void destroyIOSurface(void);
    void moveWindow(uint32_t cx, uint32_t cy);

private:
    void * self;
};

#endif