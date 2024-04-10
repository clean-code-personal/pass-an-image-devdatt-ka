#pragma once
#include <cstdint>
#include <memory>
struct Image {
	int rows;
	int columns;
	uint8_t pixels[1024 * 1024]; // max 1k x 1k image
};

class ImageBrightener {
private:
	const std::unique_ptr <Image>& m_inputImage;
public:
	ImageBrightener(const std::unique_ptr<Image>& inputImage);
	//ImageBrightener(Image& inputImage);
	int BrightenWholeImage();
	const std::unique_ptr <Image>& GetImage();
};
