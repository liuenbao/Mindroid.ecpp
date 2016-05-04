/*
 * Copyright (C) 2011 Daniel Himmelein
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MINDROID_CONDITION_H_
#define MINDROID_CONDITION_H_

#include <stdint.h>
#include <cmsis_os.h>
#include "mindroid/lang/Object.h"
#include "mindroid/util/concurrent/Semaphore.h"

namespace mindroid {

class Lock;

class Condition {
public:
	Condition();
	void await();
	void await(uint32_t timeout);
	void signal();
	void signalAll();

private:
	Semaphore mSemaphore;

	NO_COPY_CONSTRUCTOR_AND_ASSIGNMENT_OPERATOR(Condition)
};

} /* namespace mindroid */

#endif /* MINDROID_CONDITION_H_ */
