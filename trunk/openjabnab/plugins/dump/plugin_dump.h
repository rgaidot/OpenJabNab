#ifndef _PLUGINDUMP_H_
#define _PLUGINDUMP_H_

#include <QObject>
#include <QTextStream>
#include "plugininterface.h"
#include "httprequest.h"
	
class PluginDump : public QObject, public PluginInterface
{
	Q_OBJECT
	Q_INTERFACES(PluginInterface)

public:
	PluginDump();
	virtual ~PluginDump();
	void HttpRequestBefore(HTTPRequest const&);

	void XmppBunnyMessage(QByteArray const&);
	void XmppVioletMessage(QByteArray const&);
	bool XmppVioletPacketMessage(Packet const&);
	
private:
	QTextStream dumpStream;

};

#endif
