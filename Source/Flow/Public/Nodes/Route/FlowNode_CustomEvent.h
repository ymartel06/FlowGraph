#pragma once

#include "Nodes/FlowNode.h"
#include "FlowNode_CustomEvent.generated.h"

/**
 * Custom Event
 */
UCLASS(meta = (DisplayName = "Custom Event"))
class FLOW_API UFlowNode_CustomEvent : public UFlowNode
{
	GENERATED_UCLASS_BODY()

	UPROPERTY()
	FName EventName;

#if WITH_EDITOR
	virtual FString GetNodeDescription() const override;
#endif
};
