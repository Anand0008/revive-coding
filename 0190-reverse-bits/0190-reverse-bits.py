class Solution:
    def reverseBits(self, n: int) -> int:
        
        binn = bin(n)[2::]
        binn = binn.zfill(32)
        binn = int(binn[::-1],2)
        return binn


        