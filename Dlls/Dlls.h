﻿// Dlls.h: Dlls DLL 的主标头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含 'pch.h' 以生成 PCH"
#endif

#include "resource.h"		// 主符号
#include "CWndMain.h"

// CDllsApp
// 有关此类实现的信息，请参阅 Dlls.cpp
//

class CDllsApp : public CWinApp
{
public:
	CDllsApp();

// 重写
public:
	CWndMain* wndMain;
	virtual BOOL InitInstance();
	virtual int  ExitInstance();
	DECLARE_MESSAGE_MAP()
};
