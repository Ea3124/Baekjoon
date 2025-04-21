def manacher(s: str) -> int:
    # 1. Preprocessing: 사이에 # 삽입 + 양 끝에 ^와 $ 삽입 (경계 보호용)
    t = '^#' + '#'.join(s) + '#$'
    n = len(t)
    p = [0] * n  # 각 중심에서의 팰린드롬 반지름 길이 저장
    center = 0
    right = 0

    for i in range(1, n - 1):
        mirror = 2 * center - i  # 현재 위치 i의 거울 위치

        if i < right:
            p[i] = min(right - i, p[mirror])  # 기존 정보를 일부 복사

        # 팰린드롬 확장 시도
        while t[i + (1 + p[i])] == t[i - (1 + p[i])]:
            p[i] += 1

        # 현재 팰린드롬이 오른쪽 경계를 넘었으면 center, right 갱신
        if i + p[i] > right:
            center = i
            right = i + p[i]

    # 최댓값 반환 (p 배열에서 가장 큰 값)
    return max(p)

# 예시 사용
import sys
s = sys.stdin.readline().strip()
print(manacher(s))
