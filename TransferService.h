// TransferService.h : main header file for the TRANSFERSERVICE application
//

#if !defined(AFX_TRANSFERSERVICE_H__45E5F2F7_1786_4F04_9E5B_0EA22622DB66__INCLUDED_)
#define AFX_TRANSFERSERVICE_H__45E5F2F7_1786_4F04_9E5B_0EA22622DB66__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTransferServiceApp:
// See TransferService.cpp for the implementation of this class
//

class CTransferServiceApp : public CWinApp
{
public:
	CTransferServiceApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTransferServiceApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTransferServiceApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft eMbedded Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRANSFERSERVICE_H__45E5F2F7_1786_4F04_9E5B_0EA22622DB66__INCLUDED_)
