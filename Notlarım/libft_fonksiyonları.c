Fonksiyonlar <ctype.h>

ft_isalpha - alfabetik bir karakter olup olmadığını kontrol eder
ft_isdigit - bir rakamı (0'dan 9'a kadar) kontrol eder.
ft_isalnum - alfanümerik bir karakter olup olmadığını kontrol eder
ft_isascii - c'nin ASCII karakter kümesine uyup uymadığını kontrol eder
ft_isprint - yazdırılabilir herhangi bir karakter olup olmadığını kontrol eder
ft_toupper - karakteri büyük harfe çevir
ft_tolower - char'ı küçük harfe dönüştür

Fonksiyonlar <string.h>

ft_memset - belleği sabit bir bayt ile doldurun
ft_strlen - bir dizenin uzunluğunu hesaplamak
ft_bzero - bir bayt dizesini sıfırlayın
ft_memcpy - hafıza alanını kopyala
ft_memmove - hafıza alanını kopyala
ft_strlcpy - dizeyi belirli bir boyuta kopyala
ft_strlcat - dizeyi belirli bir boyuta birleştir
ft_strchr - dizedeki karakteri bulun
ft_strrchr - dizedeki karakteri bulun
ft_strncmp - iki dizeyi karşılaştırın
ft_memchr - bir karakter için hafızayı tara
ft_memcmp - hafıza alanlarını karşılaştırın
ft_strnstr - bir dizgede bir alt dizgiyi bulun
ft_strdup - parametre olarak iletilen dize için bir kopya oluşturur

Fonksiyonlar <stdlib.h>

ft_atoi - bir dizeyi tam sayıya dönüştürmek
ft_calloc - belleği ayırır ve bayt değerlerini 0'a ayarlar

Standart olmayan fonksiyonlar

ft_substr - bir dizgeden bir alt dizgi döndürür
ft_strjoin - iki dizeyi birleştirir
ft_strtrim - belirli karakter kümesiyle dizenin başlangıcını ve sonunu keser
ft_split - parametre olarak bir karakter kullanarak bir dizeyi böler
ft_itoa - bir sayıyı dizeye dönüştürür
ft_strmapi - bir dizgenin her karakterine bir işlev uygular
ft_striteri - bir dizgenin her karakterine bir işlev uygular
ft_putchar_fd - bir dosya tanıtıcısına bir karakter çıktısı
ft_putstr_fd - bir dosya tanıtıcısına bir dize çıktısı alın
ft_putendl_fd - dosya tanıtıcısına bir dize çıktısı alın ve ardından yeni bir satır
ft_putnbr_fd - bir dosya tanımlayıcısına bir sayı çıktısı

Bağlantılı liste işlevleri

ft_lstnew - yeni bir liste öğesi oluşturur
ft_lstadd_front - listenin başına bir eleman ekler
ft_lstsize - bir listedeki öğelerin sayısını sayar
ft_lstlast - listenin son öğesini döndürür
ft_lstadd_back - listenin sonuna bir eleman ekler
ft_lstclear - siler ve ücretsiz liste
ft_lstiter - bir listenin her elemanına bir fonksiyon uygular
ft_lstmap - bir listenin her elemanına bir fonksiyon uygular
