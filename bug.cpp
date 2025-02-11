std::vector<int> myVector(10); 
for (int i = 0; i <= myVector.size(); ++i) { 
  myVector[i] = i * 2; 
}
//This code will lead to segmentation fault because the valid index for accessing elements in the vector is from 0 to size()-1.