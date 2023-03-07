#include "torch/torch.h"
#include "torch/script.h"
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include <iostream>
#include <string.h>
int main() {
	cv::Mat img = cv::imread("D:\\University\\senior\\MCM\\pic\\lstm.png");
	cv::imshow("show", img);
	cv::waitKey(3000);
	torch::Tensor tensor = torch::rand({ 2, 3 });
	if (torch::cuda::is_available()) {
		std::cout << "CUDA is available! Training on GPU" << std::endl;
		auto tensor_cuda = tensor.cuda();
		std::cout << tensor_cuda << std::endl;
	}
	else
	{
		std::cout << "CUDA is not available! Training on CPU" << std::endl;
		std::cout << tensor << std::endl;
	}


	std::cin.get();
}
