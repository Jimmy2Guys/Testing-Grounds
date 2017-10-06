// Copyright (C) 2017 JimmyTwoGuys.  All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ChooseNextWaypoint.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGGROUNDS_API UChooseNextWaypoint : public UBTTaskNode
{
	GENERATED_BODY()
	
	
/** starts this task, should return Succeeded, Failed or InProgress
*  (use FinishLatentTask() when returning InProgress)
* this function should be considered as const (don't modify state of object) if node is not instanced!
* Overridden in ChooseNextWaypoint.h by Jim*/
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	struct FBlackboardKeySelector IndexKey;
};
