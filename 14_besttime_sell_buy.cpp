        
        int i, camt=INT_MAX, pro=0;
        
        for(i=0; i<prices.size(); i++)
        {
            if(camt>prices[i])
                camt=prices[i];
            else
            {
                if(pro<(prices[i]-camt))
                    pro=prices[i]-camt;
            }
        }
        return pro;
    }