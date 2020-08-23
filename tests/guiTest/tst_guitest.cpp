#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class guiTest : public QObject
{
    Q_OBJECT

public:
    guiTest();
    ~guiTest();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

guiTest::guiTest()
{

}

guiTest::~guiTest()
{

}

void guiTest::initTestCase()
{

}

void guiTest::cleanupTestCase()
{

}

void guiTest::test_case1()
{

}

QTEST_MAIN(guiTest)

#include "tst_guitest.moc"
