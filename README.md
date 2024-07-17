## My Algorithm workspace ⁽⁽◝( ˙ ꒳ ˙ )◜⁾⁾

### JavaScript Feature

- **`forEach` 메서드**

  > `forEach` 메서드는 JavaScript에서 배열의 각 요소에 대해 한 번씩 제공된 함수를 실행하는 배열 메서드입니다.
  >
  > #### Code
  >
  > ```javascript
  > const fruits = ['apple', 'banana', 'cherry'];
  >
  > // 배열의 각 요소와 인덱스 값을 출력
  > fruits.forEach((fruit, index) => {
  >   console.log(`Element at index ${index} is ${fruit}`);
  > });
  > ```
  >
  > #### Output
  >
  > ```javascript
  > Element at index 0 is apple
  > Element at index 1 is banana
  > Element at index 2 is cherry
  > ```

<br />

- **`reduce`** 메서드

  > `reduce` 메서드는 JavaScript의 배열 메서드 중 하나로, 배열의 각 요소에 대해 주어진 리듀서 함수를 실행하여 단일 결괏값을 생성합니다. 이 메서드는 배열의 모든 요소를 하나의 값으로 결합할 때 유용합니다.
  >
  > ### Syntax
  >
  > ```javascript
  > array.reduce(reducerFunction, initialValue);
  > ```
  >
  > - `reducerFunction`: 배열의 각 요소에 대해 실행할 함수. 이 함수는 네 개의 인수를 가집니다
  >   - `accumulator` (누산기): 이전 함수 호출의 반환 값이 저장됩니다.
  >   - `currentValue` (현재 값): 현재 처리되고 있는 배열 요소의 값입니다.
  >   - `currentIndex` (현재 인덱스) (선택 사항): 현재 처리되고 있는 배열 요소의 인덱스입니다.
  >   - `array` (배열) (선택 사항): reduce를 호출한 배열 자체입니다.
  > - `initialValue`: (선택 사항) 누산기의 초기값. 초기값이 제공되지 않으면, 배열의 첫 번째 요소가 초기값으로 사용되고, 두 번째 요소부터 연산이 시작됩니다.
  >
  > #### Code #1
  >
  > ```javascript
  > const numbers = [1, 2, 3, 4, 5];
  >
  > const sum = numbers.reduce((accumulator, currentValue) => {
  >   return accumulator + currentValue;
  > }, 0);
  >
  > console.log(sum); // 15
  > ```
  >
  > #### Code #2
  >
  > ```javascript
  > const numbers = [1, 2, 3, 4, 5];
  >
  > const sum = numbers.reduce((accumulator, currentValue) => {
  >   return accumulator + currentValue;
  > });
  >
  > console.log(sum); // 15
  > ```
  >
  > - `initialValue` 생략 시 배열의 첫 번째 요소를 초깃값을 사용하고, 두 번째 요소부터 리듀서 함수를 적용합니다.

<br />

- **`map`** 메서드

  > `map` 메서드는 JavaScript 배열 메서드 중 하나로, 배열의 각 요소에 대해 제공된 함수를 호출한 결과를 모아 새로운 배열을 생성합니다. 이 메서드는 원본 배열을 변경하지 않고, 새로운 배열을 반환하는 점이 특징입니다.
  >
  > ### Syntax
  >
  > ```javascript
  > array.map(callback(currentValue[, index[, array]])[, thisArg])
  > ```
  >
  > - `callback`: 배열의 각 요소에 대해 실행할 함수. 세 가지 인수를 가집니다:
  >   - `currentValue` (필수): 현재 처리되고 있는 배열 요소의 값.
  >   - `index` (선택): 현재 처리되고 있는 배열 요소의 인덱스.
  >   - `array` (선택): map 메서드를 호출한 배열 자체.
  > - thisArg (선택): callback 함수 내부에서 사용할 this 값.
  >
  > ### `map` Code
  >
  > ```javascript
  > const numbers = [1, 2, 3, 4, 5];
  >
  > const doubled = numbers.map((number) => number * 2);
  >
  > console.log(doubled); // [2, 4, 6, 8, 10]
  > ```
  >
  > ### `forEach` Code
  >
  > ```javascript
  > const numbers = [1, 2, 3, 4, 5];
  > const doubled = [];
  >
  > numbers.forEach((number) => doubled.push(number * 2));
  >
  > console.log(doubled); // [2, 4, 6, 8, 10]
  > ```
  >
  > #### map 메서드와 forEach 메서드 비교
  >
  > - `map`: 배열의 각 요소를 변환하여 새로운 배열을 반환합니다.
  > - `forEach`: 배열의 각 요소에 대해 주어진 함수를 실행하지만, 새로운 배열을 반환하지 않습니다.

