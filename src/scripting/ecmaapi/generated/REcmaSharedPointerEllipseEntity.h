// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASHAREDPOINTERELLIPSEENTITY_H
        #define RECMASHAREDPOINTERELLIPSEENTITY_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "REllipseEntity.h"
            
            typedef QSharedPointer<REllipseEntity> REllipseEntityPointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaSharedPointerEllipseEntity {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMajorPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMajorRadius
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinorRadius
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRatio
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRatio
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartParam
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStartParam
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndParam
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEndParam
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isReversed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setReversed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isFullEllipse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        reverse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getParamTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTrimEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSweep
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static REllipseEntity* getSelf(const QString& fName, QScriptContext* context)
    ;static REllipseEntity* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    