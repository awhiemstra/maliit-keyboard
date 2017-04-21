﻿#ifndef PERSIANPLUGIN_H
#define PERSIANPLUGIN_H

#include <QObject>
#include "languageplugininterface.h"
#include "westernlanguagesplugin.h"

class PersianPlugin : public WesternLanguagesPlugin
{
    Q_OBJECT
    Q_INTERFACES(LanguagePluginInterface)
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.Examples.PersianPlugin" FILE "persianplugin.json")

public:
    explicit PersianPlugin(QObject* parent = nullptr)
        : WesternLanguagesPlugin(parent)
    {
    }

    ~PersianPlugin() override = default;
};

#endif // PERSIANPLUGIN_H