<br />

- **`push`** 메서드

  > 배열의 끝에 하나 이상의 요소를 추가하고, 배열의 새로운 길이를 반환합니다.
  >
  > ### Code
  >
  > ```javascript
  > const arr = [1, 2, 3];
  > const length = arr.push(4);
  >
  > console.log(arr); // [1, 2, 3, 4]
  > console.log(length); // 4
  > ```

<br />

- **`pop`** 메서드

  > 배열의 마지막 요소를 제거하고, 그 요소를 반환합니다.
  >
  > ```javascript
  > const arr = [1, 2, 3];
  > const last = arr.pop();
  >
  > console.log(arr); // [1, 2]
  > console.log(last); // 3
  > ```

<br />

- **`shift`** 메서드

  > 배열의 첫 번째 요소를 제거하고, 그 요소를 반환합니다.
  >
  > ### Code
  >
  > ```javascript
  > const arr = [1, 2, 3];
  > const first = arr.shift();
  >
  > console.log(arr); // [2, 3]
  > console.log(first); // 1
  > ```

<br />

- **`unshift`** 메서드

  > 배열의 앞에 하나 이상의 요소를 추가하고, 배열의 길이를 반환합니다.
  >
  > ### Code
  >
  > ```javascript
  > const arr = [1, 2, 3];
  > const length = arr.unshift(0);
  >
  > console.log(arr); // [0, 1, 2, 3]
  > console.log(length); // 4
  > ```

<br />

- **`slice`** 메서드

  > 배열이나 문자열의 일부분을 추출하여 새로운 배열이나 문자열을 반환하는 데 사용됩니다. 원본 배열이나 문자열은 변경되지 않습니다.
  >
  > ### Code
  >
  > ```javascript
  > const fruits = ['apple', 'banana', 'cherry', 'date', 'elderberry'];
  >
  > const sliced = fruits.slice(1, 3);
  > console.log(sliced); // ['banana', 'cherry']
  > console.log(fruits); // ['apple', 'banana', 'cherry', 'date', 'elderberry'] (원본 배열은 변경되지 않음)
  > ```

<br />

- **`split`** 메서드

  > 문자열을 부분 문자열로 나눕니다.
  >
  > ### Code
  >
  > ```javascript
  > const str = 'hello world';
  > const words = str.split(' ');
  > console.log(words); // ['hello', 'world']
  > ```

  <br />

- **`splice`** 메서드

  > 배열의 기존 요소를 제거 또는 교체하거나 추가하여 배열의 내용을 변경합니다.
  >
  > ### Code
  >
  > ```javascript
  > const arr = [1, 2, 3, 4, 5];
  > arr.splice(2, 1, 'a', 'b'); // 2번째 인덱스부터 1개 요소 제거, 'a'와 'b' 추가
  > console.log(arr); // [1, 2, 'a', 'b', 4, 5]
  > ```

  <br />

- **`replace`** 메서드

  > 문자열의 일부를 다른 문자열로 대체합니다.
  >
  > ### Code
  >
  > ```javascript
  > const str = 'hello world';
  > const newStr = str.replace('world', 'JavaScript');
  > console.log(newStr); // 'hello JavaScript'
  > ```

<br />

- **`filter`** 메서드

  > 주어진 함수의 테스트를 통과하는 모든 요소를 모아 새로운 배열을 생성합니다.
  >
  > ### Code
  >
  > ```javascript
  > const numbers = [1, 2, 3, 4, 5];
  > const even = numbers.filter((x) => x % 2 === 0);
  > console.log(even); // [2, 4]
  > ```

<br />

- **`some`** 메서드

  > 배열의 일부 요소가 조건을 만족하는지 확인합니다.
  >
  > ### Code
  >
  > ```javascript
  > const numbers = [1, 2, 3, 4, 5];
  > const hasEven = numbers.some((num) => num % 2 === 0);
  > console.log(hasEven); // true
  > ```

  <br />

