std::vector<int> myVector(10);
for (int i = 0; i < myVector.size(); ++i) {
  myVector[i] = i * 2; 
}
//This corrected code avoids the segmentation fault by ensuring the loop iterates only up to size()-1.