/* Enter your code here. */
int compute;
try {
	compute = Server::compute(A, B);
        cout << compute << endl; 
} catch(const bad_alloc& ba) {
        cout << "Not enough memory" << endl;
} catch(const exception& se) {
        cout << "Exception: " << se.what() << endl;
} catch(...) {
        cout << "Other Exception" << endl;
}
