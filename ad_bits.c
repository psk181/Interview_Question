Swap adajecnt Bits of a number 

        int k = 0x9d9d;
        int ad_num = ((k & 0xAAAAAAAA) >> 1) | ((k & 0x55555555) << 1);

        printf("ad_num: 0x%x\n", ad_num);

      // 2nd Methord
        ad_num = k;
        int sft = 0x3;
        int temp = 0;
        int pos = 0;

        while(k)
        {
                temp = (ad_num ^ sft) >> pos;

                if(ad.temp != 0)
                        ad_num = ad_num ^ sft;

                sft = sft << 2;
                k = k >> 2;
                pos = pos + 2;
                printf("%x  %x  %x\n", ad_num, sft, k);
        }

        printf("ad_num : 0x%x\n", ad_num);