- **`every`** 메서드

  > 배열의 모든 요소가 조건을 만족하는지 확인합니다.
  >
  > ### Code
  >
  > ```javascript
  > const numbers = [2, 4, 6];
  > const allEven = numbers.every((num) => num % 2 === 0);
  > console.log(allEven); // true
  > ```

  <br />

- **`find`** 메서드

  > 주어진 함수의 테스트를 통과하는 첫 번째 요소의 값을 반환합니다. 그렇지 않으면 `undefined`를 반환합니다.
  >
  > ### Code
  >
  > ```javascript
  > const numbers = [1, 2, 3, 4, 5];
  > const found = numbers.find((x) => x > 3);
  > console.log(found); // 4
  > ```

<br />

- **`findIndex`** 메서드

  > 주어진 함수의 테스트를 통과하는 첫 번째 요소의 인덱스를 반환합니다. 그렇지 않으면 -1을 반환합니다.
  >
  > ### Code
  >
  > ```javascript
  > const numbers = [1, 2, 3, 4, 5];
  > const index = numbers.findIndex((x) => x > 3);
  > console.log(index); // 3
  > ```

<br />

- **`includes`** 메서드

  > - 배열이 특정 요소를 포함하고 있는지를 판별합니다.
  > - 문자열에 특정 부분 문자열이 포함되어 있는지 확인합니다.
  >
  > ### Code #1
  >
  > ```javascript
  > const numbers = [1, 2, 3];
  > console.log(numbers.includes(2)); // true
  > console.log(numbers.includes(4)); // false
  > ```
  >
  > ### Code #2
  >
  > ```javascript
  > const str = 'hello world';
  > const hasHello = str.includes('hello');
  > console.log(hasHello); // true
  > ```

<br />

- **`indexOf`** 메서드

  > 배열에서 특정 요소를 검색하여 첫 번째로 발견된 인덱스를 반환합니다. 요소가 존재하지 않으면 -1을 반환합니다.
  >
  > ### Code
  >
  > ```javascript
  > const numbers = [1, 2, 3];
  > console.log(numbers.indexOf(2)); // 1
  > console.log(numbers.indexOf(4)); // -1
  > ```

<br />

- **`lastIndexOf`** 메서드

  > 배열에서 특정 요소를 검색하여 마지막으로 발견된 인덱스를 반환합니다. 요소가 존재하지 않으면 -1을 반환합니다.
  >
  > ### Code
  >
  > ```javascript
  > const numbers = [1, 2, 3, 2, 1];
  > console.log(numbers.lastIndexOf(2)); // 3
  > console.log(numbers.lastIndexOf(4)); // -1
  > ```

<br />

- **`sort`** 메서드

  > 배열의 요소를 정렬하고 배열 자체를 반환합니다.
  >
  > ### Code #1
  >
  > ```javascript
  > const fruits = ['banana', 'apple', 'cherry'];
  > fruits.sort();
  > console.log(fruits); // ['apple', 'banana', 'cherry']
  > ```
  >
  > ### Code #2
  >
  > ```javascript
  > const numbers = [4, 2, 5, 1, 3];
  > numbers.sort((a, b) => a - b); // 오름차순 정렬
  > console.log(numbers); // [1, 2, 3, 4, 5]
  >
  > numbers.sort((a, b) => b - a); // 내림차순 정렬
  > console.log(numbers); // [5, 4, 3, 2, 1]
  > ```

<br />

- **`reverse`** 메서드

  > 배열의 요소 순서를 반전하고 배열 자체를 반환합니다.
  >
  > ### Code
  >
  > ```javascript
  > const numbers = [1, 2, 3];
  > numbers.reverse();
  > console.log(numbers); // [3, 2, 1]
  > ```

<br />

- **`concat`** 메서드

  > 기존 배열에 다른 배열이나 값들을 합쳐서 새로운 배열을 반환합니다.
  >
  > ### Code
  >
  > ```javascript
  > const array1 = [1, 2, 3];
  > const array2 = [4, 5, 6];
  > const newArray = array1.concat(array2);
  > console.log(newArray); // [1, 2, 3, 4, 5, 6]
  > ```

