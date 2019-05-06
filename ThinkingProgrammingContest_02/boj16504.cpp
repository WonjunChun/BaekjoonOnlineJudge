/* BOJ 16504번
 * 종이접기
 * N * N 크기의 색종이 각 칸에 숫자 적어놓고
 * 접을때마다 마주보는 수들을 합침
 * (N = 2^m, 1<=m<=10)
 * 각 칸 입력값 1<=input<=100,000
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
	cin >> inputN;//가로세로 길이 입력
	//2차원 벡터 선언
	vector<vector<int>> paper(inputN, vector<int>(inputN, 0));
	//int[][] paper = new int[inputN][inputN];
	for (int i = 0; i < inputN; i++) {
		for (int j = 0; j < inputN; j++) {
			cin >> paper[i][j];//각 행렬에 값 입력
		}
	}
	//우선 세로접기부터 하므로, foldVertical부터 호출
	vector<vector<int>> foldedPaper = foldVertical(paper);
	cout << foldedPaper[0][0];

	return 0;
}
vector<vector<int>> foldHorizontal(vector<vector<int>> matrix) {//가로로 접는 함수
	if (matrix.size() == 1)//더 이상 가로로 접을 수 없으면
		return matrix;//종료시점
	else {
		vector<vector<int>> folded((matrix.size() / 2), vector<int>(matrix[0].size(), 0));
		//접은 후의 결과값을 저장할 행렬
		for (int i = 0; i < folded.size(); i++) {
			for (int j = 0; j < folded[0].size(); j++) {
				folded[i][j] = matrix[i][j] + matrix[matrix.size() - i][j];
			}
		}
		return foldVertical(folded);//세로접기 호출
	}

}
vector<vector<int>> foldVertical(vector<vector<int>> matrix) {//세로로 접는 함수
	if (matrix[0].size() == 1)//더이상 세로로 접을 수 없으면
		return matrix;
	else {
		vector<vector<int>> folded((matrix.size()), vector<int>((matrix[0].size() / 2), 0));
		//접은 후의 결과값을 저장할 행렬
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
	cin >> inputN;//가로세로 길이 입력
	//2차원 벡터 선언
	vector<vector<int>> paper(inputN, vector<int>(inputN, 0));
	//int[][] paper = new int[inputN][inputN];
	long long sum = 0;//overflow 발생 가능
	for (int i = 0; i < inputN; i++) {
		for (int j = 0; j < inputN; j++) {
			cin >> paper[i][j];//각 행렬에 값 입력
			sum += paper[i][j];
		}
	}
	cout << sum;
	return 0;


}