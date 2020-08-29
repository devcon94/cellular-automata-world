using Devcon.CellularAutomata;
using Unity.Collections;
using UnityEngine;

internal class GridUtil
{
    public static readonly Cell INVALID_CELL = new Cell(-1, new AutomatonState());
    public static int GetProjectedIndex(int start, Vector2Int direction)
    {
        int length = GridConstants.GRID_LENGTH;
        int size = GridConstants.GRID_SIZE;
        int index = start;
        int x = index % size;

        int xGoal = x - direction.x;

        if (xGoal < 0 || xGoal > size - 1)
            return -1;

        index += direction.x;
        index -= direction.y * size;

        if (index < 0 || index > length - 1)
            return -1;

        return index;
    }

    public static Cell GetAdjacentCell(int start, NativeArray<Cell> cells, Vector2Int direction)
    {
        int index = GetProjectedIndex(start, direction);

        if (index == -1)
            return INVALID_CELL;

        return cells[index];
    }

    public static void UpdateAdjacentAutomaton(int start, NativeArray<Cell> cells, Vector2Int direction, AutomatonState state)
    {
        int index = GetProjectedIndex(start, direction);

        if (index == -1)
            return;

        Cell cell = cells[index];

        cell.SetState(state);

        cells[index] = cell;
    }

    public static void UpdateCell(NativeArray<Cell> cells, int index, AutomatonState state)
    {
        Cell cell = cells[index];

        cell.SetState(state);

        cells[index] = cell;
    }
}

