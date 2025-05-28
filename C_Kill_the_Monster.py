import math

def can_defeat(hC, dC, hM, dM, k, w, a):
    for i in range(k + 1):
        new_damage = dC + i * w
        new_health = hC + (k - i) * a

        turns_to_kill_monster = math.ceil(hM / new_damage)
        turns_monster_can_attack = math.ceil(new_health / dM)

        if turns_to_kill_monster <= turns_monster_can_attack:
            return "YES"
    return "NO"



t = int(input())
for _ in range(t):
    hC, dC = map(int, input().split())
    hM, dM = map(int, input().split())
    k, w, a = map(int, input().split())

    print(can_defeat(hC, dC, hM, dM, k, w, a))
