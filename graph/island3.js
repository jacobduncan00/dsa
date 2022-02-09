function isValid(map, i, j, visited) {
  return (
    i >= 0 &&
    i < map.length &&
    j >= 0 &&
    j < map[i].length &&
    map[i][j] == 1 &&
    !visited[i][j]
  );
}

function DFS(map, i, j, visited) {
  const yOptions = [-1, -1, -1, 0, 0, 1, 1, 1];
  const xOptions = [-1, 0, 1, -1, 1, -1, 0, 1];
  visited[i][j] = true;
  for (let k = 0; k < 8; k++) {
    if (isValid(map, i + yOptions[k], j + xOptions[k], visited)) {
      DFS(map, i + yOptions[k], j + xOptions[k], visited);
    }
  }
}

function countIslands(map) {
  let visited = new Array(map.length);
  for (let i = 0; i < map.length; i++) {
    visited[i] = new Array(map[i].length);
    for (let j = 0; j < map[i].length; j++) {
      visited[i][j] = false;
    }
  }

  let islandCount = 0;
  for (let i = 0; i < map.length; i++) {
    for (let j = 0; j < map[i].length; j++) {
      if (map[i][j] == 1 && !visited[i][j]) {
        DFS(map, i, j, visited);
        islandCount++;
      }
    }
  }
  return islandCount;
}

function main() {
  let map = [
    [0, 0, 1, 0, 0],
    [1, 1, 1, 0, 0],
    [1, 0, 0, 0, 1],
    [0, 0, 0, 1, 0],
    [1, 0, 0, 1, 1],
  ];
  console.log(`Num Islands: ${countIslands(map)}`);
}

main();
