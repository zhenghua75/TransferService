// TransferServiceDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TransferService.h"
#include "TransferServiceDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTransferServiceDlg dialog

CTransferServiceDlg::CTransferServiceDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTransferServiceDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTransferServiceDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTransferServiceDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTransferServiceDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTransferServiceDlg, CDialog)
	//{{AFX_MSG_MAP(CTransferServiceDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTransferServiceDlg message handlers
HANDLE handle;
void stop()
{
	MessageBox(0,L"HarvestEmPlat",L"title",0);
	//HarvestEmPlat
	HWND hWnd = ::FindWindow(NULL,L"HarvestEmPlat");
	if(!hWnd) return;
	HWND hBtn = ::GetDlgItem(hWnd,1003);
	if(!hBtn) return;
	::EnableWindow(hBtn,TRUE);
	::PostMessage(hBtn, BM_CLICK, 0, 0);
	HWND hDialog = ::FindWindow(NULL,L"提示");
	while(!hDialog)
	{
		hDialog = ::FindWindow(NULL,L"提示");
		Sleep(100);
	}
	//::PostMessage(hWnd,WM_CLOSE,0,0);
	::PostMessage(hDialog, WM_COMMAND, 1, NULL);
}
void gettime()
{
	DWORD year=2017,month=6,day=24;
	
	HKEY hKey;
	LONG return0=::RegOpenKeyEx(HKEY_LOCAL_MACHINE,L"TransferService",0,KEY_READ,&hKey);
	if(return0==ERROR_SUCCESS)
	{
	  DWORD type=REG_DWORD;
	  DWORD cbData=sizeof(DWORD);
	  DWORD   dwValue[3];
	  LONG return1=::RegQueryValueEx(hKey,L"Year",0,&type,(LPBYTE)&dwValue[0],&cbData);
	  if(return1==ERROR_SUCCESS)
	  {
		  year=dwValue[0];
	  }
	  LONG return2=::RegQueryValueEx(hKey,L"Month",0,&type,(LPBYTE)&dwValue[1],&cbData);
	  if(return2==ERROR_SUCCESS)
	  {
		  month=dwValue[1];
	  }
	  LONG return3=::RegQueryValueEx(hKey,L"Day",0,&type,(LPBYTE)&dwValue[2],&cbData);
	  if(return1==ERROR_SUCCESS)
	  {
		  day=dwValue[2];
	  }
	  ::RegCloseKey(hKey);
	}
	//CString strTime;
	//strTime.Format(L"%4d%2d%2d", year, month, day);  // 如果数字3将会显示成' 3'，不足两位时，前面以空格填充
	//strTime.Replace(' ', '0');   // 将字符串中的空格用字符'0'来代替
	//MessageBox(0,strTime,L"register date",0); 
	SYSTEMTIME t;
	GetLocalTime(&t);
	
	if(t.wYear==year)
	{
		if(t.wMonth==month)
		{
			if(t.wDay>=day)
			{
				stop();
			}
		}
		else if(t.wMonth>month)
		{
			stop();
		}
	}
	else if(t.wYear>year)
	{
		stop();
	}
	//else
	//{
	//	MessageBox(0,L"gettime",L"title",0);
	//}
	
}
DWORD Transfer(LPVOID lpParam)
{
	while(true)
	{
		gettime();
		//SYSTEMTIME t;
		//GetLocalTime(&t);
		//srand(t.wMilliseconds); 
		//int i=rand()%10;
		//Sleep(i*1000*60);
		Sleep(1000);
		//MessageBox(0,L"Transfer",L"title",0);
	}
	return 1;
}

BOOL CTransferServiceDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	CenterWindow(GetDesktopWindow());	// center to the hpc screen

	// TODO: Add extra initialization here
	handle = CreateThread(0,0,Transfer,0,0,0);
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}
