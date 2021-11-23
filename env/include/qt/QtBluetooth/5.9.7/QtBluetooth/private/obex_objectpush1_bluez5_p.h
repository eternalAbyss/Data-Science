/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp org.bluez.obex.ObjectPush1.xml -p obex_objectpush1_bluez5
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OBEX_OBJECTPUSH1_BLUEZ5_H_1399989318
#define OBEX_OBJECTPUSH1_BLUEZ5_H_1399989318

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.bluez.obex.ObjectPush1
 */
class OrgBluezObexObjectPush1Interface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.bluez.obex.ObjectPush1"; }

public:
    OrgBluezObexObjectPush1Interface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgBluezObexObjectPush1Interface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QDBusObjectPath, QVariantMap> ExchangeBusinessCards(const QString &clientfile, const QString &targetfile)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(clientfile) << QVariant::fromValue(targetfile);
        return asyncCallWithArgumentList(QLatin1String("ExchangeBusinessCards"), argumentList);
    }
    inline QDBusReply<QDBusObjectPath> ExchangeBusinessCards(const QString &clientfile, const QString &targetfile, QVariantMap &properties)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(clientfile) << QVariant::fromValue(targetfile);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QLatin1String("ExchangeBusinessCards"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 2) {
            properties = qdbus_cast<QVariantMap>(reply.arguments().at(1));
        }
        return reply;
    }

    inline QDBusPendingReply<QDBusObjectPath, QVariantMap> PullBusinessCard(const QString &targetfile)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(targetfile);
        return asyncCallWithArgumentList(QLatin1String("PullBusinessCard"), argumentList);
    }
    inline QDBusReply<QDBusObjectPath> PullBusinessCard(const QString &targetfile, QVariantMap &properties)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(targetfile);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QLatin1String("PullBusinessCard"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 2) {
            properties = qdbus_cast<QVariantMap>(reply.arguments().at(1));
        }
        return reply;
    }

    inline QDBusPendingReply<QDBusObjectPath, QVariantMap> SendFile(const QString &sourcefile)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(sourcefile);
        return asyncCallWithArgumentList(QLatin1String("SendFile"), argumentList);
    }
    inline QDBusReply<QDBusObjectPath> SendFile(const QString &sourcefile, QVariantMap &properties)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(sourcefile);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QLatin1String("SendFile"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 2) {
            properties = qdbus_cast<QVariantMap>(reply.arguments().at(1));
        }
        return reply;
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace bluez {
    namespace obex {
      typedef ::OrgBluezObexObjectPush1Interface ObjectPush1;
    }
  }
}
#endif
