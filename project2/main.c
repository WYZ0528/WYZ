#include "help.h"
int main(){
     int fd = -1;
    int ret = -1;
    int size = -1;
    char read_buf[1024] = {0};
    char write_buf[32] = "This is,too.";

    printf("-------------READ FILE-----------------\n");
    fd = open(filePath, O_RDWR | O_APPEND);
    if (fd == -1)
    {
        printf("open failed\n");
        return 0;
    }

    ret = lseek(fd, 0, SEEK_SET);
    if (ret == -1)
    {
        printf("lseek function failed.\n");
        close(fd);
        return 0;
    }
    printf("initial position is:%d\n", ret);

    size = read(fd, read_buf, sizeof(read_buf));
    if (size == -1)
    {
        printf("read failed\n");
        close(fd);
        return 0;
    }
    printf("read number of character == %d\n", size);
    printf("read_buf:%s\n", read_buf);
    close(fd);

    printf("--------------WRITE FILE----------------\n");
    fd = open(filePath, O_RDWR | O_APPEND);
    if (fd == -1)
    {
        printf("open failed\n");
        return 0;
    }

    ret = lseek(fd, 0, SEEK_SET);
    if (ret == -1)
    {
        printf("lseek failed.\n");
        close(fd);
        return 0;
    }
    printf("initial position is:%d\n", ret);

    size = write(fd, write_buf, strlen(write_buf));
    if (size == -1)
    {
        printf("write failed\n");
        close(fd);
        return 0;

    }
    printf("write number of character == %d\n", size);
    close(fd);
    return 0;
}
