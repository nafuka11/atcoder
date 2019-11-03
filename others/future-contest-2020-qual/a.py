N = 40
M = 100
B = 300


class Robot:
    def __init__(self, inputs):
        s = inputs.split()
        self.y = int(s[0])
        self.x = int(s[1])
        self.c = s[2]

    def move(self, now_y, now_x):
        if self.c == 'U':
            now_y = (now_y - 1) % N
        if self.c == 'D':
            now_y = (now_y + 1) % N
        if self.c == 'L':
            now_x = (now_x - 1) % N
        if self.c == 'R':
            now_x = (now_x + 1) % N
        return now_y, now_x

    def can_move(self, now_y, now_x, blocks):
        # 初期位置と同じ or 進む先がブロックマス
        next_y, next_x = self.move(now_y, now_x)
        if (next_y, next_x) in blocks:
            return False
        return self.y != next_y or self.x != next_x

    def goal_direction(self, now_y, now_x, u, d, r, l, goal):
        if now_y == goal[0]:
            # now_xとgoalのrl移動量計算
            robot_r = (goal[1] - now_x) % N
            robot_l = (now_x - goal[1]) % N
            # 移動量がrlどちらかより小さい場合、方向を返す
            if robot_r <= r and robot_l <= l:
                return 'R' if r - robot_r >= robot_l - l else 'L'
            if robot_r <= r:
                return 'R'
            if robot_l <= l:
                return 'L'
        if now_x == goal[1]:
            robot_d = (goal[0] - now_y) % N
            robot_u = (now_y - goal[0]) % N
            if robot_d <= d and robot_u <= u:
                return 'D' if d - robot_d >= robot_u - u else 'U'
            if robot_d <= d:
                return 'D'
            if robot_u <= u:
                return 'U'
        return None


def get_udrl_moves(goal):
    # UDRLに移動する際、ゴール可能な最長移動量
    u = N * 2
    d = N * 2
    r = N * 2
    l = N * 2
    for block in blocks:
        if block[0] == goal[0]:
            r = min((goal[1] - block[1]) % N, r)
            l = min((block[1] - goal[1]) % N, l)
        if block[1] == goal[1]:
            d = min((goal[0] - block[0]) % N, d)
            u = min((block[0] - goal[0]) % N, u)
    return u, d, r, l


def print_result(results):
    print(len(results))
    for result in results:
        print(result[0], result[1], result[2])


def is_duplicate_result(now_y, now_x, results):
    for result in results:
        if result[0] == now_y and result[1] == now_x:
            return True
    return False

# 入力
input()
goal = [int(s) for s in input().split()]
robots = [Robot(input()) for _ in range(M)]
blocks = [[int(s) for s in input().split()] for _ in range(B)]

u, d, r, l = get_udrl_moves(goal)
results = []

# Robots毎に
for robot in robots:
    now_y = robot.y
    now_x = robot.x
    # 初期値に戻るorブロックにぶつかるまで移動
    while robot.can_move(now_y, now_x, blocks):
        # UDLR移動でゴール可能か判定
        g = robot.goal_direction(now_y, now_x, u, d, r, l, goal)
        if g:
            # 方向転換が必要かマスが重複していなければ、方向転換マス設置
            if g != robot.c and not is_duplicate_result(now_y, now_x, results):
                results.append([now_y, now_x, g])
            break
        now_y, now_x = robot.move(now_y, now_x)

print_result(results)
