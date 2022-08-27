// sayac= Karakter Sayısı
// uzun yani rush fonksiyonundan gelen x = Max Satır Sayısı
// rush fonksiyonundan gelen y = Bir satırda basılacak max karakter sayısı
//ft_putchar = karakter bastırma fonksiyonu
//ilkkar = ilk basılan karakter
//sonkar = son basılan karakter
//ortakar = ortada basılan karakterler
//yataysıra = içinde  bulunulan satır sayısı
void	ft_putchar(char a); //-Wall -Wextra -Werror ile compile (gcc) işlemi yapacağımızdan aynı klasördeki diğer c dosyalarını da dikkate alacak//

void	ft_print(int uzun, char ilkkar, char ortakar, char sonkar)// Her satır için bastıracağımız kod. rush fonksiyonu her yataysırada bu fonksiyonun değişkenlerini (int uzun, char ilkkar/ortakar/sonkar)  belirleyip bu kodu çalıştırıyor. x bastırılacak karakterlerin sayısını belirtiyor. sayac da bastırdığımız karakterin sayısını. Böylece satır içerisinde ilk bastıracağımız, son bastıracağımız ve arada kalan tüm karakterlerde ne bastıracağımızı belirleyebiliyoruz//
{
	int	sayac;//sayac bir integerdır. -int uzun- yani rush fonksiyonundan gelen x değeri de integer olduğundan büyük - eşit - küçük tanımlamalarında sorun olmayacaktır//

	sayac = 1; //Her satırda kombinasyon bakımından üç farklı değer var. İlk bastırılan karakter, son bastırılan karakter ve ortadaki tüm karakterler. Bu sebeple aşağıda sayac değişkeninin bire eşit olduğu ve x'e yani son karaktere eşit olduğu durumlar ve bunlar haricindekiler (yani ortadaki karakterler için durumlar tanımlı//
	while (sayac <= uzun)// sayac değeri x değişkenine ulaşana kadar bu döngüyü devam ettirir//
	{
		if (sayac == 1)//bastırılan ilk karakter için aşağıdakini uygula//
		{
			ft_putchar(ilkkar);
		}
		else if (sayac == uzun)//bastırılan son karakter için aşağıdakini uygula//
		{
			ft_putchar(sonkar);
		}
		else// ilk karakter ya da son karakterde değilsek yani diğer tüm durumlarda aşağıdakini uygula//
		{
			ft_putchar(ortakar);
		}
		sayac++;//sayac yani basılacak karakterin sütununu bir arttırır//
	}	
}

void	rush(int x, int y) 
{
	int	yataysira;

	yataysira = 1;
	while (yataysira <= y)
	{
		if (yataysira == 1 || yataysira == y) //Kombinasyonda iki farklı değer bulunuyor. İlk satır ve son satır aynı değeri veriyor. Bu sebeple yataysıranın bire eşit olduğu yani ilk satır ve y'ye yani son satıra eşit olduğu durumlar için aşağıdakini bastırıyoruz//
		{
			ft_print(x, 'A', 'B', 'C');
		}
		else
		{
			ft_print(x, 'B', ' ', 'B');
		}
		yataysira++;
		ft_putchar('\n');// Döngü bittikten sonra diğer satırı başlatmak için kullandığımız new line komutu//
	}
}

