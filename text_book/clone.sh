url="https://github.com/yanshengjia/cpp-playground.git"


until git clone "$url"; do
    echo "clone failed"
    sleep 1
done
echo "Cloning completed successfully"
