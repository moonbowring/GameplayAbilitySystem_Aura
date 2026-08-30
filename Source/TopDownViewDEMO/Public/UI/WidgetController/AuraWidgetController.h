// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "UObject/Object.h"
#include "AuraWidgetController.generated.h"

/**
 * 这个UObject是用来专门 整理 和 提供 UI组件Widget的
 */
UCLASS()
class TOPDOWNVIEWDEMO_API UAuraWidgetController : public UObject
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<APlayerController> PlayerController;//这个界面控制器知道当前玩家控制器是谁
	
	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<APlayerState> PlayerState;//知道当前玩家状态是谁 玩家的长期状态
	
	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;//知道玩家的 能力系统组件 Ability System Component 是谁
	
	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<UAttributeSet> AttributeSet;//知道玩家的属性集 Attribute Set 是谁
};
