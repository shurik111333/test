#include <QString>
#include <QtTest>

class Test1Test : public QObject
{
	Q_OBJECT

public:
	Test1Test();

private Q_SLOTS:
	void testCase1();
};

Test1Test::Test1Test()
{
}

void Test1Test::testCase1()
{
	QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(Test1Test)

#include "tst_test1test.moc"
