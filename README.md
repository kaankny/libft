# Libft: Kendi Yazdığınız İlk Kütüphane

## Proje Açıklaması

Libft projesi, C programlama dilinde kendi kütüphanenizi yazmanızı amaçlayan bir projedir. Bu kütüphane, genel amaçlı fonksiyonlar içerir ve ileriye dönük C projelerinizde kullanmanız için temel bir araç seti sağlar. Bu proje, C dilinde yaygın olarak kullanılan birçok standart fonksiyonu kendi başınıza yazmayı ve anlamayı hedefler.

## İçindekiler
1. [Giriş](#giriş)
2. [Genel Talimatlar](#genel-talimatlar)
3. [Zorunlu Kısım](#zorunlu-kısım)
    - [Teknik Özellikler](#teknik-özellikler)
    - [Bölüm 1: Libc Fonksiyonları](#bölüm-1-libc-fonksiyonları)
    - [Bölüm 2: Ekstra Fonksiyonlar](#bölüm-2-ekstra-fonksiyonlar)
4. [Bonus Kısım](#bonus-kısım)
5. [Gönderme ve Peer-Evaluation](#gönderme-ve-peer-evaluation)

## Giriş

C programlama dilinde standart fonksiyonlara erişiminiz olmadığında programlama oldukça zor ve sıkıcı olabilir. Bu proje ile kendi kütüphanenizi oluşturarak, C dilinde sık kullanılan fonksiyonları yeniden yazmayı ve anlamayı öğreneceksiniz. Bu kütüphane, ileride yapacağınız C projelerinde faydalı olacak ve onları daha verimli yazmanıza yardımcı olacaktır.

## Genel Talimatlar

- Projeleriniz C programlama dilinde yazılmalıdır.
- Projeleriniz Norm’a uygun olarak yazılmalıdır. Bonus dosyalarınız veya fonksiyonlarınız varsa, bunlar norm kontrolüne dahil edilir ve norm hatası varsa 0 alırsınız.
- Fonksiyonlarınız beklenmedik bir şekilde sonlanmamalıdır (Segmentasyon hatası, bus hatası, double free hatası, vb.). Eğer bu hatalar yaşanırsa 0 alırsınız.
- Heap’de ayırdığınız hafıza adresleri gerekli olduğu durumlarda serbest bırakılmalıdır. Hiçbir istisna tolere edilmeyecektir.
- Eğer proje Makefile dosyası ile teslim edilmesi gerekiyorsa, Makefile dosyası Wall, Wextra, Werror bayrakları ile derlemelidir.
- Makefile dosyanız en azından $(NAME), all, clean, fclean ve re kurallarını içermelidir.
- Projenize bonus kısmını eklemek için Makefile dosyanıza bonus kuralını dahil etmeniz gerekmektedir.
- Kendi yazdığınız libft kütüphanesini kullanmanıza izin veriliyorsa, bu kütüphane ve Makefile dosyasını proje dizinindeki libft klasörüne kopyalamanız gerekmektedir.

## Zorunlu Kısım

### Teknik Özellikler

- Global değişken tanımlamak yasaktır.
- Yardımcı fonksiyonlara ihtiyacınız varsa, bunları statik olarak tanımlayın.
- Tüm dosyalarınızı deponuzun kök dizinine yerleştirin.
- Kullanılmayan dosya yüklemek yasaktır.
- Her .c dosyası, -Wall -Wextra -Werror bayrakları ile derlenmelidir.
- Kitaplığınızı oluşturmak için ar komutunu kullanmalısınız. libtool komutunun kullanılması yasaktır.
- libft.a dosyanız, deponuzun kökünde oluşturulmalıdır.

### Bölüm 1: Libc Fonksiyonları

- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi
- calloc
- strdup

### Bölüm 2: Ekstra Fonksiyonlar

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

## Bonus Kısım

Bonus kısmı, zorunlu kısmı tamamladıktan sonra yapabileceğiniz ekstra görevlerdir. Başarıyla tamamlanırsa ekstra puan getirir. Aşağıdaki liste işlevleri içermelidir:

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

## Gönderme ve Peer-Evaluation

Projenizi Git deponuza gönderin. Savunma sırasında yalnızca deponuzdaki çalışmalar değerlendirilecektir. Dosyalarınızın adlarını doğru olduklarından emin olun.
