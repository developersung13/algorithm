function solutionTS(players: string[], callings: string[]): string[] {
  const playerIndices = new Map();
  players.forEach((player, index) => {
    playerIndices.set(player, index);
  });

  for (let k = 0; k < callings.length; k++) {
    const calledPlayerIdx: number = playerIndices.get(callings[k]);
    const oldPlayer: string = players[calledPlayerIdx - 1];
    players[calledPlayerIdx - 1] = callings[k];
    players[calledPlayerIdx] = oldPlayer;

    playerIndices.set(players[calledPlayerIdx - 1], calledPlayerIdx - 1);
    playerIndices.set(players[calledPlayerIdx], calledPlayerIdx);
  }

  return players;
}
