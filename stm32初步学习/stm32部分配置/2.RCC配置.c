//RCC为时钟配置，HSE与LSE一般选择Crystal/Ceramic Resonator，此项为外部时钟源的选择，外部时钟源为石英晶体产生的时钟，准确率相较于内部时钟较高。
//其余选项，不管，暂时不知道什么用处
//注意：选择外部时钟源时，需知道，晶振的频率为多少，比如电赛中，我们的G474板子的晶振频率为25Mhz，此时在时钟树中，应当将HSE改为25Mhz，
//      不然外部时钟不会工作。一般来说，cube自动选择为8Mhz，其他的单片机，如f103等网上买的，不用更改。
//血的教训！！！