<br />

- **`join`** 메서드

  > 배열의 모든 요소를 문자열로 결합하여 하나의 문자열을 반환합니다.
  >
  > ### Code
  >
  > ```javascript
  > const elements = ['Fire', 'Air', 'Water'];
  > const result = elements.join(', ');
  > console.log(result); // 'Fire, Air, Water'
  > ```

<br />

- **`flat`** 메서드

  > 배열의 모든 하위 배열 요소를 지정한 깊이까지 재귀적으로 이어붙인 새로운 배열을 생성합니다.
  >
  > ### Code
  >
  > ```javascript
  > const arr = [1, 2, [3, 4, [5, 6]]];
  > const flattened = arr.flat(2);
  > console.log(flattened); // [1, 2, 3, 4, 5, 6]
  > ```

<br />

- **`flatMap`** 메서드

  > 각 배열 요소에 대해 주어진 함수 `callback`을 호출한 결과를 새로운 배열로 반환합니다. 결과 배열은 깊이 1로 평탄화됩니다.
  >
  > ### Code
  >
  > ```javascript
  > const arr = [1, 2, 3, 4];
  > const flatMapped = arr.flatMap((x) => [x * 2]);
  > console.log(flatMapped); // [2, 4, 6, 8]
  > ```

<br />

- **`max`** 메서드

  > 배열의 최댓값을 찾기 위해 `Math.max`를 사용할 수 있습니다.
  >
  > ### Code
  >
  > ```javascript
  > const numbers = [1, 2, 3, 4, 5];
  >
  > // 방법 1: apply 메서드 사용
  > const max1 = Math.max.apply(null, numbers);
  > console.log(max1); // 5
  >
  > // 방법 2: spread 연산자 사용
  > const max2 = Math.max(...numbers);
  > console.log(max2); // 5
  > ```

<br />

- **`min`** 메서드

  > 배열의 최솟값을 찾기 위해 `Math.min`를 사용할 수 있습니다.
  >
  > ### Code
  >
  > ```javascript
  > const numbers = [1, 2, 3, 4, 5];
  >
  > // 방법 1: apply 메서드 사용
  > const min1 = Math.min.apply(null, numbers);
  > console.log(min1); // 1
  >
  > // 방법 2: spread 연산자 사용
  > const min2 = Math.min(...numbers);
  > console.log(min2); // 1
  > ```

- **`floor`** 메서드

  > 소수점 이하를 버림합니다.
  >
  > ### Code
  >
  > ```javascript
  > const num = Math.floor(4.7);
  > console.log(num); // 4
  > ```

<br />

- **`ceil`** 메서드

  > 소수점 이하를 올림합니다.
  >
  > ### Code
  >
  > ```javascript
  > const num = Math.ceil(4.1);
  > console.log(num); // 5
  > ```

<br />

- **`round`** 메서드

  > 소수점 이하를 반올림합니다.
  >
  > ### Code
  >
  > ```javascript
  > const num = Math.round(4.5);
  > console.log(num); // 5
  > ```

<br />

- **`Set`** 객체

  > 고유한 값을 저장할 수 있는 자료 구조입니다. 배열과는 달리 Set은 중복된 값을 허용하지 않으며, 삽입 순서대로 요소를 저장합니다.
  >
  > ### Code
  >
  > ```javascript
  > const numbers = [1, 2, 2, 3, 4, 4, 5];
  > const uniqueNumbers = [...new Set(numbers)];
  > console.log(uniqueNumbers); // [1, 2, 3, 4, 5]
  > ```

<br />

- **`map`** 객체

> `키-값` 쌍의 컬렉션을 저장하는 객체입니다. Map 객체는 키와 값 모두 어떤 타입도 가능하며, 키의 삽입 순서를 유지합니다.
>
> ### 주요 특징:
>
> - **유일한 키**: Map의 각 키는 고유해야 합니다. 모든 값(객체 및 원시 값 모두)이 키 또는 값으로 사용될 수 있습니다.
> - **순서 유지**: Map 객체는 요소를 삽입된 순서대로 반복합니다.
> - **크기 속성**: Map 객체의 키-값 쌍의 수를 반환합니다.
> - **메서드**: set, get, has, delete, clear와 같은 메서드를 제공합니다.

<br />
