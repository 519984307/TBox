#ifndef COMMANDLINETOOL_GLOBAL_H
#define COMMANDLINETOOL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(COMMANDLINETOOL_LIBRARY)
#  define COMMANDLINETOOL_EXPORT Q_DECL_EXPORT
#else
#  define COMMANDLINETOOL_EXPORT Q_DECL_IMPORT
#endif

#endif // COMMANDLINETOOL_GLOBAL_H
