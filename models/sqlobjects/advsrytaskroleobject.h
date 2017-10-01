#ifndef ADVSRYTASKROLEOBJECT_H
#define ADVSRYTASKROLEOBJECT_H

#include <TSqlObject>
#include <QSharedData>


class T_MODEL_EXPORT AdvsryTaskRoleObject : public TSqlObject, public QSharedData
{
public:
    int advsry_task_id {0};
    int role_id {0};
    QDateTime created_at;
    QString created_by;
    QDateTime updated_at;
    QString updated_by;

    enum PropertyIndex {
        AdvsryTaskId = 0,
        RoleId,
        CreatedAt,
        CreatedBy,
        UpdatedAt,
        UpdatedBy,
    };

    QList<int> primaryKeyIndexList() const override { QList<int> pkidxList; return pkidxList<<AdvsryTaskId<<RoleId; }
    int autoValueIndex() const override { return -1; }
    QList<int> foreignKeyIndexList() const { QList<int> fkIdxList;return fkIdxList<<RoleId<<AdvsryTaskId; }
    QString tableName() const override { return QLatin1String("advsry_task_role"); }

private:    /*** Don't modify below this line ***/
    Q_OBJECT
    Q_PROPERTY(int advsry_task_id READ getadvsry_task_id WRITE setadvsry_task_id)
    T_DEFINE_PROPERTY(int, advsry_task_id)
    Q_PROPERTY(int role_id READ getrole_id WRITE setrole_id)
    T_DEFINE_PROPERTY(int, role_id)
    Q_PROPERTY(QDateTime created_at READ getcreated_at WRITE setcreated_at)
    T_DEFINE_PROPERTY(QDateTime, created_at)
    Q_PROPERTY(QString created_by READ getcreated_by WRITE setcreated_by)
    T_DEFINE_PROPERTY(QString, created_by)
    Q_PROPERTY(QDateTime updated_at READ getupdated_at WRITE setupdated_at)
    T_DEFINE_PROPERTY(QDateTime, updated_at)
    Q_PROPERTY(QString updated_by READ getupdated_by WRITE setupdated_by)
    T_DEFINE_PROPERTY(QString, updated_by)
};

#endif // ADVSRYTASKROLEOBJECT_H
