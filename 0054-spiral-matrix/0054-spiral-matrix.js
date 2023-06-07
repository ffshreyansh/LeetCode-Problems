/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
function spiralOrder(matrix) {
  const result = [];

  if (matrix.length === 0) {
    return result;
  }

  let topRow = 0;
  let bottomRow = matrix.length - 1;
  let leftCol = 0;
  let rightCol = matrix[0].length - 1;

  while (topRow <= bottomRow && leftCol <= rightCol) {
    for (let col = leftCol; col <= rightCol; col++) {
      result.push(matrix[topRow][col]);
    }
    topRow++;

    for (let row = topRow; row <= bottomRow; row++) {
      result.push(matrix[row][rightCol]);
    }
    rightCol--;

    if (topRow <= bottomRow && leftCol <= rightCol) {
      for (let col = rightCol; col >= leftCol; col--) {
        result.push(matrix[bottomRow][col]);
      }
      bottomRow--;

      for (let row = bottomRow; row >= topRow; row--) {
        result.push(matrix[row][leftCol]);
      }
      leftCol++;
    }
  }

  return result;
}