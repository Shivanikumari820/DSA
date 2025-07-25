int n, m;

    cout << "Enter size of array A: ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter elements of array A:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter size of array B: ";
    cin >> m;
    vector<int> B(m);
    cout << "Enter elements of array B:\n";
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }