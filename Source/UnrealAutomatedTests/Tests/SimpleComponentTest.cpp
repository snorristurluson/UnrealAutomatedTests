#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"
#include "UnrealAutomatedTests/SimpleComponent.h"

constexpr int32 Flags = EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter;

IMPLEMENT_SIMPLE_AUTOMATION_TEST(DummyTest, "Tests.DummyTest", Flags);
bool DummyTest::RunTest(const FString& Parameters)
{
	// Make the test pass by returning true, or fail by returning false.
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(DoSomething, "Tests.DoSomething", Flags);
bool DoSomething::RunTest(const FString& Parameters)
{
	UWorld* World = FAutomationEditorCommonUtils::CreateNewMap();
	AActor* Actor = World->SpawnActor<AActor>();
	USimpleComponent* Comp = NewObject<USimpleComponent>(Actor);

	Comp->DoSomething();
	TestTrue("Did something", Comp->bDidSomething);

	return true;
}
