/* Copyright © 2019 Mastercard. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 =============================================================================*/

/**
 * CryptoOptions is used to determine the compatible Mastercard and
 * Visa formats for cryptograms for tokenized transactions.
 *
 * @author Amit Somani
 */
	

#import <Foundation/Foundation.h>

@interface MCSCryptoOptions : NSObject

/** card network generating the cryptogram (e.g., master, visa) **/
@property (nonatomic, copy, readwrite, nonnull) NSString *cardType;

/** support cryptogram format for the provided cardType **/
@property (nonatomic, readwrite, nonnull) NSSet<NSString *> *format;

@end
