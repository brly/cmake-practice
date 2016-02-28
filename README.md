# CMAKE practice

以下のようなビルドを達成する

- model
  - `model.dylib` を生成する
  - 依存 dylib なし
- view
  - `view.dylib` を生成する
  - model.dylib に依存
- controller
  - `controller.dylib` を生成する
  - view.dylib, model.dylib に依存
- entrypoint
  - `Application.app` を生成
  - 全ての dylib に依存
  - `SubApplication.app` の実行を試す
- sub-entrypoint
  - `SubApplication.app` を生成
  - 全ての dylib に依存
