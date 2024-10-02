# **Đây là những bài tập thi Học Sinh giỏi và ...**

Trong đây có ghi sẵn chi tiết đề bài và hướng dẫn giải bằng 2 ngôn ngữ lập trình chính như trong đề thi cho phép là `C++` và `Python.`

Vì tôi viết bằng `Text editor: Visual Studio Code` [(vscode)](https://code.visualstudio.com/) + môi trường [MSYS2](https://www.msys2.org/) hoặc [MinGW](https://sourceforge.net/projects/mingw/) cho `C++` nên có thư viện tổng hợp:
```
#include<bits/stdc++.h>
```
thì có nhiều IDE khác không có, nên các bạn tự sửa phần thư viện nha. 

**Lưu ý:** `vscode` của sẽ không đọc được 2 file `.INP` và `.OUT` là do lệnh gọi file `main` chạy. Thì tôi dùng extension [code runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) để giúp chạy code nên sẽ bị vấn đề này.
## Đề khắc phục thì có 2 cách chính:
### Cách 1: Chỉnh file setting.json
Để có thể xem setting của extension này thì bạn nhấn vào `extension setting` >> tìm `Code-runner: Executor Map` >> nhấn vào `Edit in setting.jsong`. Với mặc định thì python sẽ như này: 
```
"python": "python -u",
```
Và bạn chỉ cần sửa đoạn code thành như này:
```
"python": "cd $dir && python $fileName",
```
Thì đã có thể chạy mà không cần lấy link của 2 file  `.INP` và `.OUT`

### Cách 2: Lấy link của file dán trực tiếp vào code
+ Mở "File Explorer" hoặc "This PC" và tìm kiếm cái chỗ lưu trữ bài code với file `.INP` và `.OUT`, ở trên có thanh Address nhấn vào đó để sao chép địa chỉ rồi dán vào trong đoạn code.

+ Còn nếu trong `vscode` thì chỉ cần chuột phải chọn `Copy path hoặc (Shift + Alt + C)` là xong.

Hãy làm thêm bước này: Vào `setting hoặc (ctrl + ,)` >> gõ tìm kiếm `Execute in file dir` >> tìm `Code-runner: File Directory As Cwd` >> tích lên.


Và nhớ tự đọc đề là thử trước và xem các giải sau. **Lưu ý:** Cách giải chưa chắc là tối ưu nhất, bạn có thể tham khảo y tưởng và diễn lại theo ý mình.
# "Luyện tập – Thử thách – Không ngại khó" trích [How Kteam](https://howkteam.vn/learn)
