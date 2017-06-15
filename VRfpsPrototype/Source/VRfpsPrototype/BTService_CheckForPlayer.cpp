// Fill out your copyright notice in the Description page of Project Settings.

#include "BTService_CheckForPlayer.h"
#include "VRFPSCharacter.h"
#include "EnemyAI.h"
#include "VRfpsPrototype.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "EnemyCharacter.h"



UBTService_CheckForPlayer::UBTService_CheckForPlayer()
{
	bCreateNodeInstance = true; //in order to use on multiple AI
}

void UBTService_CheckForPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	AEnemyAI *EnemyPC = Cast<AEnemyAI>(OwnerComp.GetAIOwner());
	if (EnemyPC)
	{
		AVRFPSCharacter *Enemy = Cast<AVRFPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

		if (Enemy)
		{
			OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(EnemyPC->EnemyKeyID, Enemy);
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "ENEMY IS HERE");
		}
	}

}
