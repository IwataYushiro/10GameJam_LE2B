#pragma once
#include "Model.h"
#include "WorldTransform.h"
#include "TextureManager.h"

class Cat
{
public:
	//向き
	enum Direction
	{
		up, right, down, left,
	};

	Cat();
	~Cat();
	//初期化
	void Initialize(Model* model, uint32_t textureHandle);
	//更新
	void Update();
	//描画
	void Draw(ViewProjection viewProjection);

private:
	//ワールド座標
	WorldTransform worldTransform_;
	//モデル
	Model* model_ = nullptr;
	//テクスチャハンドル
	uint32_t textureHandle_ = 0u;
};

Cat::Cat()
{
}

Cat::~Cat()
{
}