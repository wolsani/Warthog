#pragma once
class WartTransferCreate;
class TokenTransferCreate;
class LimitSwapCreate;
class LiquidityDepositCreate;
class LiquidityWithdrawalCreate;
class CancelationCreate;
class AssetCreationCreate;
template <typename... Ts>
struct TransactionCreateCombine;
using TransactionCreate = TransactionCreateCombine<WartTransferCreate, TokenTransferCreate, LimitSwapCreate, LiquidityDepositCreate, LiquidityWithdrawalCreate, CancelationCreate, AssetCreationCreate>;
