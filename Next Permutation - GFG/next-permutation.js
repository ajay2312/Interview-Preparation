// { Driver Code Starts
//Initial Template for javascript

"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((string) => {
      return string.trim();
    });

  main();
});

function readLine() {
  return inputString[currentLine++];
}

/* Function to print an array */
function printArray(arr, size) {
  let i;
  let s = "";
  for (i = 0; i < size; i++) {
    s += arr[i] + " ";
  }
  console.log(s);
}

function main() {
  let t = parseInt(readLine());
  let i = 0;
  for (; i < t; i++) {
    let n = parseInt(readLine());
    let arr = new Array(n);
    let input_ar1 = readLine().split(" ").map((x) => parseInt(x));
    for (let i = 0; i < n; i++) arr[i] = input_ar1[i];
    let obj = new Solution();
    let res = obj.nextPermutation(arr,n);
    printArray(res,res.length);
  }
}// } Driver Code Ends


//User function Template for javascript

/**
 * @param {Number[]} arr
 * @param {Number} n
 * @returns {Number[]}
 */

class Solution {
    nextPermutation(arr,n){
        //code here
        let index=-1;
        for(let i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1)
        return arr.sort();
        let index1;
        for(let i=n-1;i>=0;i--){
            if(arr[i]>arr[index]){
                index1=i;
                break;
            }
        }
        let x=arr[index1];
        arr[index1]=arr[index];
        arr[index]=x;
        let i=index+1,j=n-1;
        while(i<=j){
            x=arr[i];
            arr[i]=arr[j];
            arr[j]=x;
            i++;j--;
        }
        return arr;
    }
}