function isValidIslandCell(map, i, j, visited) {
  return (
    i >= 0 &&
    i < map.length &&
    j >= 0 &&
    j < map[i].length &&
    map[i][j] === 1 &&
    visited[i][j] === false
  );
}

function depthFirstSearch(map, i, j, visited) {
  // Can go 8 directions from current cell
  const rowOptions = [-1, -1, -1, 0, 0, 1, 1, 1];
  const colOptions = [-1, 0, 1, -1, 1, -1, 0, 1];
  // [0, 0, 0]
  // [0, X, 0]
  // [0, 0, 0]
  visited[i][j] = true;
  for (let k = 0; k < 8; k++) {
    if (isValidIslandCell(map, i + rowOptions[k], j + colOptions[k], visited)) {
      depthFirstSearch(map, i + rowOptions[k], j + colOptions[k], visited);
    }
  }
}

function countIslands(map) {
  let visited = new Array(map.length);

  // Creating 2D visited array initially set to false
  for (let i = 0; i < map.length; i++) {
    visited[i] = new Array(map[i].length);
    for (let j = 0; j < map[i].length; j++) {
      visited[i][j] = false;
    }
  }

  let islandCount = 0;
  for (let i = 0; i < map.length; i++) {
    for (let j = 0; j < map[i].length; j++) {
      if (map[i][j] === 1 && visited[i][j] === false) {
        depthFirstSearch(map, i, j, visited);
        islandCount++;
      }
    }
  }
  return islandCount;
}

function main() {
  let map = [
    [1, 1, 0, 0, 0],
    [0, 1, 0, 0, 1],
    [1, 0, 0, 1, 1],
    [0, 0, 0, 0, 0],
    [1, 0, 1, 0, 1],
  ];
  console.log(`Num Islands: ${countIslands(map)}`);
}

main();
