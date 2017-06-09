#pragma once

#define TryteAlphabetCorpus "9ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define TryteAlphabetLength 27
#define	MinTryteValue  -13
#define	MaxTryteValue  13
#define	SignatureSize  6561
#define	HashSize      243
#define	Depth          3

#define SignatureMessageFragmentTrinaryOffset   0
#define SignatureMessageFragmentTrinarySize     6561
#define AddressTrinaryOffset                    SignatureMessageFragmentTrinaryOffset + SignatureMessageFragmentTrinarySize
#define AddressTrinarySize                      243
#define ValueTrinaryOffset                      AddressTrinaryOffset + AddressTrinarySize
#define ValueTrinarySize                        81
#define TagTrinaryOffset                        ValueTrinaryOffset + ValueTrinarySize
#define TagTrinarySize                          81
#define TimestampTrinaryOffset                  TagTrinaryOffset + TagTrinarySize
#define TimestampTrinarySize                    27
#define CurrentIndexTrinaryOffset               TimestampTrinaryOffset + TimestampTrinarySize
#define CurrentIndexTrinarySize                 27
#define LastIndexTrinaryOffset                  CurrentIndexTrinaryOffset + CurrentIndexTrinarySize
#define LastIndexTrinarySize                    27
#define BundleTrinaryOffset                     LastIndexTrinaryOffset + LastIndexTrinarySize
#define BundleTrinarySize                       243
#define TrunkTransactionTrinaryOffset           BundleTrinaryOffset + BundleTrinarySize
#define TrunkTransactionTrinarySize             243
#define BranchTransactionTrinaryOffset          TrunkTransactionTrinaryOffset + TrunkTransactionTrinarySize
#define BranchTransactionTrinarySize            243
#define NonceTrinaryOffset                      BranchTransactionTrinaryOffset + BranchTransactionTrinarySize
#define NonceTrinarySize                        243

#define transactionTrinarySize   SignatureMessageFragmentTrinarySize + AddressTrinarySize +	ValueTrinarySize + TagTrinarySize + TimestampTrinarySize +CurrentIndexTrinarySize + LastIndexTrinarySize + BundleTrinarySize +	TrunkTransactionTrinarySize + BranchTransactionTrinarySize +	NonceTrinarySize
