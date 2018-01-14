// Fill out your copyright notice in the Description page of Project Settings.

#include "ACTHeroCharacter.h"
#include "StateMachine/PlayerAction/ACT/ACTPlayerActionStateAttack.h"
#include "StateMachine/PlayerAction/ACT/ACTPlayerActionStateDie.h"
#include "StateMachine/PlayerAction/ACT/ACTPlayerActionStateHurt.h"
#include "StateMachine/PlayerAction/ACT/ACTPlayerActionStateIdle.h"
#include "StateMachine/PlayerAction/ACT/ACTPlayerActionStateJump.h"
#include "StateMachine/PlayerAction/ACT/ACTPlayerActionStateRun.h"
#include "StateMachine/PlayerAction/ACT/ACTPlayerActionStateRoll.h"
#include "GameTypes.h"

void AACTHeroCharacter::Tick(float DeltaTime)
{
	ActionFSM->TickMachine();
}

AACTHeroCharacter::AACTHeroCharacter()
{
	ActionFSM = new PlayerActionFSMMachine();

	ACTPlayerActionStateIdle* Idle = new ACTPlayerActionStateIdle();
	Idle->ACTCharater = this;
	ActionFSM->RegisterState(ECharaterActionStateType::Idle, Idle);

	ACTPlayerActionStateAttack* Attack = new ACTPlayerActionStateAttack();
	Attack->ACTCharater = this;
	ActionFSM->RegisterState(ECharaterActionStateType::Attack, Attack);

	ACTPlayerActionStateRun* Run = new ACTPlayerActionStateRun();
	Run->ACTCharater = this;
	ActionFSM->RegisterState(ECharaterActionStateType::Run, Run);

	ACTPlayerActionStateRoll* Roll = new ACTPlayerActionStateRoll();
	Roll->ACTCharater = this;
	ActionFSM->RegisterState(ECharaterActionStateType::Roll, Roll);

	ACTPlayerActionStateJump* Jump = new ACTPlayerActionStateJump();
	Jump->ACTCharater = this;
	ActionFSM->RegisterState(ECharaterActionStateType::Jump, Jump);

	ACTPlayerActionStateHurt* Hurt = new ACTPlayerActionStateHurt();
	Hurt->ACTCharater = this;
	ActionFSM->RegisterState(ECharaterActionStateType::Hurt, Hurt);

	ACTPlayerActionStateDie* Die = new ACTPlayerActionStateDie();
	Die->ACTCharater = this;
	ActionFSM->RegisterState(ECharaterActionStateType::Die, Die);

	ActionFSM->InitMachine(ECharaterActionStateType::Idle);
}


void AACTHeroCharacter::Move(FVector Movement) {
	ActionFSM->CurState->Move(Movement);
}

void AACTHeroCharacter::Attack() {
	ActionFSM->CurState->Attack();
}

void AACTHeroCharacter::NormalAttack() {
	if (IsAttackSpacing)
		return;

	if (GetWorldTimerManager().IsTimerActive(AttackEndTimer)) {
		GetWorldTimerManager().ClearTimer(AttackEndTimer);
	}

	GEngine->AddOnScreenDebugMessage(30, 5.f, FColor::Red, TEXT("Attack"));
	PlayAnimMontage(CharacterAttackAnimInfo[CharacterAttackComboList[NextAttackCombNum]].CharacterAttackAnimMontage);
	
	GetWorldTimerManager().SetTimer(AttackSpacingTimer, this, &AACTHeroCharacter::RefreshAttackSpacing,
		CharacterAttackAnimInfo[CharacterAttackComboList[NextAttackCombNum]].AnimStartSpacing, false);
	GetWorldTimerManager().SetTimer(AttackComboEndTimer, this, &AACTHeroCharacter::RefreshComboAttack,
		CharacterAttackAnimInfo[CharacterAttackComboList[NextAttackCombNum]].AnimEndSpacing, false);
	GetWorldTimerManager().SetTimer(AttackDamageTimer, this, &AACTHeroCharacter::RefreshAttackDamageTime,
		CharacterAttackAnimInfo[CharacterAttackComboList[NextAttackCombNum]].AnimStartDamage +
		CharacterAttackAnimInfo[CharacterAttackComboList[NextAttackCombNum]].AnimDamageTime, false);

	GetWorldTimerManager().SetTimer(AttackEndTimer, this, &AACTHeroCharacter::AttackEnd,
		CharacterAttackAnimInfo[CharacterAttackComboList[NextAttackCombNum]].CharacterAttackAnimMontage->SequenceLength, false);

	NextAttackCombNum++;
	if (NextAttackCombNum >= CharacterAttackComboList.Num()) {
		NextAttackCombNum = 0;
	}

	IsAttackSpacing = true;
}


void AACTHeroCharacter::RefreshAttackSpacing() {
	GEngine->AddOnScreenDebugMessage(31, 5.f, FColor::Red, TEXT("Attack Reset"));
	IsAttackSpacing = false;
	GetWorldTimerManager().ClearTimer(AttackSpacingTimer);
}

void AACTHeroCharacter::RefreshComboAttack()
{
	NextAttackCombNum = 0;
}

void AACTHeroCharacter::AttackEnd()
{
	if (ActionFSM->CurStateKey == ECharaterActionStateType::Attack) {
		ActionFSM->ChangeState(ECharaterActionStateType::Idle);
	}
	GetWorldTimerManager().ClearTimer(AttackEndTimer);
}

void AACTHeroCharacter::RefreshAttackDamageTime()
{
}

void AACTHeroCharacter::Jump() {
	ActionFSM->CurState->Jump();
}

void AACTHeroCharacter::EndJump() {
	ActionFSM->CurState->EndJump();
}

void AACTHeroCharacter::Roll() {
	ActionFSM->CurState->Roll();
}

void AACTHeroCharacter::StartRoll() {
	PlayAnimMontage(CharacterRollAnimMontage);
	GetWorldTimerManager().SetTimer(AttackSpacingTimer, this, &AACTHeroCharacter::EndRoll,
		CharacterRollAnimMontage->SequenceLength, false);
}

void AACTHeroCharacter::EndRoll() {
	ActionFSM->ChangeState(ECharaterActionStateType::Idle);
}

