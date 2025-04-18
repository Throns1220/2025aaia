/// week09-1.cpp
/// LeetCode 38. Count and Say �Ʀr�s��X�{�A�N�Ҩ�RLE�u�s�X�v���u�Ʀr+�r���v���Φ�
/// 1���X�Ӧr��? A:��1��1 11
/// 11���X�Ӧr��? A:2��1 21
/// 21���X�Ӧr��? A:��1��2 ��1��1 1211
class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1"; // ��²�檺CASE�A�p�G��1�N�^��"1"
        string prev = countAndSay(n-1); // �禡�I�s�禡 �j���D�u�A�ݡv�p���D
        string ans="";
        char prevC = prev[0]; // �e�@�Ӧr��
        int prevN = 1; // �e�@�Ӧr���A�ֿn�X�{�X��
        for(int i=1;i<prev.length();i++){
            if(prevC == prev[i]) prevN++; // �ۦP�A�N+1
            else{ // �r�����ۦP��
                ans += string(to_string(prevN)) + prevC; // �X�{�X�� + ���Ӧr�� (���e�ֿn���r���e�X�h)
                prevC = prev[i]; // �r��
                prevN = 1; // �q1�}�l(�s���r���A��1��)
            }
        }
        ans += string(to_string(prevN)) + prevC; // �̫�@���A�]�n�e�X�h
        return ans;
    }
};
