Bir gemi kaptanı olduğunuzu düşünün, ve olasılıklara dayalı bir evrende bir yolculuğa çıkacaksınız. Kaptan sizsiniz, bu evreni tasarlayacak olan da sizsiniz.
Bu evreni tasarlarken ve kod yazarken puan alacağınız konular En önemliden en az önemliye doğru:
1. Kodunuz derlenebilir ve çalışıyor olmalı. Cmake ile derleyecekseniz, Cmakelist.txt dosyanız çalışıyor olmalı, ya da command line dan gcc ile derleyecekseniz ne komut girmem gerektiğini Readme dosyası oluşturup yazın.
2. Verdiğim business logiclerin sağlanıyor olması
3. Temiz kod yazmanız, magic number, const correctness, değişken, class ve fonksiyon isimlendirmelerini düzgün yapmanız.
4. Derste öğrendiğimiz konuların ne kadar çoğunu kullanıyor olduğunuz.
5. Memory Leak, Undefined Behavior olmamalı.
6. Tasarımınızın mümkün olduğunca esnek olmanız çok önemli, mesela event sayısı arttığında, ya da oyunuza farklı gemiler eklendiğinde, var olan yapıda silme yapmadan, sadece eklemeler yaparak genişletebiliyor olmalısınız.
7. Genel akış şu şekilde:
• Başlangıç olarak oyuncudan yani gemi kaptanından 1 adet gemi seçmesini isteyeceksiniz. Her gemide 3 farklı Özellik olacak Yakıt, Sağlık ve Para. Başlangıçta para : 0, yakıt ve sağlık 100 olarak başlayacaksınız. Her geminin 3 farklı özelliği olacak.
• Hızlı Gemi : Kaçma seçeneği seçildiğinde kaçma olasılığı normal gemiye göre 1.5 kat daha yüksek. Normal gemiye göre 1.5 kat daha çok hasar alan.
• Güçlü Gemi : Kaçma Seçeneği seçildiğinde kaçma ihtimali normal gemiye göre iki kat daha az . Normal gemiye göre 0.5 kat daha kasar alan
• Normal gemi: Kaçma seçeneği ve kaçma ihtimali dengeli.
• 3 farklı event olacak, bu eventler random olarak 5 kez çağrılacak:
• Asteroid Kuşağından Geçiş: 3 sefer seçilen gemi tipine göre, gemi 10 hasar alacak ya da almayacak.
• Terkedilmiş Gezegen: Gezegen içerisinde %50 şansla ya 10 altın kazanacak ya da Uzay Korsanları Çıkacak.
• Uzay Korsanları: Uzay korsanlarıyla karşı karşıya geleceksiniz. Gemi kaptanı olarak kullanıcıdan Kaç, Savaş, yada pazarlık et seçenekleri girmesini isteyeceksiniz.
• Eğer kaçmayı seçerseniz gemi tipine göre bi olasılıkta ya sizi kaçıracak, ya da kaçamayıp tekrar aynı uzak korsanlarıyla karşılacaksınız ve tekrar 3 seçenek sunulacak. Kaç, Savaş ya da pazarlık Et. Normal bir gemi %50 oranıyla kaçar. Kaçmayı seçmek size 33 yakıt kaybettirecek. Eğer deponuzda kaçacak kadar yakıt yoksa kaptan yani kullanıcı kaçmayı seçemeyecek.
• Eğer Savaşmayı seçerseniz: %50 oranla ya hasar alacaksınız ya da savaşı kazanacaksınız. Normal bir gemi savaşı kaybederse 30 hasar alacak.
• Pazarlık ederseniz: Korsanlar sizden 10, 20 ya da 30 altın geçiş ücreti alacak. Bu seçimi de olasılıksal olarak yapacaksınız.
• Her event sonu yakıt 0 mı diye kontrol edeceksiniz, Yakıt 0 kalmışsa oyunu bitireceksiniz.
• Oyun sonunda ise yani yakıt 0 olduğunda ya da 5 event sonunda, Kalan yakıtı 5 ile, Gemi Sağlığını ve Kasadaki parayı ayrı ayrı 10 ile çarpıp puan alacaksınız. Yani Puan = (Yakıt) x 5 + (Gemi Sağlığı) x 10 + (Kasadaki Para) x 10
