std::vector<int> vec = {1, 2, 3};
try {
  vec.at(3) = 4; // Throws an exception if out of bounds
} catch (const std::out_of_range& oor) {
  std::cerr << "Out of Range error: " << oor.what() << '\n';
}

//Or check the size before accessing 
int index = 3;
if (index >= 0 && index < vec.size()) {
    vec[index] = 4; //Access after bounds checking
} else {
    std::cerr << "Index out of range";
}
