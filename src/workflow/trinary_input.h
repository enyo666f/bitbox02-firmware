// Copyright 2019 Shift Cryptosecurity AG
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _WORKFLOW_TRINARY_INPUT_H_
#define _WORKFLOW_TRINARY_INPUT_H_

#include <compiler_util.h>

#include <stdbool.h>
#include <stddef.h>

// including null terminator. 8 is the longest bip39 word.
#define WORKFLOW_TRINARY_INPUT_MAX_WORD_LENGTH (9u)

USE_RESULT bool workflow_trinary_input_wordlist(
    const char* title,
    const char* const* wordlist,
    size_t wordlist_size,
    char* word_out);

#endif