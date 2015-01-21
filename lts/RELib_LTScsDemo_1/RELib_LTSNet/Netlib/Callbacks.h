/*!
* \file CallBacks.h
* \brief ʾ������������ӿ�
*
* ����Ŀ�ǻ��ڻ�������LTS֤ȯ�ӿ�C#������ʾ����������չʾLTS�����DoNet��������C#���п�����ʾ��������ʾ��LTS����ӿ�C#�ĵ��ã��ڱ�д�����Ŀʱ���Բο���
* �ɶ�����Ϣ�ṩ��Դ�����´���ɴ�http://github.com/REInfo��ȡ��
* �Ϻ�������Ϣ�Ƽ����޹�˾�ṩ֤ȯ���ڻ�����Ȩ���ֻ����г����ס����㡢 ���ҵ��Ŀͻ������Ʒ���
*
* \author wywty
* \version 1.0
* \date 2014-6-30
* 
*/
#pragma once
// LTS MA only
#ifdef __LTS_MA__

namespace RELib_LTSNative
{

	// common 
	typedef void (__stdcall *Callback_OnFrontConnected)();
	typedef void (__stdcall *Callback_OnFrontDisconnected)(int nReason);
	typedef void (__stdcall *Callback_OnHeartBeatWarning)(int nTimeLapse);

	// marketdata
	typedef void (__stdcall *Callback_OnRspSubMarketData)(CSecurityFtdcSpecificInstrumentField *pSpecificInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	typedef void (__stdcall *Callback_OnRspUnSubMarketData)(CSecurityFtdcSpecificInstrumentField *pSpecificInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	typedef void (__stdcall *Callback_OnRtnDepthMarketData)(CSecurityFtdcDepthMarketDataField *pDepthMarketData);

	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspError)(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspUserLogin)(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspUserLogout)(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspOrderInsert)(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspOrderAction)(CSecurityFtdcInputOrderActionField *pInputOrderAction,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspUserPasswordUpdate)(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspTradingAccountPasswordUpdate)(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryExchange)(CSecurityFtdcExchangeField *pExchange,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryInstrument)(CSecurityFtdcInstrumentField *pInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryInvestor)(CSecurityFtdcInvestorField *pInvestor,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryTradingCode)(CSecurityFtdcTradingCodeField *pTradingCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryTradingAccount)(CSecurityFtdcTradingAccountField *pTradingAccount,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryDepthMarketData)(CSecurityFtdcDepthMarketDataField *pDepthMarketData,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryInvestorPositionDetail)(CSecurityFtdcInvestorPositionDetailField *pInvestorPositionDetail,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryBondInterest)(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryOrder)(CSecurityFtdcOrderField *pOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryTrade)(CSecurityFtdcTradeField *pTrade,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryInvestorPosition)(CSecurityFtdcInvestorPositionField *pInvestorPosition,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRtnOrder)(CSecurityFtdcOrderField *pOrder,CSecurityFtdcOrderField *pOrder);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRtnTrade)(CSecurityFtdcTradeField *pTrade,CSecurityFtdcTradeField *pTrade);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnErrRtnOrderInsert)(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnErrRtnOrderAction)(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo);

	///////////////////////////////////////////////////////////////������ȯ��������
	///Liber�������Ӧ��
	typedef void (__stdcall *Callback_OnRspFundOutByLiber)(CSecurityFtdcInputFundTransferField *pInputFundTransfer, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///Liber�������֪ͨ
	typedef void (__stdcall *Callback_OnRtnFundOutByLiber)(CSecurityFtdcFundTransferField *pFundTransfer);

	///iber����������ر�
	typedef void (__stdcall *Callback_OnErrRtnFundOutByLiber)(CSecurityFtdcInputFundTransferField *pInputFundTransfer, CSecurityFtdcRspInfoField *pRspInfo);

	///���з������֪ͨ
	typedef void (__stdcall *Callback_OnRtnFundInByBank)(CSecurityFtdcFundTransferField *pFundTransfer);

	///�ʽ�ת�˲�ѯӦ��
	typedef void (__stdcall *Callback_OnRspQryFundTransferSerial)(CSecurityFtdcFundTransferField *pFundTransfer, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
};

#endif
