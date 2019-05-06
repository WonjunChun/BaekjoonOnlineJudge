/* BOJ 16504��
 * ��������
 * N * N ũ���� ������ �� ĭ�� ���� �������
 * ���������� ���ֺ��� ������ ��ħ
 * (N = 2^m, 1<=m<=10)
 * �� ĭ �Է°� 1<=input<=100,000
 */
#include<iostream>
#include<vector>
using namespace std;

/*
vector<vector<int>> foldHorizontal(vector<vector<int>> matrix);
vector<vector<int>> foldVertical(vector<vector<int>> matrix);

int main(void) {
	//vector<vector<int>> paper;
	int inputN;
	cin >> inputN;//���μ��� ���� �Է�
	//2���� ���� ����
	vector<vector<int>> paper(inputN, vector<int>(inputN, 0));
	//int[][] paper = new int[inputN][inputN];
	for (int i = 0; i < inputN; i++) {
		for (int j = 0; j < inputN; j++) {
			cin >> paper[i][j];//�� ��Ŀ� �� �Է�
		}
	}
	//�켱 ����������� �ϹǷ�, foldVertical���� ȣ��
	vector<vector<int>> foldedPaper = foldVertical(paper);
	cout << foldedPaper[0][0];

	return 0;
}
vector<vector<int>> foldHorizontal(vector<vector<int>> matrix) {//���η� ���� �Լ�
	if (matrix.size() == 1)//�� �̻� ���η� ���� �� ������
		return matrix;//�������
	else {
		vector<vector<int>> folded((matrix.size() / 2), vector<int>(matrix[0].size(), 0));
		//���� ���� ������� ������ ���
		for (int i = 0; i < folded.size(); i++) {
			for (int j = 0; j < folded[0].size(); j++) {
				folded[i][j] = matrix[i][j] + matrix[matrix.size() - i][j];
			}
		}
		return foldVertical(folded);//�������� ȣ��
	}

}
vector<vector<int>> foldVertical(vector<vector<int>> matrix) {//���η� ���� �Լ�
	if (matrix[0].size() == 1)//���̻� ���η� ���� �� ������
		return matrix;
	else {
		vector<vector<int>> folded((matrix.size()), vector<int>((matrix[0].size() / 2), 0));
		//���� ���� ������� ������ ���
		for (int i = 0; i < folded.size(); i++) {
			for (int j = 0; j < folded[0].size(); j++) {
				folded[i][j] = matrix[i][j] + matrix[i][matrix[0].size() - j];
			}
		}
		return foldHorizontal(folded);
	}
		
}
*/
int main(void) {
	int inputN;
	cin >> inputN;//���μ��� ���� �Է�
	//2���� ���� ����
	vector<vector<int>> paper(inputN, vector<int>(inputN, 0));
	//int[][] paper = new int[inputN][inputN];
	long long sum = 0;//overflow �߻� ����
	for (int i = 0; i < inputN; i++) {
		for (int j = 0; j < inputN; j++) {
			cin >> paper[i][j];//�� ��Ŀ� �� �Է�
			sum += paper[i][j];
		}
	}
	cout << sum;
	return 0;


}