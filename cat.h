#pragma once
#include "Model.h"
#include "WorldTransform.h"
#include "TextureManager.h"

class Cat
{
public:
	//����
	enum Direction
	{
		up, right, down, left,
	};

	Cat();
	~Cat();
	//������
	void Initialize(Model* model, uint32_t textureHandle);
	//�X�V
	void Update();
	//�`��
	void Draw(ViewProjection viewProjection);

private:
	//���[���h���W
	WorldTransform worldTransform_;
	//���f��
	Model* model_ = nullptr;
	//�e�N�X�`���n���h��
	uint32_t textureHandle_ = 0u;
};

Cat::Cat()
{
}

Cat::~Cat()
{
}