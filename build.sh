# make clea
# make mrproper
export ARCH=arm64
export CROSS_COMPILE=../gcc/bin/aarch64-linux-android-
export KBUILD_BUILD_USER="IMPEACH TRUMP!"
export KBUILD_BUILD_HOST="CodeOfHonor.Tech"
echo -e "\e[31mRemove out"
rm -r ../out
echo -e "\e[32mMake out"
mkdir ../out
echo -e "\e[97mBuil"
make ARCH=arm64 O=../out merge_hi6250_defconfig
time make ARCH=arm64 O=../out -j8 |& tee szar
