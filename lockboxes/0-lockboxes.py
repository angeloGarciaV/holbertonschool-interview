#!/usr/bin/python3

"""Method that determines if all the boxes can be opened."""


def canUnlockAll(boxes):
    if len(boxes) == 0:
        return False

    keys = [0]
    for key in keys:
        for new_key in boxes[key]:
            if new_key not in keys and new_key < len(boxes):
                keys.append(new_key)
    if len(keys) == len(boxes):
        return True
    else:
        return False
