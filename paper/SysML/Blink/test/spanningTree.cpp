#include<bits/stdc++.h>

using namespace std;

class spanningTreeNum {
private:
    int V = 0;  // ������
    vector<vector<int> > c; // ��ʽ����c=d-A
public:
    spanningTreeNum(int V)
    {
        this->V = V;
        c = vector<vector<int> >(V, vector<int>(V, 0));  //��ʼ����ά����cΪ0
    }
    void addEdge(int u, int v);  // u��v֮���һ����
    int getTreeNum();
    int det(vector<vector<float> > A);  // ������ʽA��ֵ
    void showC();
};

void spanningTreeNum::addEdge(int u, int v) {
    c[u][u]++;  // ���������һ
    c[v][v]++;
    c[u][v] = -1;  // ��ʾ����u��v֮����һ���ߣ���Ϊc=d-A������Ϊ-1
    c[v][u] = -1;
}

int spanningTreeNum::det(vector<vector<float> > A) {
    /*
     * ˼·�ǽ����ó��ȱ任Aת��Ϊ�����Ǿ��������Խ���Ԫ�س˻���Ϊ����ʽֵ
     */
    float res = 1;
    int iter = 0;  // ��¼��������
    for (int i = 0; i < A.size(); ++i) {
        if(A[i][i]==0)
        {
            for (int j = i; j < A.size(); ++j) {
                if(A[j][i]!=0) {
                    swap(A[i], A[j]);
                    iter++;
                }
            }
        }
        for (int j = i+1; j < A.size(); ++j) {
            float temp = -A[j][i]/A[i][i];
            for (int k = 0; k < A[j].size(); ++k) {
                A[j][k] = A[i][k]*temp+A[j][k];
            }
        }
    }
    for (int i = 0; i < A.size(); ++i) {
        res *= A[i][i];
    }
    if(iter%2==1) res = -res;
    return (int)res;
}
int spanningTreeNum::getTreeNum() {
    // ������ʽ
    vector<vector<float > > temp(V-1, vector<float >(V-1, 0));
    for (int i = 1; i < V; ++i) {
        for (int j = 1; j < V; ++j) {
            temp[i-1][j-1] = c[i][j];
        }
    }
    return det(temp);
}

void spanningTreeNum::showC() {
    for (int i = 0; i < c.size(); ++i) {
        for (int j = 0; j < c[i].size(); ++j) {
            printf("%3d ", c[i][j]);
        }
        cout << endl;
    }
}
int main()
{
    spanningTreeNum G(8);
//    G.addEdge(0,1);
//    G.addEdge(0,2);
//    G.addEdge(2,1);
//    G.addEdge(2,3);
    G.addEdge(0, 1);
    G.addEdge(0, 2);
    G.addEdge(0, 3);
    G.addEdge(0, 4);

    G.addEdge(1, 2);
    G.addEdge(1, 3);
    G.addEdge(1, 5);

    G.addEdge(2, 3);
    G.addEdge(2, 6);

    G.addEdge(3, 7);

    G.addEdge(4, 5);
    G.addEdge(4, 6);
    G.addEdge(4, 7);

    G.addEdge(5, 6);
    G.addEdge(5, 7);
    
    G.addEdge(6, 7);
    cout << "���Ͼ���Ϊ��" << endl;
    G.showC();  //��ӡ��ʽ����C
    cout << "����������Ϊ��" << G.getTreeNum() << endl; // ��ӡ����������
    return 0;
}

