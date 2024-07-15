## My Algorithm workspace ⁽⁽◝( ˙ ꒳ ˙ )◜⁾⁾

### JavaScript Feature
- **`forEach` 메서드**
> `forEach` 메서드는 JavaScript에서 배열의 각 요소에 대해 한 번씩 제공된 함수를 실행하는 배열 메서드입니다.
> #### Code
> ```javascript
> const fruits = ['apple', 'banana', 'cherry'];
> 
> // 배열의 각 요소와 인덱스 값을 출력
> fruits.forEach((fruit, index) => {
>   console.log(`Element at index ${index} is ${fruit}`);
> });
> ```
> #### Output
> ```javascript
> Element at index 0 is apple
> Element at index 1 is banana
> Element at index 2 is cherry
> ```
<br />

- **`reduce`** 메서드
> `reduce` 메서드는 JavaScript의 배열 메서드 중 하나로, 배열의 각 요소에 대해 주어진 리듀서 함수를 실행하여 단일 결괏값을 생성합니다. 이 메서드는 배열의 모든 요소를 하나의 값으로 결합할 때 유용합니다.
> ### Syntax
> ```javascript
> array.reduce(reducerFunction, initialValue);
> ```
> - `reducerFunction`: 배열의 각 요소에 대해 실행할 함수. 이 함수는 네 개의 인수를 가집니다
>   - `accumulator` (누산기): 이전 함수 호출의 반환 값이 저장됩니다.
>   - `currentValue` (현재 값): 현재 처리되고 있는 배열 요소의 값입니다.
>   - `currentIndex` (현재 인덱스) (선택 사항): 현재 처리되고 있는 배열 요소의 인덱스입니다.
>   - `array` (배열) (선택 사항): reduce를 호출한 배열 자체입니다.
> - `initialValue`: (선택 사항) 누산기의 초기값. 초기값이 제공되지 않으면, 배열의 첫 번째 요소가 초기값으로 사용되고, 두 번째 요소부터 연산이 시작됩니다.
> #### Code #1
> ```javascript
> const numbers = [1, 2, 3, 4, 5];
> 
> const sum = numbers.reduce((accumulator, currentValue) => {
>   return accumulator + currentValue;
> }, 0);
> 
> console.log(sum); // 15
> ```
> #### Code #2
> ```javascript
> const numbers = [1, 2, 3, 4, 5];
> 
> const sum = numbers.reduce((accumulator, currentValue) => {
>   return accumulator + currentValue;
> });
> 
> console.log(sum); // 15
> ```
> - `initialValue` 생략 시 배열의 첫 번째 요소를 초깃값을 사용하고, 두 번째 요소부터 리듀서 함수를 적용합니다.

<br />

- **`map`** 메서드
> `map` 메서드는 JavaScript 배열 메서드 중 하나로, 배열의 각 요소에 대해 제공된 함수를 호출한 결과를 모아 새로운 배열을 생성합니다. 이 메서드는 원본 배열을 변경하지 않고, 새로운 배열을 반환하는 점이 특징입니다.
> ### Syntax
> ```javascript
> array.map(callback(currentValue[, index[, array]])[, thisArg])
> ```
> - `callback`: 배열의 각 요소에 대해 실행할 함수. 세 가지 인수를 가집니다:
>   - `currentValue` (필수): 현재 처리되고 있는 배열 요소의 값.
>   - `index` (선택): 현재 처리되고 있는 배열 요소의 인덱스.
>   - `array` (선택): map 메서드를 호출한 배열 자체.
> - thisArg (선택): callback 함수 내부에서 사용할 this 값.
> ### `map` Code 
> ```javascript
> const numbers = [1, 2, 3, 4, 5];
> 
> const doubled = numbers.map(number => number * 2);
> 
> console.log(doubled); // [2, 4, 6, 8, 10]
> ```
> ### `forEach` Code
> ```javascript
> const numbers = [1, 2, 3, 4, 5];
> const doubled = [];
>
> numbers.forEach(number => doubled.push(number * 2));
>
> console.log(doubled); // [2, 4, 6, 8, 10]
> ```
> #### map 메서드와 forEach 메서드 비교
> - `map`: 배열의 각 요소를 변환하여 새로운 배열을 반환합니다.
> - `forEach`: 배열의 각 요소에 대해 주어진 함수를 실행하지만, 새로운 배열을 반환하지 않습니다.