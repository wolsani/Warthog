#pragma once
#include "block/body/labels.hpp"
#include "general/base_elements_fwd.hpp"
#include "general/structured_reader_fwd.hpp"
namespace block {
namespace body {

template <typename... Ts>
struct Combined;
template <typename... Ts>
struct SignedCombined;
template <StaticString tag, typename... Ts>
using TaggedSignedCombined = Tag<tag, SignedCombined<Ts...>>;

using Reward = Combined<ToAccIdEl, WartEl>;
using WartTransfer = TaggedSignedCombined<::block::labels::wartTransfer, ToAccIdEl, WartEl>;
using AssetTransfer = TaggedSignedCombined<::block::labels::assetTransfer, ToAccIdEl, NonzeroAmountEl>;
using LiquidityTransfer = TaggedSignedCombined<::block::labels::liquidityTransfer, ToAccIdEl, NonzeroSharesEl>;
using AssetCreation = TaggedSignedCombined<::block::labels::assetCreation, AssetSupplyEl, AssetNameEl>;
using Order = TaggedSignedCombined<::block::labels::limitSwap, BuyEl, NonzeroAmountEl, LimitPriceEl>;
struct CancelationBase;
using Cancelation = Tag<::block::labels::cancelation, CancelationBase>;
using LiquidityDeposit = TaggedSignedCombined<::block::labels::liquidityDeposit, BaseEl, QuoteEl>;
using LiquidityWithdrawal = TaggedSignedCombined<"liquidityWithdrawal", NonzeroAmountEl>;
}
}
