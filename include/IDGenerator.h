class IDGenerator {
public:
    // 获取唯一实例
    static IDGenerator& getInstance() {
        static IDGenerator instance; // 静态局部变量，保证只实例化一次
        return instance;
    }

    // 生成唯一ID
    int generateUniqueID() {
        return currentID++;
    }

private:
    int currentID;

    // 私有构造函数，防止外部实例化
    IDGenerator() : currentID(0) {} // 初始化 currentID 为 0
    IDGenerator(const IDGenerator&) = delete;            // 禁止拷贝构造函数
    IDGenerator& operator=(const IDGenerator&) = delete; // 禁止赋值操作符
};
